//QuestComponent.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "QuestComponent.generated.h"

USTRUCT(BlueprintType)
struct FQuestData
{
public:
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FGameplayTag TargetEventTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int32 CurrentCount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int32 MaxCount = 100;

};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UQuestComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void HandleQuestEvent(FGameplayTag EventTag, AController* Instigator, int32 Amount);

	bool IsSameParty(AController* KillerController) const;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FQuestData> ActiveQuests;

};