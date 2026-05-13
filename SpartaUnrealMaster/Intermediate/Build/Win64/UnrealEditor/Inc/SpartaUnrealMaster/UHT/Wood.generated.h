// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "5week/Wood.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_Wood_generated_h
#error "Wood.generated.h already included, missing '#pragma once' in Wood.h"
#endif
#define SPARTAUNREALMASTER_Wood_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWood(); \
	friend struct Z_Construct_UClass_AWood_Statics; \
public: \
	DECLARE_CLASS(AWood, AItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(AWood) \
	virtual UObject* _getUObject() const override { return const_cast<AWood*>(this); }


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWood(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWood(AWood&&); \
	AWood(const AWood&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWood); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWood) \
	NO_API virtual ~AWood();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_10_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_13_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class AWood>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Wood_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
