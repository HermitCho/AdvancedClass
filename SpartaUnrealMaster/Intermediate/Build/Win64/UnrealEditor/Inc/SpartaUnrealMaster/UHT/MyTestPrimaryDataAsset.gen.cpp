// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/MyTestPrimaryDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestPrimaryDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UMyTestPrimaryDataAsset();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UMyTestPrimaryDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UMyTestPrimaryDataAsset
void UMyTestPrimaryDataAsset::StaticRegisterNativesUMyTestPrimaryDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyTestPrimaryDataAsset);
UClass* Z_Construct_UClass_UMyTestPrimaryDataAsset_NoRegister()
{
	return UMyTestPrimaryDataAsset::StaticClass();
}
struct Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyTestPrimaryDataAsset.h" },
		{ "ModuleRelativePath", "Public/MyTestPrimaryDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weapon(\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac):Sword \xed\x98\x95\xec\x8b\x9d\xec\x9c\xbc\xeb\xa1\x9c \xec\xa0\x80\xec\x9e\xa5.\n" },
#endif
		{ "ModuleRelativePath", "Public/MyTestPrimaryDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon(\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac):Sword \xed\x98\x95\xec\x8b\x9d\xec\x9c\xbc\xeb\xa1\x9c \xec\xa0\x80\xec\x9e\xa5." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "AssetBundles", "Mesh" },
		{ "Category", "Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Struct\xec\xb2\x98\xeb\x9f\xbc \xec\x82\xac\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/MyTestPrimaryDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct\xec\xb2\x98\xeb\x9f\xbc \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh2_MetaData[] = {
		{ "AssetBundles", "Mesh" },
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Public/MyTestPrimaryDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/MyTestPrimaryDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMesh2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTestPrimaryDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyTestPrimaryDataAsset, ItemType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyTestPrimaryDataAsset, ItemMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_ItemMesh2 = { "ItemMesh2", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyTestPrimaryDataAsset, ItemMesh2), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh2_MetaData), NewProp_ItemMesh2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyTestPrimaryDataAsset, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_ItemMesh2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::NewProp_AttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::ClassParams = {
	&UMyTestPrimaryDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyTestPrimaryDataAsset()
{
	if (!Z_Registration_Info_UClass_UMyTestPrimaryDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyTestPrimaryDataAsset.OuterSingleton, Z_Construct_UClass_UMyTestPrimaryDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyTestPrimaryDataAsset.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UMyTestPrimaryDataAsset>()
{
	return UMyTestPrimaryDataAsset::StaticClass();
}
UMyTestPrimaryDataAsset::UMyTestPrimaryDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTestPrimaryDataAsset);
UMyTestPrimaryDataAsset::~UMyTestPrimaryDataAsset() {}
// End Class UMyTestPrimaryDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestPrimaryDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyTestPrimaryDataAsset, UMyTestPrimaryDataAsset::StaticClass, TEXT("UMyTestPrimaryDataAsset"), &Z_Registration_Info_UClass_UMyTestPrimaryDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyTestPrimaryDataAsset), 2147396037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestPrimaryDataAsset_h_2216369660(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestPrimaryDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestPrimaryDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
