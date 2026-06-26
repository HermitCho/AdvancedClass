// Fill out your copyright notice in the Description page of Project Settings.


#include "11week/GAs_AttributeSet.h"

UGAs_AttributeSet::UGAs_AttributeSet()
{
	InitHp(100.f);
	InitMaxHp(100.f);
	InitStamina(100.f);
	InitMaxStamina(100.f);

	//게임 도중에는 값에 직접 접근해서 바꾸면 안됨.
	//GAS가 모두 연결되어 있기 때문에 GamePlayEffect라는 Class를 이용하여 바꿔야함.

	//가져오기
	GetHp();

	//변경하기	
	//SetHp(150.f);

	//HP 포인터
	GetHpAttribute();
}

bool UGAs_AttributeSet::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data)
{
	Super::PreGameplayEffectExecute(Data);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("PreGameplayEffectExecute"));

	return true;
}

void UGAs_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("PreAttributeChange"));
}

void UGAs_AttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("PostAttributeChange"));
}

void UGAs_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("PostGameplayEffectExecute"));
}
