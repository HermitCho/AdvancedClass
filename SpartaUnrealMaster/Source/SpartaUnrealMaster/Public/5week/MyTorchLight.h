// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTorchLight.generated.h"

// C++ 형대로 1대1만 지원한다!!
// DECLARE_DELEGATE

//C++ 1대 다수
// DECLARE_MULTICAST

// 1대 1 형태 블루프린트까지 지원한다!
// DECLARE_DYNAMIC

// 1대 다수로 블루프린트까지 지원
// DELCALRE_DYNAMIC_MULTICAST

//바인드 되기 전까지 1바이트도 차지않는다!!! 사용시 -> 느려집니다.  거의 바인딩 되지않으면 효율적!!!!!!!!!!
//DECLARE_SPARSE

//블루프린트 지원, 1대 1, 리턴 값 있음, 두 개의 파라미터
//DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams

//cpp용 바인딩
//AddUObject

//블루프린트까지 바인딩
//AddDynamic

//싱글 1대 1 -> Bind
//멀티 1대 다수 -> Add

//앞부분 Bind/Add
//뒷부분 UObject/Dynamic

// 오브젝트, SharedPtr, lamda, Static, UFUNCTION

// 오브젝트 = 델리게이트.BindUObject(객체, &UMyObject::함수);
// 스마트포인터 = 델리게이트.BindSP(객체, &UMyObject::함수);
// 람다 = 델리게이트.BindLamda([](){});
// 스태틱 = 델리게이트.BindStatic(객체, &UMyObject::함수);
// UFUCNTION = 델리게이트.BindUFUnction(객체, TEXT("함수이름"));

//싱글 C++ -> BindUObject
//멀티 C++ -> AddUObject
//싱글 Dynamic -> BindDynamic
//멀티 Dynamic -> AddDynamic

//블루프린트와 연동하는 다이나믹!! UFUNCTION()!!!! 연동되는 함수!!!!!!!!!

//---------------------------------------------------------------------------------
//신호를!!!!!! 줘야 (보스가 죽는부분 = 나죽었다!!!)

//싱글 1대1 대응 = Execute();
//멀티 1대 다수 = Broadcast();

//싱글은 바인딩이 꼭!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!돼야합니다.
//크래시납니다.

//싱글캐스트는 반드시 Execute전에 isBound() 습관처럼
//if(MySingleDelegate.IsBound())
//{ 
// 
// MySingleDelegate.Execute();
// 
// }

//블루프린트로 받아올경우
// 이쪽에서 객체로 만들고. 그 객체를 통해서 블루프린트 델리게이트를 ㅁ만들어줄!!!!!

//UPROPERTY(BlueprintAssignable)
//FDeath OnDeath


UCLASS()
class SPARTAUNREALMASTER_API AMyTorchLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTorchLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<AActor>> Items;
};
