#include "WeaponBase.h"
#include "Components/ArrowComponent.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"


AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	FirePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePoint"));
	FirePoint->SetupAttachment(RootComponent);

	AmmoPerFire = 1;
	CurrentAmmo = 0;
	MaxAmmo = 12;
	RoF = 1.f;
	CanFire = true;
	Range = 1000.f;
	DamagePerHit = 10.f;
	RecoilPitch = -3.f;
	RecoilYaw = 1.f;
	FOVInterpSpeed = 20.f;

	// 최적화를 위해 틱을 완전히 제거
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	DefaultFOV = 90.f;
	AimFOV = 60.f;
}

void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	CurrentAmmo = MaxAmmo;
}

void AWeaponBase::Fire()
{
	CanFire = false;
	ApplyRecoil();
	GetWorld()->GetTimerManager().SetTimer(TimerFireDelay, this, &AWeaponBase::HandleFireDelay, 1.f / RoF, false);
}

void AWeaponBase::HandleFireDelay()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerFireDelay);
	CanFire = true;
}

void AWeaponBase::ApplyRecoil()
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn) return;

	APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController());
	if (!PC) return;

	float RandomYaw = FMath::RandRange(
		-RecoilYaw,
		RecoilYaw
	);

	PC->AddPitchInput(RecoilPitch);
	PC->AddYawInput(RandomYaw);
}

void AWeaponBase::SetAiming(bool bNewIsAiming)
{
	if (bIsAiming == bNewIsAiming) return;
	bIsAiming = bNewIsAiming;

	// 이 로그가 출력되는지 확인하세요.
	UE_LOG(LogTemp, Warning, TEXT("SetAiming Called! New State: %s"), bIsAiming ? TEXT("True") : TEXT("False"));
	// 1. 공통 로직 실행 (전략에 따라 Target만 바꿔서 호출)
	StartFOVTransition(bIsAiming ? AimFOV : DefaultFOV);

	// 2. 자식 클래스의 Hook 함수 호출 (오버라이드된 연출 등)
	if (bIsAiming) OnAimingStarted();
	else OnAimingStopped();
}

void AWeaponBase::StartFOVTransition(float InTargetFOV)
{
	TargetFOV = InTargetFOV;

	// 기존에 돌고 있던 타이머가 있다면 초기화
	GetWorldTimerManager().ClearTimer(TimerHandle_FOVTransition);

	// 0.01초마다 UpdateFOVTransition을 호출 (초당 100번 연산, 조준 시에만 작동)
	GetWorldTimerManager().SetTimer(TimerHandle_FOVTransition, this, &AWeaponBase::UpdateFOVTransition, 0.01f, true);
}

void AWeaponBase::UpdateFOVTransition()
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn)
	{
		GetWorldTimerManager().ClearTimer(TimerHandle_FOVTransition);
		return;
	}

	APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController());
	if (PC && PC->PlayerCameraManager)
	{
		float CurrentFOV = PC->PlayerCameraManager->GetFOVAngle();

		UE_LOG(LogTemp, Log, TEXT("Current FOV: %f, Target: %f"), CurrentFOV, TargetFOV);
	
		// 보간 (DeltaTime 대신 타이머 간격 0.01f 사용)
		float NewFOV = FMath::FInterpTo(CurrentFOV, TargetFOV, 0.01f, FOVInterpSpeed);
		PC->PlayerCameraManager->SetFOV(NewFOV);

		// 목표 FOV에 거의 도달했다면 타이머 종료
		if (FMath::IsNearlyEqual(NewFOV, TargetFOV, 0.1f))
		{
			PC->PlayerCameraManager->SetFOV(TargetFOV);
			GetWorldTimerManager().ClearTimer(TimerHandle_FOVTransition);
		}
	}
}