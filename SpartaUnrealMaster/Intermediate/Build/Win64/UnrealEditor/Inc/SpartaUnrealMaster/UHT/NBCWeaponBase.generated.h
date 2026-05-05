// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBCWeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_NBCWeaponBase_generated_h
#error "NBCWeaponBase.generated.h already included, missing '#pragma once' in NBCWeaponBase.h"
#endif
#define SPARTAUNREALMASTER_NBCWeaponBase_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleFireDelay); \
	DECLARE_FUNCTION(execFire);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCWeaponBase(); \
	friend struct Z_Construct_UClass_ANBCWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ANBCWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(ANBCWeaponBase)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCWeaponBase(ANBCWeaponBase&&); \
	ANBCWeaponBase(const ANBCWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBCWeaponBase) \
	NO_API virtual ~ANBCWeaponBase();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_9_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class ANBCWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
