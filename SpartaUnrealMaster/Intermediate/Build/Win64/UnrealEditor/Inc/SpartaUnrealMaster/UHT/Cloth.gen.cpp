// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/Cloth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloth() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ACloth();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ACloth_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AItemBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UTestMyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ACloth
void ACloth::StaticRegisterNativesACloth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACloth);
UClass* Z_Construct_UClass_ACloth_NoRegister()
{
	return ACloth::StaticClass();
}
struct Z_Construct_UClass_ACloth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "5week/Cloth.h" },
		{ "ModuleRelativePath", "Public/5week/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/5week/Cloth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACloth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_FireEffect = { "FireEffect", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, FireEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireEffect_MetaData), NewProp_FireEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACloth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_FireEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACloth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACloth_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTestMyInterface_NoRegister, (int32)VTABLE_OFFSET(ACloth, ITestMyInterface), false },  // 3670370063
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACloth_Statics::ClassParams = {
	&ACloth::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACloth_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::Class_MetaDataParams), Z_Construct_UClass_ACloth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACloth()
{
	if (!Z_Registration_Info_UClass_ACloth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACloth.OuterSingleton, Z_Construct_UClass_ACloth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACloth.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ACloth>()
{
	return ACloth::StaticClass();
}
ACloth::ACloth() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACloth);
ACloth::~ACloth() {}
// End Class ACloth

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACloth, ACloth::StaticClass, TEXT("ACloth"), &Z_Registration_Info_UClass_ACloth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACloth), 2541707526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_2289220901(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
