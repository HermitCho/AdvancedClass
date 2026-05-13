// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/MyTorchLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTorchLight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMyTorchLight();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMyTorchLight_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AMyTorchLight
void AMyTorchLight::StaticRegisterNativesAMyTorchLight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTorchLight);
UClass* Z_Construct_UClass_AMyTorchLight_NoRegister()
{
	return AMyTorchLight::StaticClass();
}
struct Z_Construct_UClass_AMyTorchLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintAssignable)\n//FDeath OnDeath\n" },
#endif
		{ "IncludePath", "5week/MyTorchLight.h" },
		{ "ModuleRelativePath", "Public/5week/MyTorchLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintAssignable)\nFDeath OnDeath" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "MyTorchLight" },
		{ "ModuleRelativePath", "Public/5week/MyTorchLight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTorchLight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMyTorchLight_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyTorchLight_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTorchLight, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTorchLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTorchLight_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTorchLight_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTorchLight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyTorchLight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTorchLight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTorchLight_Statics::ClassParams = {
	&AMyTorchLight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyTorchLight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyTorchLight_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTorchLight_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTorchLight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTorchLight()
{
	if (!Z_Registration_Info_UClass_AMyTorchLight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTorchLight.OuterSingleton, Z_Construct_UClass_AMyTorchLight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTorchLight.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AMyTorchLight>()
{
	return AMyTorchLight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTorchLight);
AMyTorchLight::~AMyTorchLight() {}
// End Class AMyTorchLight

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyTorchLight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTorchLight, AMyTorchLight::StaticClass, TEXT("AMyTorchLight"), &Z_Registration_Info_UClass_AMyTorchLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTorchLight), 3113379410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyTorchLight_h_4168102194(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyTorchLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyTorchLight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
