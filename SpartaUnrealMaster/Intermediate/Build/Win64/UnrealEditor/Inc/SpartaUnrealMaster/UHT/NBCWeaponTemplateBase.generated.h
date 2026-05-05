// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBCWeaponTemplateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_NBCWeaponTemplateBase_generated_h
#error "NBCWeaponTemplateBase.generated.h already included, missing '#pragma once' in NBCWeaponTemplateBase.h"
#endif
#define SPARTAUNREALMASTER_NBCWeaponTemplateBase_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateAmmo_Implementation(); \
	virtual bool CheckAmmo_Implementation(); \
	virtual void Reload_Implementation(); \
	DECLARE_FUNCTION(execUpdateAmmo); \
	DECLARE_FUNCTION(execCheckAmmo); \
	DECLARE_FUNCTION(execReload);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_CALLBACK_WRAPPERS
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCWeaponTemplateBase(); \
	friend struct Z_Construct_UClass_ANBCWeaponTemplateBase_Statics; \
public: \
	DECLARE_CLASS(ANBCWeaponTemplateBase, ANBCWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(ANBCWeaponTemplateBase)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBCWeaponTemplateBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCWeaponTemplateBase(ANBCWeaponTemplateBase&&); \
	ANBCWeaponTemplateBase(const ANBCWeaponTemplateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCWeaponTemplateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCWeaponTemplateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBCWeaponTemplateBase) \
	NO_API virtual ~ANBCWeaponTemplateBase();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_12_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_CALLBACK_WRAPPERS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class ANBCWeaponTemplateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_NBCWeaponTemplateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
