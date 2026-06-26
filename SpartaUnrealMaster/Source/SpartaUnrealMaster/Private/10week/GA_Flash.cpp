// Fill out your copyright notice in the Description page of Project Settings.


#include "10week/GA_Flash.h"

#include "Abilities/Tasks/AbilityTask_MoveToLocation.h"

void UGA_Flash::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	//CommitAbility를 코드로 적용하는 법.
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		//끝내기
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	AActor* AvatarActor = GetAvatarActorFromActorInfo();
	FVector TargetLocation = (AvatarActor->GetActorForwardVector() * 500) + AvatarActor->GetActorLocation();

	UAbilityTask_MoveToLocation* MoveToLocation = UAbilityTask_MoveToLocation::MoveToLocation(
		this,
		NAME_None,
		TargetLocation,
		0.01f,
		nullptr,
		nullptr
	);

	if (MoveToLocation)
	{
		MoveToLocation->OnTargetLocationReached.AddDynamic(this, &UGA_Flash::OnMoveFinished);

		//최종 실행
		MoveToLocation->ReadyForActivation();
	}
}

void UGA_Flash::OnMoveFinished()
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}


