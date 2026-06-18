// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "WeaponTemplateBase.generated.h"

UCLASS()
class SPARTAUNREALMASTER_API AWeaponTemplateBase : public AWeaponBase
{
	GENERATED_BODY()
public:

	virtual void Fire() override;

	UFUNCTION(BlueprintNativeEvent)
	void Reload();

protected:
	UFUNCTION()
	void HandleReloadFinished();

protected:
	//BlueprintNativeEvent = 블루프린트, C++에서 모두 수정.
	UFUNCTION(BlueprintNativeEvent)
	bool CheckAmmo();

	//BlueprintImplementableEvent = 블루프린트에서만 수정.(C++은 수정x)
	//총을 어떻게 쏠지
	UFUNCTION(BlueprintImplementableEvent)
	void ProcessFiring();

	//이펙트 실행
	UFUNCTION(BlueprintImplementableEvent)
	void PlayEffects();

	//총알 업데이트
	UFUNCTION(BlueprintNativeEvent)
	void UpdateAmmo();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon | State")
	bool bIsReloading = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FTimerHandle TimerHandle_Reload;
};