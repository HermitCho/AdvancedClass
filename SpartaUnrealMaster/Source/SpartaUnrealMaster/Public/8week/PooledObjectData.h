// 컴포넌트의 파라미터 용도

#pragma once

#include "CoreMinimal.h"
#include "PooledObjectData.generated.h"

USTRUCT(BlueprintType)
struct FPooledObjectData
{
	GENERATED_BODY()

	FPooledObjectData()
	{
		ActorTemplate = nullptr;
		PoolSize = 1;
		bCanGrow = false;
		ActorName = "default";
	}

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorTemplate;

	UPROPERTY(EditAnywhere)
	int32 PoolSize;

	//PoolSize보다 많을 때, 더 만들지
	UPROPERTY(EditAnywhere)
	bool bCanGrow;

	UPROPERTY(EditAnywhere)
	FString ActorName;
};