// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PooledObject.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPARTAUNREALMASTER_API UPooledObject : public UActorComponent
{
	GENERATED_BODY()

public:	
	void Init(class AMyObjectPool* Owner);

	UFUNCTION()
	void RecycleSelf();

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	bool bIsPoolActive;

private:

	//월드에 이미 있음 -> 가바지 컬렉션이 지우지 않음 -> UPROPERTY 안 붙여도 됨.
	TObjectPtr<class AMyObjectPool> ObjectPool;

	//자멸버튼
	virtual void OnComponentDestroyed(bool bDestroyingHierachy) override;
};
