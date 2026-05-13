// Fill out your copyright notice in the Description page of Project Settings.

#include "SpartaUnrealMaster/Public/5week/MyTorchLight.h"
#include "SpartaUnrealMaster/Public/5week/TestMyInterface.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AMyTorchLight::AMyTorchLight()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyTorchLight::BeginPlay()
{
	Super::BeginPlay();

	//cpp에서밖에 사용 불가능.	
	//for (const TWeakObjectPtr<AActor>& Item : Items)
	//{
	//	ITestMyInterface* MyInterface = Cast<ITestMyInterface>(Item.Get());

	//	if (MyInterface)
	//	{
	//		MyInterface->OnFireDetected(100.f, FVector::ZeroVector);
	//	}
	//}

	for (const TWeakObjectPtr<AActor>& Item : Items)
	{
		if (UKismetSystemLibrary::DoesImplementInterface(Item.Get(), UTestMyInterface::StaticClass()))
		{
			ITestMyInterface::Execute_OnFireDetected(Item.Get(), 100.f, FVector::ZeroVector);
		}
	}
}

// Called every frame
void AMyTorchLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

