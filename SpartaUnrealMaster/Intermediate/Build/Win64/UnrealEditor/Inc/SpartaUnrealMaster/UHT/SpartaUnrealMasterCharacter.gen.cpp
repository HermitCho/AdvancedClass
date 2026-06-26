// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/SpartaUnrealMasterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaUnrealMasterCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ASpartaUnrealMasterCharacter();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_ASpartaUnrealMasterCharacter_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UGAs_AttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class ASpartaUnrealMasterCharacter Function ApplyDamage
struct Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics
{
	struct SpartaUnrealMasterCharacter_eventApplyDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaUnrealMasterCharacter_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaUnrealMasterCharacter, nullptr, "ApplyDamage", nullptr, nullptr, Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::SpartaUnrealMasterCharacter_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::SpartaUnrealMasterCharacter_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaUnrealMasterCharacter::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class ASpartaUnrealMasterCharacter Function ApplyDamage

// Begin Class ASpartaUnrealMasterCharacter
void ASpartaUnrealMasterCharacter::StaticRegisterNativesASpartaUnrealMasterCharacter()
{
	UClass* Class = ASpartaUnrealMasterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &ASpartaUnrealMasterCharacter::execApplyDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaUnrealMasterCharacter);
UClass* Z_Construct_UClass_ASpartaUnrealMasterCharacter_NoRegister()
{
	return ASpartaUnrealMasterCharacter::StaticClass();
}
struct Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpartaUnrealMasterCharacter.h" },
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Aiming Input Action */" },
#endif
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aiming Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadingAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Relaoding Input Action */" },
#endif
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Relaoding Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SpartaUnrealMasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadingAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpartaUnrealMasterCharacter_ApplyDamage, "ApplyDamage" }, // 1069503098
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaUnrealMasterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_AimingAction = { "AimingAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, AimingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingAction_MetaData), NewProp_AimingAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_ReloadingAction = { "ReloadingAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, ReloadingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadingAction_MetaData), NewProp_ReloadingAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, AttributeSet), Z_Construct_UClass_UGAs_AttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaUnrealMasterCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_AimingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_ReloadingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::NewProp_FireAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::ClassParams = {
	&ASpartaUnrealMasterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaUnrealMasterCharacter()
{
	if (!Z_Registration_Info_UClass_ASpartaUnrealMasterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaUnrealMasterCharacter.OuterSingleton, Z_Construct_UClass_ASpartaUnrealMasterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaUnrealMasterCharacter.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<ASpartaUnrealMasterCharacter>()
{
	return ASpartaUnrealMasterCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaUnrealMasterCharacter);
ASpartaUnrealMasterCharacter::~ASpartaUnrealMasterCharacter() {}
// End Class ASpartaUnrealMasterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaUnrealMasterCharacter, ASpartaUnrealMasterCharacter::StaticClass, TEXT("ASpartaUnrealMasterCharacter"), &Z_Registration_Info_UClass_ASpartaUnrealMasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaUnrealMasterCharacter), 986597507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterCharacter_h_1057305336(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_SpartaUnrealMasterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
