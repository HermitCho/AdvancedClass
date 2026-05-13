// Fill out your copyright notice in the Description page of Project Settings.


#include "5week/Wood.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

void AWood::OnFireDetected_Implementation(float Temperature, FVector HitLocation)
{
	if (FireEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			FireEffect,
			GetActorLocation(),
			GetActorRotation(),
			FVector(1.f)
		);
	}
}