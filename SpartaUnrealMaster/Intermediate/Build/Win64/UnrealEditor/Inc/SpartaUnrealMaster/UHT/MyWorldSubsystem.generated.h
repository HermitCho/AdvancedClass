// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyWorldSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_MyWorldSubsystem_generated_h
#error "MyWorldSubsystem.generated.h already included, missing '#pragma once' in MyWorldSubsystem.h"
#endif
#define SPARTAUNREALMASTER_MyWorldSubsystem_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyWorldSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyWorldSubsystem(); \
	friend struct Z_Construct_UClass_UMyWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMyWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(UMyWorldSubsystem)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyWorldSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyWorldSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyWorldSubsystem(UMyWorldSubsystem&&); \
	UMyWorldSubsystem(const UMyWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyWorldSubsystem) \
	NO_API virtual ~UMyWorldSubsystem();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyWorldSubsystem_h_12_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyWorldSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyWorldSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyWorldSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class UMyWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_MyWorldSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
