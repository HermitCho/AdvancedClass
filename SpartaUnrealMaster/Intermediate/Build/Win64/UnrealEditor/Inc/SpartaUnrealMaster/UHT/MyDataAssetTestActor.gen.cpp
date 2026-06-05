// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/MyDataAssetTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDataAssetTestActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMyDataAssetTestActor();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMyDataAssetTestActor_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UMyTestPrimaryDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AMyDataAssetTestActor
void AMyDataAssetTestActor::StaticRegisterNativesAMyDataAssetTestActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDataAssetTestActor);
UClass* Z_Construct_UClass_AMyDataAssetTestActor_NoRegister()
{
	return AMyDataAssetTestActor::StaticClass();
}
struct Z_Construct_UClass_AMyDataAssetTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyDataAssetTestActor.h" },
		{ "ModuleRelativePath", "Public/MyDataAssetTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIDToLoad_MetaData[] = {
		{ "Category", "ItemTest" },
		{ "ModuleRelativePath", "Public/MyDataAssetTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedItem_MetaData[] = {
		{ "Category", "ItemTest" },
		{ "ModuleRelativePath", "Public/MyDataAssetTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIDToLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDataAssetTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyDataAssetTestActor_Statics::NewProp_ItemIDToLoad = { "ItemIDToLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDataAssetTestActor, ItemIDToLoad), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIDToLoad_MetaData), NewProp_ItemIDToLoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDataAssetTestActor_Statics::NewProp_LoadedItem = { "LoadedItem", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDataAssetTestActor, LoadedItem), Z_Construct_UClass_UMyTestPrimaryDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedItem_MetaData), NewProp_LoadedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDataAssetTestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDataAssetTestActor_Statics::NewProp_ItemIDToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDataAssetTestActor_Statics::NewProp_LoadedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDataAssetTestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyDataAssetTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDataAssetTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDataAssetTestActor_Statics::ClassParams = {
	&AMyDataAssetTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyDataAssetTestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyDataAssetTestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDataAssetTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDataAssetTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyDataAssetTestActor()
{
	if (!Z_Registration_Info_UClass_AMyDataAssetTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDataAssetTestActor.OuterSingleton, Z_Construct_UClass_AMyDataAssetTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyDataAssetTestActor.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AMyDataAssetTestActor>()
{
	return AMyDataAssetTestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDataAssetTestActor);
AMyDataAssetTestActor::~AMyDataAssetTestActor() {}
// End Class AMyDataAssetTestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyDataAssetTestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyDataAssetTestActor, AMyDataAssetTestActor::StaticClass, TEXT("AMyDataAssetTestActor"), &Z_Registration_Info_UClass_AMyDataAssetTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDataAssetTestActor), 1900997463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyDataAssetTestActor_h_3947192551(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyDataAssetTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyDataAssetTestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
