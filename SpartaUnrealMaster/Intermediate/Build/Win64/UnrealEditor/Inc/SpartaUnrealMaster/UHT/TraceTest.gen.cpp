// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/TraceTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ATraceTest();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ATraceTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ATraceTest
void ATraceTest::StaticRegisterNativesATraceTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATraceTest);
UClass* Z_Construct_UClass_ATraceTest_NoRegister()
{
	return ATraceTest::StaticClass();
}
struct Z_Construct_UClass_ATraceTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TraceTest.h" },
		{ "ModuleRelativePath", "Public/TraceTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATraceTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATraceTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATraceTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATraceTest_Statics::ClassParams = {
	&ATraceTest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATraceTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ATraceTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATraceTest()
{
	if (!Z_Registration_Info_UClass_ATraceTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATraceTest.OuterSingleton, Z_Construct_UClass_ATraceTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATraceTest.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ATraceTest>()
{
	return ATraceTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATraceTest);
ATraceTest::~ATraceTest() {}
// End Class ATraceTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TraceTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATraceTest, ATraceTest::StaticClass, TEXT("ATraceTest"), &Z_Registration_Info_UClass_ATraceTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATraceTest), 2983916457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TraceTest_h_358887768(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TraceTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_TraceTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
