// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponTemplateBase.h"
#include "TimerManager.h"

void AWeaponTemplateBase::Fire()
{
	if (!CanFire || bIsReloading) return;

	if (CheckAmmo())
	{
		//순서를 여기서 저희 맘대로!!!!!!
		PlayEffects();
		ProcessFiring();
		UpdateAmmo();

		Super::Fire();
		return;
	}
}

void AWeaponTemplateBase::Reload_Implementation()
{

	UE_LOG(LogTemp, Warning, TEXT("재장전 시작"));
	if (bIsReloading || CurrentAmmo >= MaxAmmo) return;

	bIsReloading = true;
	CanFire = false;

	// 3초 뒤에 HandleReloadFinished 실행
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Reload, this, &AWeaponTemplateBase::HandleReloadFinished, 3.0f, false);
}

void AWeaponTemplateBase::HandleReloadFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("재장전 끝"));
	CurrentAmmo = MaxAmmo;
	bIsReloading = false;
	CanFire = true;

	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_Reload);
}

bool AWeaponTemplateBase::CheckAmmo_Implementation()
{
	return AmmoPerFire <= CurrentAmmo;
}

void AWeaponTemplateBase::UpdateAmmo_Implementation()
{
	CurrentAmmo -= AmmoPerFire;
}