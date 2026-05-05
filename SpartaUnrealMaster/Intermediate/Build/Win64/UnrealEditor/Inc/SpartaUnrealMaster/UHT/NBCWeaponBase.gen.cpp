// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/NBCWeaponBase.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCWeaponBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCWeaponBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCWeaponBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ANBCWeaponBase Function Fire
struct Z_Construct_UFunction_ANBCWeaponBase_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCWeaponBase_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCWeaponBase, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponBase_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCWeaponBase_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCWeaponBase_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCWeaponBase_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCWeaponBase::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class ANBCWeaponBase Function Fire

// Begin Class ANBCWeaponBase Function HandleFireDelay
struct Z_Construct_UFunction_ANBCWeaponBase_HandleFireDelay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCWeaponBase_HandleFireDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCWeaponBase, nullptr, "HandleFireDelay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponBase_HandleFireDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCWeaponBase_HandleFireDelay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCWeaponBase_HandleFireDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCWeaponBase_HandleFireDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCWeaponBase::execHandleFireDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFireDelay();
	P_NATIVE_END;
}
// End Class ANBCWeaponBase Function HandleFireDelay

// Begin Class ANBCWeaponBase
void ANBCWeaponBase::StaticRegisterNativesANBCWeaponBase()
{
	UClass* Class = ANBCWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &ANBCWeaponBase::execFire },
		{ "HandleFireDelay", &ANBCWeaponBase::execHandleFireDelay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCWeaponBase);
UClass* Z_Construct_UClass_ANBCWeaponBase_NoRegister()
{
	return ANBCWeaponBase::StaticClass();
}
struct Z_Construct_UClass_ANBCWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NBCWeaponBase.h" },
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirePoint_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoPerFire_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x86\x8c\xeb\xaa\xa8\xeb\x90\x98\xeb\x8a\x94 \xed\x83\x84\xec\x95\xbd\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xeb\xaa\xa8\xeb\x90\x98\xeb\x8a\x94 \xed\x83\x84\xec\x95\xbd\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x82\xa8\xec\x9d\x80 \xed\x83\x84\xec\x95\xbd\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x82\xa8\xec\x9d\x80 \xed\x83\x84\xec\x95\xbd\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x83\x84\xec\x95\xbd \xeb\xb3\xb4\xec\x9c\xa0\xeb\x9f\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x83\x84\xec\x95\xbd \xeb\xb3\xb4\xec\x9c\xa0\xeb\x9f\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoF_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9c\xa0\xed\x9a\xa8\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9c\xa0\xed\x9a\xa8\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerHit_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\xec\x96\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\xec\x96\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanFire_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8f\xa0\xec\x88\x98\xec\x9e\x88\xeb\x82\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8f\xa0\xec\x88\x98\xec\x9e\x88\xeb\x82\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerFireDelay_MetaData[] = {
		{ "Category", "NBCWeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84 \xec\xa0\x9c\xec\x96\xb4\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c \xed\x95\xb8\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84 \xec\xa0\x9c\xec\x96\xb4\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c \xed\x95\xb8\xeb\x93\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirePoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoPerFire;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerHit;
	static void NewProp_CanFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanFire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerFireDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBCWeaponBase_Fire, "Fire" }, // 3797536444
		{ &Z_Construct_UFunction_ANBCWeaponBase_HandleFireDelay, "HandleFireDelay" }, // 4185887321
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_FirePoint = { "FirePoint", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, FirePoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirePoint_MetaData), NewProp_FirePoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_AmmoPerFire = { "AmmoPerFire", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, AmmoPerFire), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoPerFire_MetaData), NewProp_AmmoPerFire_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, CurrentAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAmmo_MetaData), NewProp_CurrentAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_RoF = { "RoF", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, RoF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoF_MetaData), NewProp_RoF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_DamagePerHit = { "DamagePerHit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, DamagePerHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerHit_MetaData), NewProp_DamagePerHit_MetaData) };
void Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_CanFire_SetBit(void* Obj)
{
	((ANBCWeaponBase*)Obj)->CanFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_CanFire = { "CanFire", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANBCWeaponBase), &Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_CanFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanFire_MetaData), NewProp_CanFire_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_TimerFireDelay = { "TimerFireDelay", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCWeaponBase, TimerFireDelay), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerFireDelay_MetaData), NewProp_TimerFireDelay_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBCWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_FirePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_AmmoPerFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_RoF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_DamagePerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_CanFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCWeaponBase_Statics::NewProp_TimerFireDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBCWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCWeaponBase_Statics::ClassParams = {
	&ANBCWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBCWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBCWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCWeaponBase()
{
	if (!Z_Registration_Info_UClass_ANBCWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCWeaponBase.OuterSingleton, Z_Construct_UClass_ANBCWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCWeaponBase.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ANBCWeaponBase>()
{
	return ANBCWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCWeaponBase);
ANBCWeaponBase::~ANBCWeaponBase() {}
// End Class ANBCWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCWeaponBase, ANBCWeaponBase::StaticClass, TEXT("ANBCWeaponBase"), &Z_Registration_Info_UClass_ANBCWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCWeaponBase), 1795550237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_4071564074(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
