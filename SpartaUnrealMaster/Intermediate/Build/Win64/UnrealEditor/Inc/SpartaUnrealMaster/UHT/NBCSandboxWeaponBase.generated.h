// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBCSandboxWeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
#ifdef SPARTAUNREALMASTER_NBCSandboxWeaponBase_generated_h
#error "NBCSandboxWeaponBase.generated.h already included, missing '#pragma once' in NBCSandboxWeaponBase.h"
#endif
#define SPARTAUNREALMASTER_NBCSandboxWeaponBase_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAmmo); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execLinetraceOneShot); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execCheckAmmo);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_CALLBACK_WRAPPERS
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCSandboxWeaponBase(); \
	friend struct Z_Construct_UClass_ANBCSandboxWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ANBCSandboxWeaponBase, ANBCWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(ANBCSandboxWeaponBase)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBCSandboxWeaponBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCSandboxWeaponBase(ANBCSandboxWeaponBase&&); \
	ANBCSandboxWeaponBase(const ANBCSandboxWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCSandboxWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCSandboxWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBCSandboxWeaponBase) \
	NO_API virtual ~ANBCSandboxWeaponBase();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_12_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_CALLBACK_WRAPPERS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class ANBCSandboxWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCSandboxWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
