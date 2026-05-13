// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/MyActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UMyActorComponent();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UMyActorComponent_NoRegister();
SPARTAUNREALMASTER_API UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature();
SPARTAUNREALMASTER_API UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Delegate FHealthDeadSignature
struct Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics
{
	struct _Script_SpartaUnrealMaster_eventHealthDeadSignature_Parms
	{
		AController* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//1\xeb\x8c\x80 \xeb\x8b\xa4\xec\x88\x98\xeb\xa1\x9c \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xea\xb9\x8c\xec\xa7\x80 \xec\xa7\x80\xec\x9b\x90\xed\x95\x98\xeb\x8a\x94 \xec\xa3\xbd\xec\x97\x88\xec\x9d\x84\xeb\x95\x8c.\n" },
#endif
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1\xeb\x8c\x80 \xeb\x8b\xa4\xec\x88\x98\xeb\xa1\x9c \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xea\xb9\x8c\xec\xa7\x80 \xec\xa7\x80\xec\x9b\x90\xed\x95\x98\xeb\x8a\x94 \xec\xa3\xbd\xec\x97\x88\xec\x9d\x84\xeb\x95\x8c." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpartaUnrealMaster_eventHealthDeadSignature_Parms, Instigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpartaUnrealMaster, nullptr, "HealthDeadSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::_Script_SpartaUnrealMaster_eventHealthDeadSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::_Script_SpartaUnrealMaster_eventHealthDeadSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHealthDeadSignature_DelegateWrapper(const FMulticastScriptDelegate& HealthDeadSignature, AController* Instigator)
{
	struct _Script_SpartaUnrealMaster_eventHealthDeadSignature_Parms
	{
		AController* Instigator;
	};
	_Script_SpartaUnrealMaster_eventHealthDeadSignature_Parms Parms;
	Parms.Instigator=Instigator;
	HealthDeadSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHealthDeadSignature

// Begin Delegate FHealthDamagedSignature
struct Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics
{
	struct _Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms
	{
		float NewHealth;
		float MaxHealth;
		float HealthChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\xeb\xa5\xbc \xec\x9e\x85\xec\x97\x88\xec\x9d\x84\xeb\x95\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\xeb\xa5\xbc \xec\x9e\x85\xec\x97\x88\xec\x9d\x84\xeb\x95\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::NewProp_HealthChange = { "HealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms, HealthChange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::NewProp_HealthChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpartaUnrealMaster, nullptr, "HealthDamagedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::_Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::_Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHealthDamagedSignature_DelegateWrapper(const FMulticastScriptDelegate& HealthDamagedSignature, float NewHealth, float MaxHealth, float HealthChange)
{
	struct _Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms
	{
		float NewHealth;
		float MaxHealth;
		float HealthChange;
	};
	_Script_SpartaUnrealMaster_eventHealthDamagedSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.MaxHealth=MaxHealth;
	Parms.HealthChange=HealthChange;
	HealthDamagedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHealthDamagedSignature

// Begin Class UMyActorComponent Function DamageTake
struct Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics
{
	struct MyActorComponent_eventDamageTake_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* Instigator;
		AActor* Causer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActorComponent_eventDamageTake_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActorComponent_eventDamageTake_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActorComponent_eventDamageTake_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActorComponent_eventDamageTake_Parms, Instigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActorComponent_eventDamageTake_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::NewProp_Causer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyActorComponent, nullptr, "DamageTake", nullptr, nullptr, Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::MyActorComponent_eventDamageTake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::MyActorComponent_eventDamageTake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyActorComponent_DamageTake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyActorComponent_DamageTake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyActorComponent::execDamageTake)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Causer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamageTake(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_Instigator,Z_Param_Causer);
	P_NATIVE_END;
}
// End Class UMyActorComponent Function DamageTake

// Begin Class UMyActorComponent
void UMyActorComponent::StaticRegisterNativesUMyActorComponent()
{
	UClass* Class = UMyActorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DamageTake", &UMyActorComponent::execDamageTake },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyActorComponent);
UClass* Z_Construct_UClass_UMyActorComponent_NoRegister()
{
	return UMyActorComponent::StaticClass();
}
struct Z_Construct_UClass_UMyActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "5week/MyActorComponent.h" },
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthDamaged_MetaData[] = {
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "MyActorComponent" },
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "MyActorComponent" },
		{ "ModuleRelativePath", "Public/5week/MyActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthDead;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthDamaged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyActorComponent_DamageTake, "DamageTake" }, // 4225533134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyActorComponent_Statics::NewProp_OnHealthDead = { "OnHealthDead", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyActorComponent, OnHealthDead), Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthDead_MetaData), NewProp_OnHealthDead_MetaData) }; // 2894885515
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyActorComponent_Statics::NewProp_OnHealthDamaged = { "OnHealthDamaged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyActorComponent, OnHealthDamaged), Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthDamaged_MetaData), NewProp_OnHealthDamaged_MetaData) }; // 952037982
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyActorComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyActorComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyActorComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyActorComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyActorComponent_Statics::NewProp_OnHealthDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyActorComponent_Statics::NewProp_OnHealthDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyActorComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyActorComponent_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent_Statics::ClassParams = {
	&UMyActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyActorComponent()
{
	if (!Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton, Z_Construct_UClass_UMyActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UMyActorComponent>()
{
	return UMyActorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent);
UMyActorComponent::~UMyActorComponent() {}
// End Class UMyActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyActorComponent, UMyActorComponent::StaticClass, TEXT("UMyActorComponent"), &Z_Registration_Info_UClass_UMyActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyActorComponent), 1160220031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_3973965469(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
