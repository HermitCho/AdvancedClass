#include "Shotgun.h"
#include "ShotgunDamageType.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

void AShotgun::Fire()
{
    UE_LOG(LogTemp, Warning, TEXT("Fire Input"));

    ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
    if (!OwnerCharacter) return;

    AController* Controller = OwnerCharacter->GetController();
    if (!Controller) return;

    FVector CameraLocation;
    FRotator ViewRot;
    Controller->GetPlayerViewPoint(CameraLocation, ViewRot);

    FVector Start = OwnerCharacter->GetMesh()->GetSocketLocation(TEXT("WeaponSocket"));

    for (int32 i = 0; i < WeaponData.PelletCount; i++)
    {
        FRotator SpreadRot = ViewRot;
        SpreadRot.Pitch += FMath::RandRange(-WeaponData.SpreadAngle, WeaponData.SpreadAngle);
        SpreadRot.Yaw += FMath::RandRange(-WeaponData.SpreadAngle, WeaponData.SpreadAngle);

        FVector End = Start + SpreadRot.Vector() * WeaponData.Range;

        FHitResult Hit;
        FCollisionQueryParams Params;
        Params.AddIgnoredActor(this);
        Params.AddIgnoredActor(GetOwner());

        bool bHit = GetWorld()->LineTraceSingleByChannel(
            Hit,
            Start,
            End,
            ECC_Visibility,
            Params
        );

        DrawDebugLine(
            GetWorld(),
            Start,
            End,
            FColor::Red,
            false,
            1.f
        );

        if (bHit)
        {
            UGameplayStatics::ApplyPointDamage(
                Hit.GetActor(),
                WeaponData.Damage,
                SpreadRot.Vector(),
                Hit,
                Controller,
                this,
                UShotgunDamageType::StaticClass()
            );
        }
    }

    ApplyRecoil();
}