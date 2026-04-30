// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
SPARTAUNREALMASTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin ScriptStruct FWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, (UObject*)Z_Construct_UPackage__Script_SpartaUnrealMaster(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelletCount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilPitch_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilYaw_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PelletCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_PelletCount = { "PelletCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, PelletCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelletCount_MetaData), NewProp_PelletCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, SpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngle_MetaData), NewProp_SpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RecoilPitch = { "RecoilPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, RecoilPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilPitch_MetaData), NewProp_RecoilPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RecoilYaw = { "RecoilYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, RecoilYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilYaw_MetaData), NewProp_RecoilYaw_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_PelletCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_SpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RecoilPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RecoilYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
	nullptr,
	&NewStructOps,
	"WeaponData",
	Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
	sizeof(FWeaponData),
	alignof(FWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton;
}
// End ScriptStruct FWeaponData

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBase.h" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponData), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponData_MetaData), NewProp_WeaponData_MetaData) }; // 1118676734
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AWeaponBase>()
{
	return AWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_WeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 1118676734U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 738019113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_3860757594(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
