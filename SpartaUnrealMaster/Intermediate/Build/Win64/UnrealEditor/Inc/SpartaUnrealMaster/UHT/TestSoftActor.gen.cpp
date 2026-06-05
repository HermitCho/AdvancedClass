// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/TestSoftActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSoftActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ATestSoftActor();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ATestSoftActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ATestSoftActor
void ATestSoftActor::StaticRegisterNativesATestSoftActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestSoftActor);
UClass* Z_Construct_UClass_ATestSoftActor_NoRegister()
{
	return ATestSoftActor::StaticClass();
}
struct Z_Construct_UClass_ATestSoftActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestSoftActor.h" },
		{ "ModuleRelativePath", "Public/TestSoftActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MySoftMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/TestSoftActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MySoftMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestSoftActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ATestSoftActor_Statics::NewProp_MySoftMesh = { "MySoftMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestSoftActor, MySoftMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MySoftMesh_MetaData), NewProp_MySoftMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestSoftActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestSoftActor_Statics::NewProp_MySoftMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestSoftActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestSoftActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestSoftActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestSoftActor_Statics::ClassParams = {
	&ATestSoftActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATestSoftActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestSoftActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestSoftActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestSoftActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestSoftActor()
{
	if (!Z_Registration_Info_UClass_ATestSoftActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestSoftActor.OuterSingleton, Z_Construct_UClass_ATestSoftActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestSoftActor.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ATestSoftActor>()
{
	return ATestSoftActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestSoftActor);
ATestSoftActor::~ATestSoftActor() {}
// End Class ATestSoftActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TestSoftActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestSoftActor, ATestSoftActor::StaticClass, TEXT("ATestSoftActor"), &Z_Registration_Info_UClass_ATestSoftActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestSoftActor), 3965890599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TestSoftActor_h_2261596879(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TestSoftActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TestSoftActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
