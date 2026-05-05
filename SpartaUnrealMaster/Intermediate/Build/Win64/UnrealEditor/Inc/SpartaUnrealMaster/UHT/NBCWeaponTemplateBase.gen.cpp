// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/NBCWeaponTemplateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCWeaponTemplateBase() {}

// Begin Cross Module References
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCWeaponBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCWeaponTemplateBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCWeaponTemplateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ANBCWeaponTemplateBase Function CheckAmmo
struct NBCWeaponTemplateBase_eventCheckAmmo_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NBCWeaponTemplateBase_eventCheckAmmo_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ANBCWeaponTemplateBase_CheckAmmo = FName(TEXT("CheckAmmo"));
bool ANBCWeaponTemplateBase::CheckAmmo()
{
	UFunction* Func = FindFunctionChecked(NAME_ANBCWeaponTemplateBase_CheckAmmo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NBCWeaponTemplateBase_eventCheckAmmo_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckAmmo_Implementation();
	}
}
struct Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintNativeEvent = \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8, C++\xec\x97\x90\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xec\x88\x98\xec\xa0\x95.\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponTemplateBase.h" },
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
void Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NBCWeaponTemplateBase_eventCheckAmmo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NBCWeaponTemplateBase_eventCheckAmmo_Parms), &Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCWeaponTemplateBase, nullptr, "CheckAmmo", nullptr, nullptr, Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::PropPointers), sizeof(NBCWeaponTemplateBase_eventCheckAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBCWeaponTemplateBase_eventCheckAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCWeaponTemplateBase::execCheckAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckAmmo_Implementation();
	P_NATIVE_END;
}
// End Class ANBCWeaponTemplateBase Function CheckAmmo

// Begin Class ANBCWeaponTemplateBase Function PlayEffects
static const FName NAME_ANBCWeaponTemplateBase_PlayEffects = FName(TEXT("PlayEffects"));
void ANBCWeaponTemplateBase::PlayEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_ANBCWeaponTemplateBase_PlayEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANBCWeaponTemplateBase_PlayEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8 \xec\x8b\xa4\xed\x96\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponTemplateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8 \xec\x8b\xa4\xed\x96\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCWeaponTemplateBase_PlayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCWeaponTemplateBase, nullptr, "PlayEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponTemplateBase_PlayEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCWeaponTemplateBase_PlayEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCWeaponTemplateBase_PlayEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCWeaponTemplateBase_PlayEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANBCWeaponTemplateBase Function PlayEffects

// Begin Class ANBCWeaponTemplateBase Function ProcessFiring
static const FName NAME_ANBCWeaponTemplateBase_ProcessFiring = FName(TEXT("ProcessFiring"));
void ANBCWeaponTemplateBase::ProcessFiring()
{
	UFunction* Func = FindFunctionChecked(NAME_ANBCWeaponTemplateBase_ProcessFiring);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANBCWeaponTemplateBase_ProcessFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintImplementableEvent = \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x88\x98\xec\xa0\x95.(C++\xec\x9d\x80 \xec\x88\x98\xec\xa0\x95x)\n//\xec\xb4\x9d\xec\x9d\x84 \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x8f\xa0\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponTemplateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintImplementableEvent = \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x88\x98\xec\xa0\x95.(C++\xec\x9d\x80 \xec\x88\x98\xec\xa0\x95x)\n\xec\xb4\x9d\xec\x9d\x84 \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x8f\xa0\xec\xa7\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCWeaponTemplateBase_ProcessFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCWeaponTemplateBase, nullptr, "ProcessFiring", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponTemplateBase_ProcessFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCWeaponTemplateBase_ProcessFiring_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCWeaponTemplateBase_ProcessFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCWeaponTemplateBase_ProcessFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANBCWeaponTemplateBase Function ProcessFiring

// Begin Class ANBCWeaponTemplateBase Function Reload
static const FName NAME_ANBCWeaponTemplateBase_Reload = FName(TEXT("Reload"));
void ANBCWeaponTemplateBase::Reload()
{
	UFunction* Func = FindFunctionChecked(NAME_ANBCWeaponTemplateBase_Reload);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Reload_Implementation();
	}
}
struct Z_Construct_UFunction_ANBCWeaponTemplateBase_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBCWeaponTemplateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCWeaponTemplateBase_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCWeaponTemplateBase, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponTemplateBase_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCWeaponTemplateBase_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCWeaponTemplateBase_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCWeaponTemplateBase_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCWeaponTemplateBase::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload_Implementation();
	P_NATIVE_END;
}
// End Class ANBCWeaponTemplateBase Function Reload

