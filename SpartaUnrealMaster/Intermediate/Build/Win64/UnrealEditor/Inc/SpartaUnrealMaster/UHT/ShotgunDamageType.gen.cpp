// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/ShotgunDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgunDamageType() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDamageType();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UShotgunDamageType();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UShotgunDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UShotgunDamageType
void UShotgunDamageType::StaticRegisterNativesUShotgunDamageType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShotgunDamageType);
UClass* Z_Construct_UClass_UShotgunDamageType_NoRegister()
{
	return UShotgunDamageType::StaticClass();
}
struct Z_Construct_UClass_UShotgunDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ShotgunDamageType.h" },
		{ "ModuleRelativePath", "Public/ShotgunDamageType.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShotgunDamageType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShotgunDamageType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDamageType,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShotgunDamageType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShotgunDamageType_Statics::ClassParams = {
	&UShotgunDamageType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShotgunDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UShotgunDamageType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShotgunDamageType()
{
	if (!Z_Registration_Info_UClass_UShotgunDamageType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShotgunDamageType.OuterSingleton, Z_Construct_UClass_UShotgunDamageType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShotgunDamageType.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UShotgunDamageType>()
{
	return UShotgunDamageType::StaticClass();
}
UShotgunDamageType::UShotgunDamageType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShotgunDamageType);
UShotgunDamageType::~UShotgunDamageType() {}
// End Class UShotgunDamageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_ShotgunDamageType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShotgunDamageType, UShotgunDamageType::StaticClass, TEXT("UShotgunDamageType"), &Z_Registration_Info_UClass_UShotgunDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShotgunDamageType), 2497121926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_ShotgunDamageType_h_3054785752(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_ShotgunDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_ShotgunDamageType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
