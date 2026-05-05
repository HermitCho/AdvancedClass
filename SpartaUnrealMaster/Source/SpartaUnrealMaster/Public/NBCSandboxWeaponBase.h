// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NBCWeaponBase.h"
#include "NBCSandboxWeaponBase.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAUNREALMASTER_API ANBCSandboxWeaponBase : public ANBCWeaponBase
{
	GENERATED_BODY()
	
public:
	virtual void Fire() override;

	UFUNCTION(BlueprintImplementableEvent)
	void SandboxFire();

protected:

	//잔탄 체크
	UFUNCTION(BlueprintCallable)
	bool CheckAmmo();

	//재장전
	UFUNCTION(BlueprintCallable)
	void Reload();
	//사격
	UFUNCTION(BlueprintCallable)
	void LinetraceOneShot(FVector Direction);

	//사격 사운드
	UFUNCTION(BlueprintCallable)
	void PlaySound(USoundBase* Sound);

	//잔탄 업데이트
	UFUNCTION(BlueprintCallable)
	void UpdateAmmo();
};
