// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/MonsterBase.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMonsterBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMonsterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AMonsterBase
void AMonsterBase::StaticRegisterNativesAMonsterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterBase);
UClass* Z_Construct_UClass_AMonsterBase_NoRegister()
{
	return AMonsterBase::StaticClass();
}
struct Z_Construct_UClass_AMonsterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "5week/MonsterBase.h" },
		{ "ModuleRelativePath", "Public/5week/MonsterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterTag_MetaData[] = {
		{ "Category", "MonsterBase" },
		{ "ModuleRelativePath", "Public/5week/MonsterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MonsterTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMonsterBase_Statics::NewProp_MonsterTag = { "MonsterTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterBase, MonsterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterTag_MetaData), NewProp_MonsterTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterBase_Statics::NewProp_MonsterTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonsterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterBase_Statics::ClassParams = {
	&AMonsterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMonsterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterBase()
{
	if (!Z_Registration_Info_UClass_AMonsterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterBase.OuterSingleton, Z_Construct_UClass_AMonsterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterBase.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AMonsterBase>()
{
	return AMonsterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterBase);
AMonsterBase::~AMonsterBase() {}
// End Class AMonsterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MonsterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterBase, AMonsterBase::StaticClass, TEXT("AMonsterBase"), &Z_Registration_Info_UClass_AMonsterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterBase), 823271371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MonsterBase_h_2778374542(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MonsterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MonsterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