// Begin Class ANBCWeaponTemplateBase Function UpdateAmmo
static const FName NAME_ANBCWeaponTemplateBase_UpdateAmmo = FName(TEXT("UpdateAmmo"));
void ANBCWeaponTemplateBase::UpdateAmmo()
{
	UFunction* Func = FindFunctionChecked(NAME_ANBCWeaponTemplateBase_UpdateAmmo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateAmmo_Implementation();
	}
}
struct Z_Construct_UFunction_ANBCWeaponTemplateBase_UpdateAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xb4\x9d\xec\x95\x8c \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCWeaponTemplateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x9d\xec\x95\x8c \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCWeaponTemplateBase_UpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCWeaponTemplateBase, nullptr, "UpdateAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCWeaponTemplateBase_UpdateAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCWeaponTemplateBase_UpdateAmmo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCWeaponTemplateBase_UpdateAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCWeaponTemplateBase_UpdateAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCWeaponTemplateBase::execUpdateAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAmmo_Implementation();
	P_NATIVE_END;
}
// End Class ANBCWeaponTemplateBase Function UpdateAmmo

// Begin Class ANBCWeaponTemplateBase
void ANBCWeaponTemplateBase::StaticRegisterNativesANBCWeaponTemplateBase()
{
	UClass* Class = ANBCWeaponTemplateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAmmo", &ANBCWeaponTemplateBase::execCheckAmmo },
		{ "Reload", &ANBCWeaponTemplateBase::execReload },
		{ "UpdateAmmo", &ANBCWeaponTemplateBase::execUpdateAmmo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCWeaponTemplateBase);
UClass* Z_Construct_UClass_ANBCWeaponTemplateBase_NoRegister()
{
	return ANBCWeaponTemplateBase::StaticClass();
}
struct Z_Construct_UClass_ANBCWeaponTemplateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "NBCWeaponTemplateBase.h" },
		{ "ModuleRelativePath", "Public/NBCWeaponTemplateBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBCWeaponTemplateBase_CheckAmmo, "CheckAmmo" }, // 2718450557
		{ &Z_Construct_UFunction_ANBCWeaponTemplateBase_PlayEffects, "PlayEffects" }, // 3925537307
		{ &Z_Construct_UFunction_ANBCWeaponTemplateBase_ProcessFiring, "ProcessFiring" }, // 1265223568
		{ &Z_Construct_UFunction_ANBCWeaponTemplateBase_Reload, "Reload" }, // 2032644398
		{ &Z_Construct_UFunction_ANBCWeaponTemplateBase_UpdateAmmo, "UpdateAmmo" }, // 1799326554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCWeaponTemplateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBCWeaponTemplateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBCWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCWeaponTemplateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCWeaponTemplateBase_Statics::ClassParams = {
	&ANBCWeaponTemplateBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCWeaponTemplateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCWeaponTemplateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCWeaponTemplateBase()
{
	if (!Z_Registration_Info_UClass_ANBCWeaponTemplateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCWeaponTemplateBase.OuterSingleton, Z_Construct_UClass_ANBCWeaponTemplateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCWeaponTemplateBase.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ANBCWeaponTemplateBase>()
{
	return ANBCWeaponTemplateBase::StaticClass();
}
ANBCWeaponTemplateBase::ANBCWeaponTemplateBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCWeaponTemplateBase);
ANBCWeaponTemplateBase::~ANBCWeaponTemplateBase() {}
// End Class ANBCWeaponTemplateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCWeaponTemplateBase, ANBCWeaponTemplateBase::StaticClass, TEXT("ANBCWeaponTemplateBase"), &Z_Registration_Info_UClass_ANBCWeaponTemplateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCWeaponTemplateBase), 206544479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_3480246833(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
