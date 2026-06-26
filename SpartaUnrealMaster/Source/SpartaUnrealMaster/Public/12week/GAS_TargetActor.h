// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "GAS_TargetActor.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAUNREALMASTER_API AGAS_TargetActor : public AGameplayAbilityTargetActor
{
	GENERATED_BODY()
	
public:
	AGAS_TargetActor();

	virtual void Tick(float DeltaTime) override;

	virtual void StartTargeting(UGameplayAbility* Ability) override;

	virtual void ConfirmTargetingAndContinue() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	float TraceRange;
	
	bool LineTrace(FHitResult& TraceHitResult);


};
