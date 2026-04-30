// Fill out your copyright notice in the Description page of Project Settings.


#include "TraceTest.h"
#include "Kismet/KismetSystemLibrary.h" //트레이스 헤더
#include "Kismet/GameplayStatics.h" //데미지 헤더
#include "MyTestDamageType.h"

// Sets default values
ATraceTest::ATraceTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATraceTest::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATraceTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	StartAsyncTrace();
}

//UWorld
void ATraceTest::StartAsyncTrace()
{
	FTraceDelegate TraceDelegate;
	TraceDelegate.BindUObject(this, &ATraceTest::OnAsyncTraceCompleted);


	FCollisionResponseParams ResponseParams;
	ResponseParams.CollisionResponse.WorldDynamic = ECR_Block;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = false;


	GetWorld()->AsyncLineTraceByChannel(
		EAsyncTraceType::Multi, //Test는 눈이 안보이는 괴물같은 걸 구현할 때도 도움이 된다. 감지한게 누군지 몰라도 되기 때문에.
		GetActorLocation(),
		GetActorForwardVector() * 1000.f * GetActorLocation(),
		ECC_Visibility,
		QueryParams,
		ResponseParams,
		&TraceDelegate
	);
}

void ATraceTest::OnAsyncTraceCompleted(const FTraceHandle& Handle, FTraceDatum& Data)
{
	for (const FHitResult& Hit : Data.OutHits)
	{
		AActor* HitActor = Hit.GetActor();

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, FString::Printf(TEXT("Multi Hit Actor : %s"), *HitActor->GetName()));

		DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 20.f, 12, FColor::Green, false, 2.f);

		UGameplayStatics::ApplyPointDamage(
			HitActor,
			50.f,
			GetActorForwardVector(),
			Hit,
			GetInstigatorController(),
			this,
			UMyTestDamageType::StaticClass()
		);
	}
}

//트레이스
//void ATraceTest::StartSingleTrace()
//{
//	TArray<FHitResult> HitResult;
//	TArray<AActor*> ActorsToIgnore;
//	ActorsToIgnore.Add(this);
//
//	UKismetSystemLibrary::LineTraceMulti(
//		GetWorld(), //this넣어도 됨.
//		GetActorLocation(),
//		GetActorForwardVector() * 1000.f + GetActorLocation(),
//		UEngineTypes::ConvertToTraceType(ECC_Visibility), //채널 설정
//		false, //복합 트레이스
//		ActorsToIgnore,
//		EDrawDebugTrace::ForOneFrame,
//		HitResult,
//		true, //안정성 때문에 자신 두 번 검사
//		FLinearColor::Red,
//		FLinearColor::Green
//	);
//}

