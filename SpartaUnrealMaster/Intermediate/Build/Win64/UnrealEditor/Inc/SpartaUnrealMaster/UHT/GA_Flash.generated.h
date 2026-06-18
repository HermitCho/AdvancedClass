// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "10week/GA_Flash.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_GA_Flash_generated_h
#error "GA_Flash.generated.h already included, missing '#pragma once' in GA_Flash.h"
#endif
#define SPARTAUNREALMASTER_GA_Flash_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoveFinished);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_Flash(); \
	friend struct Z_Construct_UClass_UGA_Flash_Statics; \
public: \
	DECLARE_CLASS(UGA_Flash, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(UGA_Flash)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_Flash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGA_Flash(UGA_Flash&&); \
	UGA_Flash(const UGA_Flash&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_Flash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_Flash); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_Flash) \
	NO_API virtual ~UGA_Flash();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_12_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_15_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class UGA_Flash>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_10week_GA_Flash_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
