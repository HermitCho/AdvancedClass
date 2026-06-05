// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWorldSubsystem.h"
#include "7week/TimeWorldSubsystem.h"

bool UMyWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	UWorld* World = Cast<UWorld>(Outer);

	return World && World->GetMapName().Contains(TEXT("StarterMap"));
}

void UMyWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogTemp, Warning, TEXT("My Subsystem Begin"));

	UTimeWorldSubsystem* TimeSub = Collection.InitializeDependency<UTimeWorldSubsystem>();

	if (TimeSub)
	{
		int32 CurrentHours = TimeSub->GetCurrentHour();
		UE_LOG(LogTemp, Warning, TEXT("Current Hours : %d"), CurrentHours);
	}
}

void UMyWorldSubsystem::Deinitialize()
{
	Super::Deinitialize();

	UE_LOG(LogTemp, Warning, TEXT("My Subsystem End"));
}
