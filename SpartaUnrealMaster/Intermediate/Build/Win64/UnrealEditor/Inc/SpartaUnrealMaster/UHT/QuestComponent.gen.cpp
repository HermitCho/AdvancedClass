// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/QuestComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UQuestComponent();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
SPARTAUNREALMASTER_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin ScriptStruct FQuestData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestData;
class UScriptStruct* FQuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestData, (UObject*)Z_Construct_UPackage__Script_SpartaUnrealMaster(), TEXT("QuestData"));
	}
	return Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UScriptStruct* StaticStruct<FQuestData>()
{
	return FQuestData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/5week/QuestComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEventTag_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/5week/QuestComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCount_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/5week/QuestComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/5week/QuestComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEventTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_TargetEventTag = { "TargetEventTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, TargetEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEventTag_MetaData), NewProp_TargetEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, CurrentCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCount_MetaData), NewProp_CurrentCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, MaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCount_MetaData), NewProp_MaxCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_TargetEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_CurrentCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_MaxCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
	nullptr,
	&NewStructOps,
	"QuestData",
	Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers),
	sizeof(FQuestData),
	alignof(FQuestData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestData()
{
	if (!Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton, Z_Construct_UScriptStruct_FQuestData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton;
}
// End ScriptStruct FQuestData

// Begin Class UQuestComponent
void UQuestComponent::StaticRegisterNativesUQuestComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestComponent);
UClass* Z_Construct_UClass_UQuestComponent_NoRegister()
{
	return UQuestComponent::StaticClass();
}
struct Z_Construct_UClass_UQuestComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "5week/QuestComponent.h" },
		{ "ModuleRelativePath", "Public/5week/QuestComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQuests_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/5week/QuestComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveQuests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_ActiveQuests_Inner = { "ActiveQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(0, nullptr) }; // 3853834080
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_ActiveQuests = { "ActiveQuests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestComponent, ActiveQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveQuests_MetaData), NewProp_ActiveQuests_MetaData) }; // 3853834080
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_ActiveQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_ActiveQuests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestComponent_Statics::ClassParams = {
	&UQuestComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestComponent()
{
	if (!Z_Registration_Info_UClass_UQuestComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestComponent.OuterSingleton, Z_Construct_UClass_UQuestComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestComponent.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UQuestComponent>()
{
	return UQuestComponent::StaticClass();
}
UQuestComponent::UQuestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestComponent);
UQuestComponent::~UQuestComponent() {}
// End Class UQuestComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_QuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 3853834080U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestComponent, UQuestComponent::StaticClass, TEXT("UQuestComponent"), &Z_Registration_Info_UClass_UQuestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestComponent), 2216218606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_4080575209(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
