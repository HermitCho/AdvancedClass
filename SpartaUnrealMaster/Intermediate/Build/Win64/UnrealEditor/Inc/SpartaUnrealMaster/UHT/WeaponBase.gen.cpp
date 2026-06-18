// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/WeaponBase.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AWeaponBase Function ApplyRecoil
struct Z_Construct_UFunction_AWeaponBase_ApplyRecoil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ApplyRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ApplyRecoil", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ApplyRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ApplyRecoil_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ApplyRecoil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ApplyRecoil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execApplyRecoil)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyRecoil();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ApplyRecoil

// Begin Class AWeaponBase Function Fire
struct Z_Construct_UFunction_AWeaponBase_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class AWeaponBase Function Fire

// Begin Class AWeaponBase Function HandleFireDelay
struct Z_Construct_UFunction_AWeaponBase_HandleFireDelay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_HandleFireDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "HandleFireDelay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleFireDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_HandleFireDelay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_HandleFireDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_HandleFireDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execHandleFireDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFireDelay();
	P_NATIVE_END;
}
// End Class AWeaponBase Function HandleFireDelay

// Begin Class AWeaponBase Function SetAiming
struct Z_Construct_UFunction_AWeaponBase_SetAiming_Statics
{
	struct WeaponBase_eventSetAiming_Parms
	{
		bool bNewIsAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon | Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa1\xb0\xec\xa4\x80\xec\x9d\x98 \xec\xa0\x84\xec\xb2\xb4 \xed\x9d\x90\xeb\xa6\x84 \xec\xa0\x9c\xec\x96\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa1\xb0\xec\xa4\x80\xec\x9d\x98 \xec\xa0\x84\xec\xb2\xb4 \xed\x9d\x90\xeb\xa6\x84 \xec\xa0\x9c\xec\x96\xb4" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::NewProp_bNewIsAiming_SetBit(void* Obj)
{
	((WeaponBase_eventSetAiming_Parms*)Obj)->bNewIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::NewProp_bNewIsAiming = { "bNewIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventSetAiming_Parms), &Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::NewProp_bNewIsAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::NewProp_bNewIsAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "SetAiming", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::WeaponBase_eventSetAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::WeaponBase_eventSetAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_SetAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_SetAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execSetAiming)
{
	P_GET_UBOOL(Z_Param_bNewIsAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAiming(Z_Param_bNewIsAiming);
	P_NATIVE_END;
}
// End Class AWeaponBase Function SetAiming

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRecoil", &AWeaponBase::execApplyRecoil },
		{ "Fire", &AWeaponBase::execFire },
		{ "HandleFireDelay", &AWeaponBase::execHandleFireDelay },
		{ "SetAiming", &AWeaponBase::execSetAiming },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBase.h" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirePoint_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoPerFire_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x86\x8c\xeb\xaa\xa8\xeb\x90\x98\xeb\x8a\x94 \xed\x83\x84\xec\x95\xbd\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xeb\xaa\xa8\xeb\x90\x98\xeb\x8a\x94 \xed\x83\x84\xec\x95\xbd\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x82\xa8\xec\x9d\x80 \xed\x83\x84\xec\x95\xbd\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x82\xa8\xec\x9d\x80 \xed\x83\x84\xec\x95\xbd\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x83\x84\xec\x95\xbd \xeb\xb3\xb4\xec\x9c\xa0\xeb\x9f\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x83\x84\xec\x95\xbd \xeb\xb3\xb4\xec\x9c\xa0\xeb\x9f\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoF_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9c\xa0\xed\x9a\xa8\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9c\xa0\xed\x9a\xa8\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerHit_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\xec\x96\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\xec\x96\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilPitch_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb0\x98\xeb\x8f\x99 X\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\x98\xeb\x8f\x99 X" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilYaw_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb0\x98\xeb\x8f\x99 Y\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\x98\xeb\x8f\x99 Y" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanFire_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8f\xa0\xec\x88\x98\xec\x9e\x88\xeb\x82\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8f\xa0\xec\x88\x98\xec\x9e\x88\xeb\x82\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerFireDelay_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84 \xec\xa0\x9c\xec\x96\xb4\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c \xed\x95\xb8\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xb0\xec\x82\xac\xec\x86\x8d\xeb\x8f\x84 \xec\xa0\x9c\xec\x96\xb4\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c \xed\x95\xb8\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[] = {
		{ "Category", "Weapon | State" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimFOV_MetaData[] = {
		{ "Category", "Weapon | Aiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa1\xb0\xec\xa4\x80 \xec\x8b\x9c \xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84\xeb\x82\x98 \xeb\xb0\x98\xeb\x8f\x99 \xea\xb3\x84\xec\x88\x98 \xeb\x93\xb1 \xea\xb3\xb5\xed\x86\xb5\xec\x9c\xbc\xeb\xa1\x9c \xec\x93\xb0\xec\x9d\xbc \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa1\xb0\xec\xa4\x80 \xec\x8b\x9c \xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84\xeb\x82\x98 \xeb\xb0\x98\xeb\x8f\x99 \xea\xb3\x84\xec\x88\x98 \xeb\x93\xb1 \xea\xb3\xb5\xed\x86\xb5\xec\x9c\xbc\xeb\xa1\x9c \xec\x93\xb0\xec\x9d\xbc \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "Weapon | Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- FOV \xea\xb4\x80\xeb\xa0\xa8 \xeb\xb3\x80\xec\x88\x98 ---\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- FOV \xea\xb4\x80\xeb\xa0\xa8 \xeb\xb3\x80\xec\x88\x98 ---" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilYaw;
	static void NewProp_CanFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanFire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerFireDelay;
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_ApplyRecoil, "ApplyRecoil" }, // 1060011375
		{ &Z_Construct_UFunction_AWeaponBase_Fire, "Fire" }, // 3094316451
		{ &Z_Construct_UFunction_AWeaponBase_HandleFireDelay, "HandleFireDelay" }, // 3922661658
		{ &Z_Construct_UFunction_AWeaponBase_SetAiming, "SetAiming" }, // 4107003392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_FirePoint = { "FirePoint", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, FirePoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirePoint_MetaData), NewProp_FirePoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AmmoPerFire = { "AmmoPerFire", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AmmoPerFire), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoPerFire_MetaData), NewProp_AmmoPerFire_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, CurrentAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAmmo_MetaData), NewProp_CurrentAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RoF = { "RoF", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RoF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoF_MetaData), NewProp_RoF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamagePerHit = { "DamagePerHit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, DamagePerHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePerHit_MetaData), NewProp_DamagePerHit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilPitch = { "RecoilPitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RecoilPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilPitch_MetaData), NewProp_RecoilPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilYaw = { "RecoilYaw", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RecoilYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilYaw_MetaData), NewProp_RecoilYaw_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_CanFire_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->CanFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_CanFire = { "CanFire", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_CanFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanFire_MetaData), NewProp_CanFire_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_TimerFireDelay = { "TimerFireDelay", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, TimerFireDelay), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerFireDelay_MetaData), NewProp_TimerFireDelay_MetaData) }; // 756291145
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAiming_MetaData), NewProp_bIsAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AimFOV = { "AimFOV", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AimFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimFOV_MetaData), NewProp_AimFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, DefaultFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFOV_MetaData), NewProp_DefaultFOV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_FirePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AmmoPerFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RoF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamagePerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_CanFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_TimerFireDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AimFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_DefaultFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AWeaponBase>()
{
	return AWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 2951977560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_3125647869(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
