// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "MonsterBase.generated.h"

class ASpartaUnrealMasterCharacter;

UCLASS()
class SPARTAUNREALMASTER_API AMonsterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AMonsterBase();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Die(ASpartaUnrealMasterCharacter* Killer);

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag MonsterTag;

};