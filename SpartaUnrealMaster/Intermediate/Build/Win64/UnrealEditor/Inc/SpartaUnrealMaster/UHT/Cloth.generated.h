// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "5week/Cloth.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_Cloth_generated_h
#error "Cloth.generated.h already included, missing '#pragma once' in Cloth.h"
#endif
#define SPARTAUNREALMASTER_Cloth_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACloth(); \
	friend struct Z_Construct_UClass_ACloth_Statics; \
public: \
	DECLARE_CLASS(ACloth, AItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(ACloth) \
	virtual UObject* _getUObject() const override { return const_cast<ACloth*>(this); }


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACloth(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACloth(ACloth&&); \
	ACloth(const ACloth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACloth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACloth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACloth) \
	NO_API virtual ~ACloth();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_13_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_16_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class ACloth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_Cloth_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
