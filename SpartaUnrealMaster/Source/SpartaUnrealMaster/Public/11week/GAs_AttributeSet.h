// GAs_AttributeSet

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GAs_AttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class SPARTAUNREALMASTER_API UGAs_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UGAs_AttributeSet();

	ATTRIBUTE_ACCESSORS(UGAs_AttributeSet, Hp);
	ATTRIBUTE_ACCESSORS(UGAs_AttributeSet, MaxHp);

	ATTRIBUTE_ACCESSORS(UGAs_AttributeSet, Stamina);
	ATTRIBUTE_ACCESSORS(UGAs_AttributeSet, MaxStamina);

	//실행 순서 PreGameplayEffectExecute - PreAttributeChange - PostAttributeChange - PostGameplayEffectExecute

	//GamePlayEffect 명령을 받은 직후(실행 직전)
	//필터링 등에 사용.
	virtual bool PreGameplayEffectExecute(struct FGameplayEffectModCallbackData& Data) override;

	//값이 바뀌기 직전 호출, GetHpAttribute같은 포인터와 비교
//필터링(체력이 0이하로 내려가지 않도록 막기, 이동 속도 최대 속도 제한 등)에 사용.
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	//값이 바뀐 직후 호출
	//피가 깎였으니 UI, 이펙트 호출 등에 사용.
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	//GamePlayEffect 명령을 수행한 후
	//사망 판정, 경험치 지급, 값 확정 등에 사용.
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

private:
	UPROPERTY()
	FGameplayAttributeData Hp;
	UPROPERTY()
	FGameplayAttributeData MaxHp;
	
	UPROPERTY()
	FGameplayAttributeData Stamina;
	UPROPERTY()
	FGameplayAttributeData MaxStamina;
};
