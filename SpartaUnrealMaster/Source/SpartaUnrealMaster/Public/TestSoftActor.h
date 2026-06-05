// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestSoftActor.generated.h"

UCLASS()
class SPARTAUNREALMASTER_API ATestSoftActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestSoftActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Settings")
	TSoftObjectPtr<UStaticMesh> MySoftMesh;

	void LoadWithSoftPtr();

	void MyOnLoadCompleted();
};
