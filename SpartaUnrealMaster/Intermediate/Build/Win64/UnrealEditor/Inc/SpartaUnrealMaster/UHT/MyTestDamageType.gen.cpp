// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/MyTestDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestDamageType() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDamageType();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UMyTestDamageType();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UMyTestDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UMyTestDamageType
void UMyTestDamageType::StaticRegisterNativesUMyTestDamageType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyTestDamageType);
UClass* Z_Construct_UClass_UMyTestDamageType_NoRegister()
{
	return UMyTestDamageType::StaticClass();
}
struct Z_Construct_UClass_UMyTestDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestDamageType.h" },
		{ "ModuleRelativePath", "Public/MyTestDamageType.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTestDamageType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyTestDamageType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDamageType,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestDamageType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyTestDamageType_Statics::ClassParams = {
	&UMyTestDamageType::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyTestDamageType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyTestDamageType()
{
	if (!Z_Registration_Info_UClass_UMyTestDamageType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyTestDamageType.OuterSingleton, Z_Construct_UClass_UMyTestDamageType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyTestDamageType.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UMyTestDamageType>()
{
	return UMyTestDamageType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTestDamageType);
UMyTestDamageType::~UMyTestDamageType() {}
// End Class UMyTestDamageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestDamageType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyTestDamageType, UMyTestDamageType::StaticClass, TEXT("UMyTestDamageType"), &Z_Registration_Info_UClass_UMyTestDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyTestDamageType), 3321007466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestDamageType_h_839831501(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyTestDamageType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
