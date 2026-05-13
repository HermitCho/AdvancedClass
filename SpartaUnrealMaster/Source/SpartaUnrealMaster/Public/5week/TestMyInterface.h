// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TestMyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTestMyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SPARTAUNREALMASTER_API ITestMyInterface
{
	GENERATED_BODY()

public:
	// = 0을 붙이면, 이 인터페이스를 상속받으면 반드시 해당 함수를 만들어야함.
	//virtual void OnFireDetected(float Temperature, FVector HitLocation) = 0;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
	void OnFireDetected(float Temperature, FVector HitLocation);
};
