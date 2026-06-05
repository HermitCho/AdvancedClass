// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/AssetManager.h"
#include "MyTestPrimaryDataAsset.h"
#include "MyDataAssetTestActor.generated.h"

UCLASS()
class SPARTAUNREALMASTER_API AMyDataAssetTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDataAssetTestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "ItemTest")
	FPrimaryAssetId ItemIDToLoad;

	UPROPERTY(VisibleAnywhere, Category = "ItemTest")
	class UMyTestPrimaryDataAsset* LoadedItem;

	//최초로 실행될 함수
	void StartLoading();

	//AssetManager
	TSharedPtr<FStreamableHandle> LoadingHandle;

	void OnLoadFinished(FPrimaryAssetId LoadedId);
};
