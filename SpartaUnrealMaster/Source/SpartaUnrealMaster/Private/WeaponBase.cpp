#include "WeaponBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

AWeaponBase::AWeaponBase()
{
    PrimaryActorTick.bCanEverTick = false;

    SetActorEnableCollision(false);

    float Damage = 10.f;
    int32 PelletCount = 8;
    float SpreadAngle = 5.f;
    float Range = 5000.f;
    float RecoilPitch = -3.f;
    float RecoilYaw = 1.f;
}

void AWeaponBase::Fire()
{
}

void AWeaponBase::ApplyRecoil()
{
    APawn* OwnerPawn = Cast<APawn>(GetOwner());
    if (!OwnerPawn) return;

    APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController());
    if (!PC) return;

    float RandomYaw = FMath::RandRange(
        -WeaponData.RecoilYaw,
        WeaponData.RecoilYaw
    );

    PC->AddPitchInput(WeaponData.RecoilPitch);
    PC->AddYawInput(RandomYaw);
}