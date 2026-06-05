// 매니저 역할
// 오브젝트 풀링 : 메모리 생성/해제에 생기는 과부하 때문에 한번에 생성해서 하나씩 꺼내옴

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "8week/PooledObjectData.h"
#include "MyObjectPool.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPoolerCleanupSignature);

//PooledObject를 담을 구조체
USTRUCT(BlueprintType)
struct FSingleObjectPool
{
	GENERATED_BODY()

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	TArray<TObjectPtr<class UPooledObject>> PooledObjects;
};

UCLASS()
class SPARTAUNREALMASTER_API AMyObjectPool : public AActor
{
	GENERATED_BODY()
	
public:	

	void BeginPlay() override;

	//지우는 델리게이트
	UPROPERTY()
	FPoolerCleanupSignature OnPoolerCleanup;

	//소환한 액터들을 이름과 매칭해서 가져가기
	UFUNCTION(BlueprintCallable)
	AActor* GetPooledActor(FString Name);

	//액터를 넘겨주면 회수할 수 있도록 만들어주기
	UFUNCTION(BlueprintCallable)
	void RecycleActor(AActor* PooledActor);

	//최종 회수
	UFUNCTION(BlueprintCallable)
	void RecyclePooledObject(class UPooledObject* PoolCompRef);

	//빠졌던 액터 다시 회수
	UFUNCTION(BlueprintCallable)
	void Broad_PoolerCleanup();

	//밖에서 생성할 때 지정해주는 구조체
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPooledObjectData> PooledObjectData;

protected:
	
	//만들어 둔 액터에 붙어있는 컴포넌트를 모아두는 배열
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FSingleObjectPool> Pools;

private:

	//특별한 상황에 PooledObject를 즉시 만드는 함수
	void RegenItem(int32 PoolIndex, int32 PositionIndex);

};
