// Fill out your copyright notice in the Description page of Project Settings.


#include "TestSoftActor.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"

// Sets default values
ATestSoftActor::ATestSoftActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestSoftActor::BeginPlay()
{
	Super::BeginPlay();
	LoadWithSoftPtr();
}

// Called every frame
void ATestSoftActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//비동기 로드
void ATestSoftActor::LoadWithSoftPtr()
{
	if (MySoftMesh.IsNull()) return;

	if (MySoftMesh.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("이미 로드됨, 메모리에서 즉시 참조."));
		MyOnLoadCompleted();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("메모리에 없음, 처음부터 로드 시작."));

		FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
		Streamable.RequestAsyncLoad(MySoftMesh.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &ATestSoftActor::MyOnLoadCompleted));
	}
}

void ATestSoftActor::MyOnLoadCompleted()
{
	UStaticMesh* FinalMesh = MySoftMesh.Get();

	if (FinalMesh)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("성공 : %s"), *FinalMesh->GetName()));
	}
}