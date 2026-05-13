// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "5week/ItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef SPARTAUNREALMASTER_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define SPARTAUNREALMASTER_ItemBase_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayerDeathReceive);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemBase(AItemBase&&); \
	AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase) \
	NO_API virtual ~AItemBase();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_10_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
