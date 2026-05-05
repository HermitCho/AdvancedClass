// Fill out your copyright notice in the Description page of Project Settings.

#include "NBCWeaponTemplateBase.h"

void ANBCWeaponTemplateBase::Fire()
{
	if (!CanFire) return;

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

void ANBCWeaponTemplateBase::Reload_Implementation()
{
	CurrentAmmo = MaxAmmo;
}

bool ANBCWeaponTemplateBase::CheckAmmo_Implementation()
{
	return AmmoPerFire <= CurrentAmmo;
}

void ANBCWeaponTemplateBase::UpdateAmmo_Implementation()
{
	CurrentAmmo -= AmmoPerFire;
}