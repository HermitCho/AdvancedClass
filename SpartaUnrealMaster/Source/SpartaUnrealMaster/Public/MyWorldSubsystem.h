// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MyWorldSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAUNREALMASTER_API UMyWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:

	//treu면 생성, false면 생성하지 않음.
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	//서브시스템 시작할 때 호출
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	//서브시스템 끝날 때 호출
	virtual void Deinitialize() override;

};
