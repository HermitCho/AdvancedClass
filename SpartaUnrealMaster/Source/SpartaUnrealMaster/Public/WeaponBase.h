#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

UCLASS()
class SPARTAUNREALMASTER_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	AWeaponBase();

public:

	virtual void BeginPlay();
	virtual void Tick(float DeltaTime);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<class UArrowComponent> FirePoint;

	UFUNCTION(BlueprintCallable)
	virtual void Fire();

	UFUNCTION(BlueprintCallable)
	void ApplyRecoil();

protected:
	//소모되는 탄약수
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AmmoPerFire;

	//남은 탄약수
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	int32 CurrentAmmo;

	//탄약 보유량
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxAmmo;

	//연사속도
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RoF;

	//유효사거리
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;

	//데미지양
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamagePerHit;

	//반동 X
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float RecoilPitch;

	//반동 Y
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float RecoilYaw;

	//쏠수있나
	UPROPERTY(BlueprintReadWrite)
	bool CanFire;

	//연사속도 제어를 위한 핸들
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FTimerHandle TimerFireDelay;

	UFUNCTION()
	void HandleFireDelay();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon | State")
	bool bIsAiming = false;

	// 조준의 전체 흐름 제어
	UFUNCTION(BlueprintCallable, Category = "Weapon | Actions")
	void SetAiming(bool bNewIsAiming);

	virtual void OnAimingStarted() {}
	virtual void OnAimingStopped() {}

	// 조준 시 이동 속도나 반동 계수 등 공통으로 쓰일 변수
	UPROPERTY(EditAnywhere, Category = "Weapon | Aiming")
	float AimFOV = 60.f;

	// --- FOV 관련 변수 ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon | Effects")
	float DefaultFOV = 100.f;


	// FOV 전환용 타이머 핸들
	FTimerHandle TimerHandle_FOVTransition;

	float TargetFOV;
	float FOVInterpSpeed; // 전환 속도

	// 실제 FOV를 깎아 나갈 함수 (타이머가 호출)
	void UpdateFOVTransition();

	// 템플릿 메서드에서 호출할 실제 로직
	void StartFOVTransition(float InTargetFOV);
};