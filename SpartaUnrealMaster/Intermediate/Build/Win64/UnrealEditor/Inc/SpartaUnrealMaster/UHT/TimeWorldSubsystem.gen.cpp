// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/7week/TimeWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeWorldSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UTimeWorldSubsystem();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UTimeWorldSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UTimeWorldSubsystem Function GetCurrentHour
struct Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics
{
	struct TimeWorldSubsystem_eventGetCurrentHour_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/7week/TimeWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeWorldSubsystem_eventGetCurrentHour_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeWorldSubsystem, nullptr, "GetCurrentHour", nullptr, nullptr, Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::TimeWorldSubsystem_eventGetCurrentHour_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::TimeWorldSubsystem_eventGetCurrentHour_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeWorldSubsystem::execGetCurrentHour)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentHour();
	P_NATIVE_END;
}
// End Class UTimeWorldSubsystem Function GetCurrentHour

// Begin Class UTimeWorldSubsystem
void UTimeWorldSubsystem::StaticRegisterNativesUTimeWorldSubsystem()
{
	UClass* Class = UTimeWorldSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentHour", &UTimeWorldSubsystem::execGetCurrentHour },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeWorldSubsystem);
UClass* Z_Construct_UClass_UTimeWorldSubsystem_NoRegister()
{
	return UTimeWorldSubsystem::StaticClass();
}
struct Z_Construct_UClass_UTimeWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "7week/TimeWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/7week/TimeWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeWorldSubsystem_GetCurrentHour, "GetCurrentHour" }, // 2971894514
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTimeWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeWorldSubsystem_Statics::ClassParams = {
	&UTimeWorldSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimeWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UTimeWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeWorldSubsystem.OuterSingleton, Z_Construct_UClass_UTimeWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeWorldSubsystem.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UTimeWorldSubsystem>()
{
	return UTimeWorldSubsystem::StaticClass();
}
UTimeWorldSubsystem::UTimeWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeWorldSubsystem);
UTimeWorldSubsystem::~UTimeWorldSubsystem() {}
// End Class UTimeWorldSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_7week_TimeWorldSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeWorldSubsystem, UTimeWorldSubsystem::StaticClass, TEXT("UTimeWorldSubsystem"), &Z_Registration_Info_UClass_UTimeWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeWorldSubsystem), 931269878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_7week_TimeWorldSubsystem_h_708595001(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_7week_TimeWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_7week_TimeWorldSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
