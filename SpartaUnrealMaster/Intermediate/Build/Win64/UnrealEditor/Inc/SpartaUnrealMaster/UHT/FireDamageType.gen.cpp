// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/FireDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireDamageType() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDamageType();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UFireDamageType();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UFireDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UFireDamageType
void UFireDamageType::StaticRegisterNativesUFireDamageType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireDamageType);
UClass* Z_Construct_UClass_UFireDamageType_NoRegister()
{
	return UFireDamageType::StaticClass();
}
struct Z_Construct_UClass_UFireDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FireDamageType.h" },
		{ "ModuleRelativePath", "Public/FireDamageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnDuration_MetaData[] = {
		{ "Category", "FireDamageType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x99\x94\xec\x83\x81 \xec\xa7\x80\xec\x86\x8d \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/FireDamageType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x99\x94\xec\x83\x81 \xec\xa7\x80\xec\x86\x8d \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[] = {
		{ "Category", "FireDamageType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb0\xa9\xec\x96\xb4\xea\xb5\xac \xea\xb4\x80\xed\x86\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/FireDamageType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4\xea\xb5\xac \xea\xb4\x80\xed\x86\xb5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireDamageType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireDamageType_Statics::NewProp_BurnDuration = { "BurnDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireDamageType, BurnDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnDuration_MetaData), NewProp_BurnDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireDamageType_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireDamageType, ArmorPenetration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorPenetration_MetaData), NewProp_ArmorPenetration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFireDamageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireDamageType_Statics::NewProp_BurnDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireDamageType_Statics::NewProp_ArmorPenetration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFireDamageType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDamageType,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireDamageType_Statics::ClassParams = {
	&UFireDamageType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFireDamageType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireDamageType()
{
	if (!Z_Registration_Info_UClass_UFireDamageType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireDamageType.OuterSingleton, Z_Construct_UClass_UFireDamageType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireDamageType.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UFireDamageType>()
{
	return UFireDamageType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireDamageType);
UFireDamageType::~UFireDamageType() {}
// End Class UFireDamageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_FireDamageType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireDamageType, UFireDamageType::StaticClass, TEXT("UFireDamageType"), &Z_Registration_Info_UClass_UFireDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireDamageType), 1931383238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_FireDamageType_h_247548211(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_FireDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_FireDamageType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
