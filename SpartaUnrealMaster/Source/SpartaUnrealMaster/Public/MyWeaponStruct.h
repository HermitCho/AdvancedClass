// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/*
	아무것도 안쓰고 코드를 짤 경우.
	Struct = public
	Class = private

	Struct 사용 시, 빌드할 때 더 안정적이다.
*/

#include "Engine/DataTable.h"
#include "MyWeaponStruct.generated.h"

USTRUCT(BlueprintType)
struct FWeaponData : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WeaponName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> WeaponClass;
};