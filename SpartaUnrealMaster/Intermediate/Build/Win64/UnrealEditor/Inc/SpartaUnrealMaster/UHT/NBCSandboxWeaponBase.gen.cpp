// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/NBCSandboxWeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCSandboxWeaponBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCSandboxWeaponBase();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCSandboxWeaponBase_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ANBCWeaponBase();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ANBCSandboxWeaponBase Function CheckAmmo
struct Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics
{
	struct NBCSandboxWeaponBase_eventCheckAmmo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9e\x94\xed\x83\x84 \xec\xb2\xb4\xed\x81\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCSandboxWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\x94\xed\x83\x84 \xec\xb2\xb4\xed\x81\xac" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NBCSandboxWeaponBase_eventCheckAmmo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NBCSandboxWeaponBase_eventCheckAmmo_Parms), &Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCSandboxWeaponBase, nullptr, "CheckAmmo", nullptr, nullptr, Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::NBCSandboxWeaponBase_eventCheckAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::NBCSandboxWeaponBase_eventCheckAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCSandboxWeaponBase::execCheckAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckAmmo();
	P_NATIVE_END;
}
// End Class ANBCSandboxWeaponBase Function CheckAmmo

// Begin Class ANBCSandboxWeaponBase Function LinetraceOneShot
struct Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics
{
	struct NBCSandboxWeaponBase_eventLinetraceOneShot_Parms
	{
		FVector Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x82\xac\xea\xb2\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCSandboxWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xea\xb2\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCSandboxWeaponBase_eventLinetraceOneShot_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCSandboxWeaponBase, nullptr, "LinetraceOneShot", nullptr, nullptr, Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::NBCSandboxWeaponBase_eventLinetraceOneShot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::NBCSandboxWeaponBase_eventLinetraceOneShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCSandboxWeaponBase::execLinetraceOneShot)
{
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LinetraceOneShot(Z_Param_Direction);
	P_NATIVE_END;
}
// End Class ANBCSandboxWeaponBase Function LinetraceOneShot

// Begin Class ANBCSandboxWeaponBase Function PlaySound
struct Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics
{
	struct NBCSandboxWeaponBase_eventPlaySound_Parms
	{
		USoundBase* Sound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x82\xac\xea\xb2\xa9 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCSandboxWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xea\xb2\xa9 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCSandboxWeaponBase_eventPlaySound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCSandboxWeaponBase, nullptr, "PlaySound", nullptr, nullptr, Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::NBCSandboxWeaponBase_eventPlaySound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::NBCSandboxWeaponBase_eventPlaySound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCSandboxWeaponBase::execPlaySound)
{
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySound(Z_Param_Sound);
	P_NATIVE_END;
}
// End Class ANBCSandboxWeaponBase Function PlaySound

// Begin Class ANBCSandboxWeaponBase Function Reload
struct Z_Construct_UFunction_ANBCSandboxWeaponBase_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9e\xac\xec\x9e\xa5\xec\xa0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCSandboxWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\xac\xec\x9e\xa5\xec\xa0\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCSandboxWeaponBase_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCSandboxWeaponBase, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCSandboxWeaponBase_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCSandboxWeaponBase_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCSandboxWeaponBase_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCSandboxWeaponBase::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload();
	P_NATIVE_END;
}
// End Class ANBCSandboxWeaponBase Function Reload

// Begin Class ANBCSandboxWeaponBase Function SandboxFire
static const FName NAME_ANBCSandboxWeaponBase_SandboxFire = FName(TEXT("SandboxFire"));
void ANBCSandboxWeaponBase::SandboxFire()
{
	UFunction* Func = FindFunctionChecked(NAME_ANBCSandboxWeaponBase_SandboxFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANBCSandboxWeaponBase_SandboxFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBCSandboxWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCSandboxWeaponBase_SandboxFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCSandboxWeaponBase, nullptr, "SandboxFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_SandboxFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCSandboxWeaponBase_SandboxFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCSandboxWeaponBase_SandboxFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCSandboxWeaponBase_SandboxFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANBCSandboxWeaponBase Function SandboxFire

// Begin Class ANBCSandboxWeaponBase Function UpdateAmmo
struct Z_Construct_UFunction_ANBCSandboxWeaponBase_UpdateAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9e\x94\xed\x83\x84 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCSandboxWeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\x94\xed\x83\x84 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCSandboxWeaponBase_UpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCSandboxWeaponBase, nullptr, "UpdateAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCSandboxWeaponBase_UpdateAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCSandboxWeaponBase_UpdateAmmo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBCSandboxWeaponBase_UpdateAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCSandboxWeaponBase_UpdateAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCSandboxWeaponBase::execUpdateAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAmmo();
	P_NATIVE_END;
}
// End Class ANBCSandboxWeaponBase Function UpdateAmmo

// Begin Class ANBCSandboxWeaponBase
void ANBCSandboxWeaponBase::StaticRegisterNativesANBCSandboxWeaponBase()
{
	UClass* Class = ANBCSandboxWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAmmo", &ANBCSandboxWeaponBase::execCheckAmmo },
		{ "LinetraceOneShot", &ANBCSandboxWeaponBase::execLinetraceOneShot },
		{ "PlaySound", &ANBCSandboxWeaponBase::execPlaySound },
		{ "Reload", &ANBCSandboxWeaponBase::execReload },
		{ "UpdateAmmo", &ANBCSandboxWeaponBase::execUpdateAmmo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCSandboxWeaponBase);
UClass* Z_Construct_UClass_ANBCSandboxWeaponBase_NoRegister()
{
	return ANBCSandboxWeaponBase::StaticClass();
}
struct Z_Construct_UClass_ANBCSandboxWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NBCSandboxWeaponBase.h" },
		{ "ModuleRelativePath", "Public/NBCSandboxWeaponBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBCSandboxWeaponBase_CheckAmmo, "CheckAmmo" }, // 1554134303
		{ &Z_Construct_UFunction_ANBCSandboxWeaponBase_LinetraceOneShot, "LinetraceOneShot" }, // 3368730458
		{ &Z_Construct_UFunction_ANBCSandboxWeaponBase_PlaySound, "PlaySound" }, // 3130335065
		{ &Z_Construct_UFunction_ANBCSandboxWeaponBase_Reload, "Reload" }, // 2027143420
		{ &Z_Construct_UFunction_ANBCSandboxWeaponBase_SandboxFire, "SandboxFire" }, // 266466818
		{ &Z_Construct_UFunction_ANBCSandboxWeaponBase_UpdateAmmo, "UpdateAmmo" }, // 320125096
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCSandboxWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBCSandboxWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANBCWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCSandboxWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCSandboxWeaponBase_Statics::ClassParams = {
	&ANBCSandboxWeaponBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCSandboxWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCSandboxWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCSandboxWeaponBase()
{
	if (!Z_Registration_Info_UClass_ANBCSandboxWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCSandboxWeaponBase.OuterSingleton, Z_Construct_UClass_ANBCSandboxWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCSandboxWeaponBase.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ANBCSandboxWeaponBase>()
{
	return ANBCSandboxWeaponBase::StaticClass();
}
ANBCSandboxWeaponBase::ANBCSandboxWeaponBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCSandboxWeaponBase);
ANBCSandboxWeaponBase::~ANBCSandboxWeaponBase() {}
// End Class ANBCSandboxWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCSandboxWeaponBase, ANBCSandboxWeaponBase::StaticClass, TEXT("ANBCSandboxWeaponBase"), &Z_Registration_Info_UClass_ANBCSandboxWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCSandboxWeaponBase), 443267004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_466628274(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
