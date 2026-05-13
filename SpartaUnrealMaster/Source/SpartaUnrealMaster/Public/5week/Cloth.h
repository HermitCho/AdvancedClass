// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "SpartaUnrealMaster/Public/5week/TestMyInterface.h"
#include "Cloth.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAUNREALMASTER_API ACloth : public AItemBase, public ITestMyInterface
{
	GENERATED_BODY()

public:

	virtual void OnFireDetected_Implementation(float Temperature, FVector HitLocation) override;

protected:

	UPROPERTY(EditAnywhere, Category = "Effects")
	TObjectPtr<class UParticleSystem> FireEffect;
};
