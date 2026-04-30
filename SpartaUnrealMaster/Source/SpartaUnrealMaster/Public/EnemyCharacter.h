#pragma once

#include "CoreMinimal.h"
#include "Engine/DamageEvents.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class SPARTAUNREALMASTER_API AEnemyCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AEnemyCharacter();

protected:
    virtual void BeginPlay() override;

    FTraceDelegate TraceDelegate;
    FTimerHandle SearchTimer;

    void FindPlayerAsync();

    void OnTraceCompleted(
        const FTraceHandle& Handle,
        FTraceDatum& Data
    );

    bool bPlayerDetected = false;

public:
    virtual float TakeDamage(
        float DamageAmount,
        FDamageEvent const& DamageEvent,
        AController* EventInstigator,
        AActor* DamageCauser
    ) override;
};