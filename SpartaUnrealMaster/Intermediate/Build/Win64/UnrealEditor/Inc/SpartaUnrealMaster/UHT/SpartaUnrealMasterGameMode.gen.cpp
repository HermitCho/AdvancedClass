// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/SpartaUnrealMasterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaUnrealMasterGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ASpartaUnrealMasterGameMode();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ASpartaUnrealMasterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ASpartaUnrealMasterGameMode
void ASpartaUnrealMasterGameMode::StaticRegisterNativesASpartaUnrealMasterGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaUnrealMasterGameMode);
UClass* Z_Construct_UClass_ASpartaUnrealMasterGameMode_NoRegister()
{
	return ASpartaUnrealMasterGameMode::StaticClass();
}
struct Z_Construct_UClass_ASpartaUnrealMasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpartaUnrealMasterGameMode.h" },
		{ "ModuleRelativePath", "SpartaUnrealMasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaUnrealMasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpartaUnrealMasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaUnrealMasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaUnrealMasterGameMode_Statics::ClassParams = {
	&ASpartaUnrealMasterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaUnrealMasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaUnrealMasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaUnrealMasterGameMode()
{
	if (!Z_Registration_Info_UClass_ASpartaUnrealMasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaUnrealMasterGameMode.OuterSingleton, Z_Construct_UClass_ASpartaUnrealMasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaUnrealMasterGameMode.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ASpartaUnrealMasterGameMode>()
{
	return ASpartaUnrealMasterGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaUnrealMasterGameMode);
ASpartaUnrealMasterGameMode::~ASpartaUnrealMasterGameMode() {}
// End Class ASpartaUnrealMasterGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaUnrealMasterGameMode, ASpartaUnrealMasterGameMode::StaticClass, TEXT("ASpartaUnrealMasterGameMode"), &Z_Registration_Info_UClass_ASpartaUnrealMasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaUnrealMasterGameMode), 2863757534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterGameMode_h_2141029(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
