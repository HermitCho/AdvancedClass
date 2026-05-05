// Fill out your copyright notice in the Description page of Project Settings.


#include "NBCSandboxWeaponBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ArrowComponent.h"

void ANBCSandboxWeaponBase::Fire()
{
	SandboxFire();
}

void ANBCSandboxWeaponBase::Reload()
{
	CurrentAmmo = MaxAmmo;
	HandleFireDelay();
}

bool ANBCSandboxWeaponBase::CheckAmmo()
{
	return AmmoPerFire <= CurrentAmmo;
}

void ANBCSandboxWeaponBase::LinetraceOneShot(FVector Direction)
{
	FHitResult Hit(ForceInit);

	FVector Start = FirePoint->GetComponentLocation();
	FVector End = Start + (Direction * Range);

	UKismetSystemLibrary::LineTraceSingle(GetWorld(),
		Start,
		End,
		UEngineTypes::ConvertToTraceType(ECC_Visibility),
		false,
		{ this, GetOwner() },
		EDrawDebugTrace::ForDuration,
		Hit,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		5.f
	);
}

void ANBCSandboxWeaponBase::PlaySound(USoundBase* Sound)
{
	UGameplayStatics::PlaySoundAtLocation(this, Sound, GetActorLocation());
}

void ANBCSandboxWeaponBase::UpdateAmmo()
{
	CurrentAmmo -= AmmoPerFire;
}