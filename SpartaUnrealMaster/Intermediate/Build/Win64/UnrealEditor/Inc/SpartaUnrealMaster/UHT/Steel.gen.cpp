// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/Steel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteel() {}

// Begin Cross Module References
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AItemBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ASteel();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ASteel_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ASteel
void ASteel::StaticRegisterNativesASteel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteel);
UClass* Z_Construct_UClass_ASteel_NoRegister()
{
	return ASteel::StaticClass();
}
struct Z_Construct_UClass_ASteel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "5week/Steel.h" },
		{ "ModuleRelativePath", "Public/5week/Steel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASteel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteel_Statics::ClassParams = {
	&ASteel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteel_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASteel()
{
	if (!Z_Registration_Info_UClass_ASteel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteel.OuterSingleton, Z_Construct_UClass_ASteel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteel.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ASteel>()
{
	return ASteel::StaticClass();
}
ASteel::ASteel() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASteel);
ASteel::~ASteel() {}
// End Class ASteel

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Steel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteel, ASteel::StaticClass, TEXT("ASteel"), &Z_Registration_Info_UClass_ASteel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteel), 3639503538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Steel_h_2565892093(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Steel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Steel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
