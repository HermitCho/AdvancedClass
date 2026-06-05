// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyTestPrimaryDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAUNREALMASTER_API UMyTestPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	//에셋 매니저가 이 파일을 식별할 수 있도록 넘겨주는 ID.
	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId(ItemType, GetFName());
	}

	// Weapon(카테고리):Sword 형식으로 저장.

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	FPrimaryAssetType ItemType;

	//Struct처럼 사용

	UPROPERTY(EditAnywhere, Category = "Visual", meta = (AssetBundles = "Mesh"))
	TSoftObjectPtr<USkeletalMesh> ItemMesh;

	UPROPERTY(EditAnywhere, Category = "Visual", meta = (AssetBundles = "Mesh"))
	TSoftObjectPtr<USkeletalMesh> ItemMesh2;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float AttackPower;
};
