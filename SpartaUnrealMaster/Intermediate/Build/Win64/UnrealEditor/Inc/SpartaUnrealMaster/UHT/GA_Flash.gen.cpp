// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/10week/GA_Flash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Flash() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UGA_Flash();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UGA_Flash_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UGA_Flash Function OnMoveFinished
struct Z_Construct_UFunction_UGA_Flash_OnMoveFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/10week/GA_Flash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Flash_OnMoveFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Flash, nullptr, "OnMoveFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Flash_OnMoveFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_Flash_OnMoveFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGA_Flash_OnMoveFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_Flash_OnMoveFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_Flash::execOnMoveFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoveFinished();
	P_NATIVE_END;
}
// End Class UGA_Flash Function OnMoveFinished

// Begin Class UGA_Flash
void UGA_Flash::StaticRegisterNativesUGA_Flash()
{
	UClass* Class = UGA_Flash::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMoveFinished", &UGA_Flash::execOnMoveFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Flash);
UClass* Z_Construct_UClass_UGA_Flash_NoRegister()
{
	return UGA_Flash::StaticClass();
}
struct Z_Construct_UClass_UGA_Flash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "10week/GA_Flash.h" },
		{ "ModuleRelativePath", "Public/10week/GA_Flash.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_Flash_OnMoveFinished, "OnMoveFinished" }, // 1705757659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Flash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_Flash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Flash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Flash_Statics::ClassParams = {
	&UGA_Flash::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Flash_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Flash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_Flash()
{
	if (!Z_Registration_Info_UClass_UGA_Flash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Flash.OuterSingleton, Z_Construct_UClass_UGA_Flash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_Flash.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UGA_Flash>()
{
	return UGA_Flash::StaticClass();
}
UGA_Flash::UGA_Flash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Flash);
UGA_Flash::~UGA_Flash() {}
// End Class UGA_Flash

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Flash, UGA_Flash::StaticClass, TEXT("UGA_Flash"), &Z_Registration_Info_UClass_UGA_Flash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Flash), 549702576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_470898353(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
