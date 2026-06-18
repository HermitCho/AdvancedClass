#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "QuestEventSubsystem.generated.h"

// 델리게이트 선언: 몬스터 태그와 가해자(킬러) 컨트롤러를 전달
DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnQuestEventSignature, FGameplayTag, AController*, int32);

UCLASS()
class UQuestEventSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    FOnQuestEventSignature OnQuestEventDelegate;

    // 몬스터가 사망할 때 호출할 함수
    UFUNCTION(BlueprintCallable, Category = "Quest System")
    void BroadcastQuestEvent(FGameplayTag EventTag, AController* Instigator, int32 Amount = 1);
};