// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/WeaponTemplateBase.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponTemplateBase() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponTemplateBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponTemplateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class AWeaponTemplateBase Function CheckAmmo
struct WeaponTemplateBase_eventCheckAmmo_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	WeaponTemplateBase_eventCheckAmmo_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AWeaponTemplateBase_CheckAmmo = FName(TEXT("CheckAmmo"));
bool AWeaponTemplateBase::CheckAmmo()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponTemplateBase_CheckAmmo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponTemplateBase_eventCheckAmmo_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckAmmo_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintNativeEvent = \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8, C++\xec\x97\x90\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xec\x88\x98\xec\xa0\x95.\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent = \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8, C++\xec\x97\x90\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xec\x88\x98\xec\xa0\x95." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponTemplateBase_eventCheckAmmo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponTemplateBase_eventCheckAmmo_Parms), &Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTemplateBase, nullptr, "CheckAmmo", nullptr, nullptr, Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::PropPointers), sizeof(WeaponTemplateBase_eventCheckAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponTemplateBase_eventCheckAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponTemplateBase::execCheckAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckAmmo_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponTemplateBase Function CheckAmmo

// Begin Class AWeaponTemplateBase Function HandleReloadFinished
struct Z_Construct_UFunction_AWeaponTemplateBase_HandleReloadFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTemplateBase_HandleReloadFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTemplateBase, nullptr, "HandleReloadFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_HandleReloadFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponTemplateBase_HandleReloadFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponTemplateBase_HandleReloadFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTemplateBase_HandleReloadFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponTemplateBase::execHandleReloadFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleReloadFinished();
	P_NATIVE_END;
}
// End Class AWeaponTemplateBase Function HandleReloadFinished

// Begin Class AWeaponTemplateBase Function PlayEffects
static const FName NAME_AWeaponTemplateBase_PlayEffects = FName(TEXT("PlayEffects"));
void AWeaponTemplateBase::PlayEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponTemplateBase_PlayEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWeaponTemplateBase_PlayEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8 \xec\x8b\xa4\xed\x96\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8 \xec\x8b\xa4\xed\x96\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTemplateBase_PlayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTemplateBase, nullptr, "PlayEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_PlayEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponTemplateBase_PlayEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponTemplateBase_PlayEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTemplateBase_PlayEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWeaponTemplateBase Function PlayEffects

// Begin Class AWeaponTemplateBase Function ProcessFiring
static const FName NAME_AWeaponTemplateBase_ProcessFiring = FName(TEXT("ProcessFiring"));
void AWeaponTemplateBase::ProcessFiring()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponTemplateBase_ProcessFiring);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWeaponTemplateBase_ProcessFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintImplementableEvent = \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x88\x98\xec\xa0\x95.(C++\xec\x9d\x80 \xec\x88\x98\xec\xa0\x95x)\n//\xec\xb4\x9d\xec\x9d\x84 \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x8f\xa0\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintImplementableEvent = \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x88\x98\xec\xa0\x95.(C++\xec\x9d\x80 \xec\x88\x98\xec\xa0\x95x)\n\xec\xb4\x9d\xec\x9d\x84 \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x8f\xa0\xec\xa7\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTemplateBase_ProcessFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTemplateBase, nullptr, "ProcessFiring", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_ProcessFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponTemplateBase_ProcessFiring_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponTemplateBase_ProcessFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTemplateBase_ProcessFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWeaponTemplateBase Function ProcessFiring

// Begin Class AWeaponTemplateBase Function Reload
static const FName NAME_AWeaponTemplateBase_Reload = FName(TEXT("Reload"));
void AWeaponTemplateBase::Reload()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponTemplateBase_Reload);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Reload_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponTemplateBase_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTemplateBase_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTemplateBase, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponTemplateBase_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponTemplateBase_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTemplateBase_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponTemplateBase::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponTemplateBase Function Reload

