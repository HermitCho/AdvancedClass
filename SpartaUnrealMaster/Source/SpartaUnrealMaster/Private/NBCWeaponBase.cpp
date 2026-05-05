// Fill out your copyright notice in the Description page of Project Settings.

#include "NBCWeaponBase.h"
#include "Components/ArrowComponent.h"
#include "TimerManager.h"

// Sets default values
ANBCWeaponBase::ANBCWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	FirePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePoint"));
	FirePoint->SetupAttachment(RootComponent);

	AmmoPerFire = 1;
	CurrentAmmo = 0;
	MaxAmmo = 12;
	RoF = 1.f;
	CanFire = true;
	Range = 1000.f;
	DamagePerHit = 10.f;
}

void ANBCWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANBCWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	CurrentAmmo = MaxAmmo;
}

void ANBCWeaponBase::Fire()
{
	CanFire = false;
	GetWorld()->GetTimerManager().SetTimer(TimerFireDelay, this, &ANBCWeaponBase::HandleFireDelay, 1.f / RoF, false);
}

void ANBCWeaponBase::HandleFireDelay()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerFireDelay);
	CanFire = true;
}