// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/Wood.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWood() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AItemBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWood();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWood_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UTestMyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AWood
void AWood::StaticRegisterNativesAWood()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWood);
UClass* Z_Construct_UClass_AWood_NoRegister()
{
	return AWood::StaticClass();
}
struct Z_Construct_UClass_AWood_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "5week/Wood.h" },
		{ "ModuleRelativePath", "Public/5week/Wood.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/5week/Wood.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWood>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWood_Statics::NewProp_FireEffect = { "FireEffect", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWood, FireEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireEffect_MetaData), NewProp_FireEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWood_Statics::NewProp_FireEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWood_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWood_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWood_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWood_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTestMyInterface_NoRegister, (int32)VTABLE_OFFSET(AWood, ITestMyInterface), false },  // 3670370063
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWood_Statics::ClassParams = {
	&AWood::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWood_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWood_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWood_Statics::Class_MetaDataParams), Z_Construct_UClass_AWood_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWood()
{
	if (!Z_Registration_Info_UClass_AWood.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWood.OuterSingleton, Z_Construct_UClass_AWood_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWood.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AWood>()
{
	return AWood::StaticClass();
}
AWood::AWood() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWood);
AWood::~AWood() {}
// End Class AWood

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWood, AWood::StaticClass, TEXT("AWood"), &Z_Registration_Info_UClass_AWood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWood), 4176788744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_1534524392(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
