// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/11week/GAs_AttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAs_AttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UGAs_AttributeSet();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UGAs_AttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UGAs_AttributeSet
void UGAs_AttributeSet::StaticRegisterNativesUGAs_AttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAs_AttributeSet);
UClass* Z_Construct_UClass_UGAs_AttributeSet_NoRegister()
{
	return UGAs_AttributeSet::StaticClass();
}
struct Z_Construct_UClass_UGAs_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "11week/GAs_AttributeSet.h" },
		{ "ModuleRelativePath", "Public/11week/GAs_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hp_MetaData[] = {
		{ "ModuleRelativePath", "Public/11week/GAs_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[] = {
		{ "ModuleRelativePath", "Public/11week/GAs_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "ModuleRelativePath", "Public/11week/GAs_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "ModuleRelativePath", "Public/11week/GAs_AttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAs_AttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_Hp = { "Hp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAs_AttributeSet, Hp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hp_MetaData), NewProp_Hp_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAs_AttributeSet, MaxHp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHp_MetaData), NewProp_MaxHp_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAs_AttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAs_AttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAs_AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_Hp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_MaxHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAs_AttributeSet_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAs_AttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAs_AttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAs_AttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAs_AttributeSet_Statics::ClassParams = {
	&UGAs_AttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGAs_AttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAs_AttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAs_AttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAs_AttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAs_AttributeSet()
{
	if (!Z_Registration_Info_UClass_UGAs_AttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAs_AttributeSet.OuterSingleton, Z_Construct_UClass_UGAs_AttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAs_AttributeSet.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UGAs_AttributeSet>()
{
	return UGAs_AttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAs_AttributeSet);
UGAs_AttributeSet::~UGAs_AttributeSet() {}
// End Class UGAs_AttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_11week_GAs_AttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAs_AttributeSet, UGAs_AttributeSet::StaticClass, TEXT("UGAs_AttributeSet"), &Z_Registration_Info_UClass_UGAs_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAs_AttributeSet), 1855546303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_11week_GAs_AttributeSet_h_3300946210(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_11week_GAs_AttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_11week_GAs_AttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
