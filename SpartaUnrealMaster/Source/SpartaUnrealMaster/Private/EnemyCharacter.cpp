#include "EnemyCharacter.h"
#include "ShotgunDamageType.h"

AEnemyCharacter::AEnemyCharacter()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AEnemyCharacter::BeginPlay()
{
    Super::BeginPlay();

    TraceDelegate.BindUObject(
        this,
        &AEnemyCharacter::OnTraceCompleted
    );

    GetWorldTimerManager().SetTimer(
        SearchTimer,
        this,
        &AEnemyCharacter::FindPlayerAsync,
        0.2f,
        true
    );
}

void AEnemyCharacter::FindPlayerAsync()
{
    FVector Start = GetActorLocation();
    FVector End = Start + GetActorForwardVector() * 1500.f;

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    GetWorld()->AsyncLineTraceByChannel(
        EAsyncTraceType::Single,
        Start,
        End,
        ECC_Pawn,
        Params,
        FCollisionResponseParams::DefaultResponseParam,
        &TraceDelegate
    );
}

void AEnemyCharacter::OnTraceCompleted(
    const FTraceHandle& Handle,
    FTraceDatum& Data)
{
    bool bFoundPlayer = false;

    if (Data.OutHits.Num() > 0)
    {
        AActor* HitActor = Data.OutHits[0].GetActor();

        if (HitActor && HitActor->ActorHasTag("Player"))
        {
            bFoundPlayer = true;
        }
    }

    float CurrentTime = GetWorld()->GetTimeSeconds();

    if (bFoundPlayer && !bPlayerDetected)
    {
        bPlayerDetected = true;

        UE_LOG(
            LogTemp,
            Warning,
            TEXT("[%.2f] Player Detected"),
            CurrentTime
        );
    }
    else if (!bFoundPlayer && bPlayerDetected)
    {
        bPlayerDetected = false;

        UE_LOG(
            LogTemp,
            Warning,
            TEXT("[%.2f] Player Lost"),
            CurrentTime
        );
    }
}

float AEnemyCharacter::TakeDamage(
    float DamageAmount,
    FDamageEvent const& DamageEvent,
    AController* EventInstigator,
    AActor* DamageCauser)
{
    if (DamageEvent.DamageTypeClass == UShotgunDamageType::StaticClass())
    {
        UE_LOG(LogTemp, Warning, TEXT("Shotgun Hit"));
    }

    return Super::TakeDamage(
        DamageAmount,
        DamageEvent,
        EventInstigator,
        DamageCauser
    );
}