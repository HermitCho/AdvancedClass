// Fill out your copyright notice in the Description page of Project Settings.


#include "5week/QuestEventSubsystem.h"

void UQuestEventSubsystem::BroadcastQuestEvent(FGameplayTag EventTag, AController* Instigator, int32 Amount)
{
    if (OnQuestEventDelegate.IsBound())
    {
        OnQuestEventDelegate.Broadcast(EventTag, Instigator, Amount);
    }
}