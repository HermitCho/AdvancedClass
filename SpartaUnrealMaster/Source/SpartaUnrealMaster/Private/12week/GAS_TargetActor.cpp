// Fill out your copyright notice in the Description page of Project Settings.


#include "12week/GAS_TargetActor.h"
#include "Abilities/GameplayAbility.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/KismetSystemLibrary.h"

AGAS_TargetActor::AGAS_TargetActor()
{
	PrimaryActorTick.bCanEverTick = true;
	TraceRange = 1500.f;

	bDestroyOnConfirmation = true;
}

void AGAS_TargetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//맞으면 움직임.
	FHitResult HitResult;
	if (LineTrace(HitResult))
	{
		SetActorLocation(HitResult.ImpactPoint);
	}
	else
	{
		FVector ViewLoc;
		FRotator ViewRot;
		if (PrimaryPC)
		{
			PrimaryPC->GetPlayerViewPoint(ViewLoc, ViewRot);
			FVector TraceEnd = ViewLoc + ViewRot.Vector() * TraceRange;
			SetActorLocation(TraceEnd);
		}
	}
}

//키를 눌렀을 때
void AGAS_TargetActor::StartTargeting(UGameplayAbility* Ability)
{
	OwningAbility = Ability;
	MasterPC = Cast<APlayerController>(Ability->GetOwningActorFromActorInfo()->GetInstigatorController());
}

//마우스로 눌러서 확정을 눌러서 라인트레이스를 쏘는 부분
void AGAS_TargetActor::ConfirmTargetingAndContinue()
{
	FHitResult HitResult;
	bool TryTrace = LineTrace(HitResult);

	//내가 여기부터 저기까지 행동을 한다(쏘기, 가기 등)는 데이터.
	FGameplayAbilityTargetDataHandle TargetData;

	//TargetActor에서 사용하는 Handle 규격에 맞도록 StartLocation을 변환.
	TargetData = StartLocation.MakeTargetDataHandleFromHitResult(OwningAbility, HitResult);

	//출발지 -> 도착지 데이터가 잘 들어갔나
	if (TargetData != nullptr)
	{
		TargetDataReadyDelegate.Broadcast(TargetData);
	}
	else
	{
		TargetDataReadyDelegate.Broadcast(FGameplayAbilityTargetDataHandle())	;
	}
}

bool AGAS_TargetActor::LineTrace(FHitResult& TraceHitResult)
{
	FVector ViewPoint;
	FRotator ViewRotation;
	//플레이어 컨트롤러 = MasterPC
	MasterPC->GetPlayerViewPoint(ViewPoint, ViewRotation);

	TArray<AActor*> QueryParams;

	APawn* MasterPawn = MasterPC->GetPawn();
	QueryParams.Add(MasterPawn);

	FTransform TargetTransform = StartLocation.GetTargetingTransform();
	FVector TraceStart = TargetTransform.GetLocation();
	FVector EndLocation = TraceStart + ViewRotation.Vector() * TraceRange;


	bool TryTrace = UKismetSystemLibrary::LineTraceSingle
	(
		GetWorld(),
		TraceStart,
		EndLocation,
		UEngineTypes::ConvertToTraceType(ECC_Camera),
		false,
		QueryParams,
		bDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		TraceHitResult,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		2.f
	);


	return TryTrace;
}
