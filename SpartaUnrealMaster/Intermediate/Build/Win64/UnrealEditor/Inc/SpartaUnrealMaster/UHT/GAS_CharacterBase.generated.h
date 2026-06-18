// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "10week/GAS_CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_GAS_CharacterBase_generated_h
#error "GAS_CharacterBase.generated.h already included, missing '#pragma once' in GAS_CharacterBase.h"
#endif
#define SPARTAUNREALMASTER_GAS_CharacterBase_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GAS_CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_CharacterBase(); \
	friend struct Z_Construct_UClass_AGAS_CharacterBase_Statics; \
public: \
	DECLARE_CLASS(AGAS_CharacterBase, ASpartaUnrealMasterCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(AGAS_CharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AGAS_CharacterBase*>(this); }


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GAS_CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_CharacterBase(AGAS_CharacterBase&&); \
	AGAS_CharacterBase(const AGAS_CharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_CharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_CharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGAS_CharacterBase) \
	NO_API virtual ~AGAS_CharacterBase();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GAS_CharacterBase_h_12_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GAS_CharacterBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GAS_CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GAS_CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class AGAS_CharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GAS_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
