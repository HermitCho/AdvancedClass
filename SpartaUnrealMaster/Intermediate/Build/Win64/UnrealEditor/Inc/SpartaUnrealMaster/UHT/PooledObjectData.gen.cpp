// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/8week/PooledObjectData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePooledObjectData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SPARTAUNREALMASTER_API UScriptStruct* Z_Construct_UScriptStruct_FPooledObjectData();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin ScriptStruct FPooledObjectData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PooledObjectData;
class UScriptStruct* FPooledObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PooledObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PooledObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPooledObjectData, (UObject*)Z_Construct_UPackage__Script_SpartaUnrealMaster(), TEXT("PooledObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_PooledObjectData.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UScriptStruct* StaticStruct<FPooledObjectData>()
{
	return FPooledObjectData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPooledObjectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/8week/PooledObjectData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTemplate_MetaData[] = {
		{ "Category", "PooledObjectData" },
		{ "ModuleRelativePath", "Public/8week/PooledObjectData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[] = {
		{ "Category", "PooledObjectData" },
		{ "ModuleRelativePath", "Public/8week/PooledObjectData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanGrow_MetaData[] = {
		{ "Category", "PooledObjectData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PoolSize\xeb\xb3\xb4\xeb\x8b\xa4 \xeb\xa7\x8e\xec\x9d\x84 \xeb\x95\x8c, \xeb\x8d\x94 \xeb\xa7\x8c\xeb\x93\xa4\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/PooledObjectData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PoolSize\xeb\xb3\xb4\xeb\x8b\xa4 \xeb\xa7\x8e\xec\x9d\x84 \xeb\x95\x8c, \xeb\x8d\x94 \xeb\xa7\x8c\xeb\x93\xa4\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "Category", "PooledObjectData" },
		{ "ModuleRelativePath", "Public/8week/PooledObjectData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorTemplate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
	static void NewProp_bCanGrow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGrow;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPooledObjectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_ActorTemplate = { "ActorTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPooledObjectData, ActorTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTemplate_MetaData), NewProp_ActorTemplate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPooledObjectData, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolSize_MetaData), NewProp_PoolSize_MetaData) };
void Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_bCanGrow_SetBit(void* Obj)
{
	((FPooledObjectData*)Obj)->bCanGrow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_bCanGrow = { "bCanGrow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPooledObjectData), &Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_bCanGrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanGrow_MetaData), NewProp_bCanGrow_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPooledObjectData, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPooledObjectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_ActorTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_PoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_bCanGrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewProp_ActorName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledObjectData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPooledObjectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
	nullptr,
	&NewStructOps,
	"PooledObjectData",
	Z_Construct_UScriptStruct_FPooledObjectData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledObjectData_Statics::PropPointers),
	sizeof(FPooledObjectData),
	alignof(FPooledObjectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledObjectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPooledObjectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPooledObjectData()
{
	if (!Z_Registration_Info_UScriptStruct_PooledObjectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PooledObjectData.InnerSingleton, Z_Construct_UScriptStruct_FPooledObjectData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PooledObjectData.InnerSingleton;
}
// End ScriptStruct FPooledObjectData

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObjectData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPooledObjectData::StaticStruct, Z_Construct_UScriptStruct_FPooledObjectData_Statics::NewStructOps, TEXT("PooledObjectData"), &Z_Registration_Info_UScriptStruct_PooledObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPooledObjectData), 2192243915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObjectData_h_716422488(TEXT("/Script/SpartaUnrealMaster"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObjectData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObjectData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
