// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBox.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"

// Sets default values
AWeaponBox::AWeaponBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeaponBox::BeginPlay()
{
	Super::BeginPlay();
	
	OpenBox();
}

// Called every frame
void AWeaponBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//동기
void AWeaponBox::OpenBox()
{
	if (!WeaponTable) return;

	TArray<FWeaponData*> AllWeapons;
	WeaponTable->GetAllRows<FWeaponData>(TEXT(""), AllWeapons);

	if (AllWeapons.Num() == 0) return;

	FWeaponData* SelectedWeapon = AllWeapons[FMath::RandRange(0, AllWeapons.Num() - 1)];

	if (SelectedWeapon)
	{
		UClass* LoadedClass = SelectedWeapon->WeaponClass.LoadSynchronous();

		if (LoadedClass)
		{
			FActorSpawnParameters SpawnParams;

			GetWorld()->SpawnActor<AActor>(LoadedClass, GetActorLocation() + FVector(0, 0, 100), FRotator::ZeroRotator, SpawnParams);

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("소환 완료 : %s"), *SelectedWeapon->WeaponName));
		}
	}
}

//비동기
//void AWeaponBox::OpenBox()
//{
//	if (!WeaponTable) return;
//
//	TArray<FWeaponData*> AllWeapons;
//	WeaponTable->GetAllRows<FWeaponData>(TEXT(""), AllWeapons);
//
//	if (AllWeapons.Num() == 0) return;
//
//	FWeaponData* SelectedWeapon = AllWeapons[FMath::RandRange(0, AllWeapons.Num() - 1)];
//
//	if (SelectedWeapon)
//	{
//		UAssetManager::GetStreamableManager().RequestAsyncLoad(SelectedWeapon->WeaponClass.ToSoftObjectPath(),
//			FStreamableDelegate::CreateUObject(
//				this,
//				&AWeaponBox::OnWeaponSpawnDefferred,
//				SelectedWeapon->WeaponClass
//			));
//	}
//}
//
//void AWeaponBox::OnWeaponSpawnDefferred(TSoftClassPtr<AActor> WeaponClassPtr)
//{
//}