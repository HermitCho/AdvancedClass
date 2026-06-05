// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/WeaponBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBox();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AWeaponBox
void AWeaponBox::StaticRegisterNativesAWeaponBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBox);
UClass* Z_Construct_UClass_AWeaponBox_NoRegister()
{
	return AWeaponBox::StaticClass();
}
struct Z_Construct_UClass_AWeaponBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBox.h" },
		{ "ModuleRelativePath", "Public/WeaponBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTable_MetaData[] = {
		{ "Category", "WeaponBox" },
		{ "ModuleRelativePath", "Public/WeaponBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBox_Statics::NewProp_WeaponTable = { "WeaponTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBox, WeaponTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTable_MetaData), NewProp_WeaponTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBox_Statics::NewProp_WeaponTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBox_Statics::ClassParams = {
	&AWeaponBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeaponBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBox()
{
	if (!Z_Registration_Info_UClass_AWeaponBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBox.OuterSingleton, Z_Construct_UClass_AWeaponBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBox.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AWeaponBox>()
{
	return AWeaponBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBox);
AWeaponBox::~AWeaponBox() {}
// End Class AWeaponBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBox, AWeaponBox::StaticClass, TEXT("AWeaponBox"), &Z_Registration_Info_UClass_AWeaponBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBox), 4060878045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBox_h_1285463483(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
