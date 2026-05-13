// Fill out your copyright notice in the Description page of Project Settings.

#include "SpartaUnrealMaster/Public/5week/ItemBase.h"
#include "Kismet/GameplayStatics.h"
#include "SpartaUnrealMaster/Public/5week/MyActorComponent.h"
#include "GameFramework/Character.h"

// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	if (PlayerCharacter)
	{
		UMyActorComponent* HealthComp = PlayerCharacter->FindComponentByClass<UMyActorComponent>();
		if (HealthComp)
		{
			HealthComp->OnHealthDead.AddDynamic(this, &AItemBase::PlayerDeathReceive);
		}
		else
		{
			//안됐다....
		}
	}
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItemBase::PlayerDeathReceive(AController* InstigatorController)
{
	Destroy();
}

