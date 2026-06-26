// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/12week/GAS_TargetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_TargetActor() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AGAS_TargetActor();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AGAS_TargetActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AGAS_TargetActor
void AGAS_TargetActor::StaticRegisterNativesAGAS_TargetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_TargetActor);
UClass* Z_Construct_UClass_AGAS_TargetActor_NoRegister()
{
	return AGAS_TargetActor::StaticClass();
}
struct Z_Construct_UClass_AGAS_TargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "12week/GAS_TargetActor.h" },
		{ "ModuleRelativePath", "Public/12week/GAS_TargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRange_MetaData[] = {
		{ "Category", "GAS_TargetActor" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/12week/GAS_TargetActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_TargetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_TargetActor_Statics::NewProp_TraceRange = { "TraceRange", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_TargetActor, TraceRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRange_MetaData), NewProp_TraceRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_TargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_TargetActor_Statics::NewProp_TraceRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_TargetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_TargetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_TargetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_TargetActor_Statics::ClassParams = {
	&AGAS_TargetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGAS_TargetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_TargetActor_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_TargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_TargetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_TargetActor()
{
	if (!Z_Registration_Info_UClass_AGAS_TargetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_TargetActor.OuterSingleton, Z_Construct_UClass_AGAS_TargetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_TargetActor.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AGAS_TargetActor>()
{
	return AGAS_TargetActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_TargetActor);
AGAS_TargetActor::~AGAS_TargetActor() {}
// End Class AGAS_TargetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_12week_GAS_TargetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_TargetActor, AGAS_TargetActor::StaticClass, TEXT("AGAS_TargetActor"), &Z_Registration_Info_UClass_AGAS_TargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_TargetActor), 3145980873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_12week_GAS_TargetActor_h_908370910(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_12week_GAS_TargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_12week_GAS_TargetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