// Begin Class AWeaponTemplateBase Function UpdateAmmo
static const FName NAME_AWeaponTemplateBase_UpdateAmmo = FName(TEXT("UpdateAmmo"));
void AWeaponTemplateBase::UpdateAmmo()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponTemplateBase_UpdateAmmo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateAmmo_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponTemplateBase_UpdateAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xb4\x9d\xec\x95\x8c \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x9d\xec\x95\x8c \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTemplateBase_UpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTemplateBase, nullptr, "UpdateAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTemplateBase_UpdateAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponTemplateBase_UpdateAmmo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponTemplateBase_UpdateAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTemplateBase_UpdateAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponTemplateBase::execUpdateAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAmmo_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponTemplateBase Function UpdateAmmo

// Begin Class AWeaponTemplateBase
void AWeaponTemplateBase::StaticRegisterNativesAWeaponTemplateBase()
{
	UClass* Class = AWeaponTemplateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAmmo", &AWeaponTemplateBase::execCheckAmmo },
		{ "HandleReloadFinished", &AWeaponTemplateBase::execHandleReloadFinished },
		{ "Reload", &AWeaponTemplateBase::execReload },
		{ "UpdateAmmo", &AWeaponTemplateBase::execUpdateAmmo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponTemplateBase);
UClass* Z_Construct_UClass_AWeaponTemplateBase_NoRegister()
{
	return AWeaponTemplateBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponTemplateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponTemplateBase.h" },
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Weapon | State" },
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_Reload_MetaData[] = {
		{ "Category", "WeaponTemplateBase" },
		{ "ModuleRelativePath", "Public/WeaponTemplateBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_Reload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponTemplateBase_CheckAmmo, "CheckAmmo" }, // 3174096296
		{ &Z_Construct_UFunction_AWeaponTemplateBase_HandleReloadFinished, "HandleReloadFinished" }, // 3239637717
		{ &Z_Construct_UFunction_AWeaponTemplateBase_PlayEffects, "PlayEffects" }, // 2462573819
		{ &Z_Construct_UFunction_AWeaponTemplateBase_ProcessFiring, "ProcessFiring" }, // 1231009088
		{ &Z_Construct_UFunction_AWeaponTemplateBase_Reload, "Reload" }, // 3851897280
		{ &Z_Construct_UFunction_AWeaponTemplateBase_UpdateAmmo, "UpdateAmmo" }, // 4150000976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponTemplateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AWeaponTemplateBase_Statics::NewProp_bIsReloading_SetBit(void* Obj)
{
	((AWeaponTemplateBase*)Obj)->bIsReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponTemplateBase_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponTemplateBase), &Z_Construct_UClass_AWeaponTemplateBase_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReloading_MetaData), NewProp_bIsReloading_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponTemplateBase_Statics::NewProp_TimerHandle_Reload = { "TimerHandle_Reload", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponTemplateBase, TimerHandle_Reload), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_Reload_MetaData), NewProp_TimerHandle_Reload_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponTemplateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponTemplateBase_Statics::NewProp_bIsReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponTemplateBase_Statics::NewProp_TimerHandle_Reload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTemplateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponTemplateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTemplateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponTemplateBase_Statics::ClassParams = {
	&AWeaponTemplateBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponTemplateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTemplateBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTemplateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponTemplateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponTemplateBase()
{
	if (!Z_Registration_Info_UClass_AWeaponTemplateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponTemplateBase.OuterSingleton, Z_Construct_UClass_AWeaponTemplateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponTemplateBase.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AWeaponTemplateBase>()
{
	return AWeaponTemplateBase::StaticClass();
}
AWeaponTemplateBase::AWeaponTemplateBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponTemplateBase);
AWeaponTemplateBase::~AWeaponTemplateBase() {}
// End Class AWeaponTemplateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponTemplateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponTemplateBase, AWeaponTemplateBase::StaticClass, TEXT("AWeaponTemplateBase"), &Z_Registration_Info_UClass_AWeaponTemplateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponTemplateBase), 291693420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponTemplateBase_h_271384949(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponTemplateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_WeaponTemplateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
