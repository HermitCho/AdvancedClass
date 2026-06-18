//QuestComponent.cpp

#include "5week/QuestComponent.h"
#include "5week/QuestEventSubsystem.h"
#include "Kismet/GameplayStatics.h"

void UQuestComponent::BeginPlay()
{
    Super::BeginPlay();

    UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(this);
    if (GameInstance)
    {
        UQuestEventSubsystem* QuestEventSubsystem = GameInstance->GetSubsystem<UQuestEventSubsystem>();
        if (QuestEventSubsystem)
        {
            // 델리게이트 구독
            QuestEventSubsystem->OnQuestEventDelegate.AddUObject(this, &UQuestComponent::HandleQuestEvent);
        }
    }
}

void UQuestComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
}

void UQuestComponent::HandleQuestEvent(FGameplayTag EventTag, AController* Instigator, int32 Amount)
{
    if (!IsSameParty(Instigator)) return;

    for (FQuestData& Quest : ActiveQuests)
    {
        // 발생한 이벤트(EventTag)가 퀘스트의 목표(TargetEventTag)에 포함되는지 검사
        if (EventTag.MatchesTag(Quest.TargetEventTag) && Quest.CurrentCount < Quest.MaxCount)
        {
            // 고정으로 1씩 올리지 않고 전달받은 수량(Amount)만큼 증가
            Quest.CurrentCount += Amount;

            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("목표 진행: %d / %d"), Quest.CurrentCount, Quest.MaxCount));
            }
        }
    }
}

bool UQuestComponent::IsSameParty(AController* KillerController) const
{
    AActor* OwnerActor = GetOwner();
    if (!OwnerActor) return false;

    AController* MyController = nullptr;
    if (APawn* OwnerPawn = Cast<APawn>(OwnerActor))
    {
        MyController = OwnerPawn->GetController();
    }
    else
    {
        MyController = Cast<AController>(OwnerActor);
    }

    if (!MyController || !KillerController) return false;

    if (MyController == KillerController) return true;

    return false;
}
