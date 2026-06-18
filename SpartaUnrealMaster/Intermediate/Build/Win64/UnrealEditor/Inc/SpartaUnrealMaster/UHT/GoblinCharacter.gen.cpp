// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/GoblinCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoblinCharacter() {}

// Begin Cross Module References
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AGoblinCharacter();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AGoblinCharacter_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMonsterBase();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AGoblinCharacter
void AGoblinCharacter::StaticRegisterNativesAGoblinCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoblinCharacter);
UClass* Z_Construct_UClass_AGoblinCharacter_NoRegister()
{
	return AGoblinCharacter::StaticClass();
}
struct Z_Construct_UClass_AGoblinCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "5week/GoblinCharacter.h" },
		{ "ModuleRelativePath", "Public/5week/GoblinCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoblinCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGoblinCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMonsterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoblinCharacter_Statics::ClassParams = {
	&AGoblinCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoblinCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoblinCharacter()
{
	if (!Z_Registration_Info_UClass_AGoblinCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoblinCharacter.OuterSingleton, Z_Construct_UClass_AGoblinCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoblinCharacter.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AGoblinCharacter>()
{
	return AGoblinCharacter::StaticClass();
}
AGoblinCharacter::AGoblinCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoblinCharacter);
AGoblinCharacter::~AGoblinCharacter() {}
// End Class AGoblinCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_GoblinCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoblinCharacter, AGoblinCharacter::StaticClass, TEXT("AGoblinCharacter"), &Z_Registration_Info_UClass_AGoblinCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoblinCharacter), 638987312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_GoblinCharacter_h_3696112882(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_GoblinCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_GoblinCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
