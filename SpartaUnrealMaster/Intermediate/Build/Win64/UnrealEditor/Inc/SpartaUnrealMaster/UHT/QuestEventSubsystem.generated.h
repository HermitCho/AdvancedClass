// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "5week/QuestEventSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FGameplayTag;
#ifdef SPARTAUNREALMASTER_QuestEventSubsystem_generated_h
#error "QuestEventSubsystem.generated.h already included, missing '#pragma once' in QuestEventSubsystem.h"
#endif
#define SPARTAUNREALMASTER_QuestEventSubsystem_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastQuestEvent);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestEventSubsystem(); \
	friend struct Z_Construct_UClass_UQuestEventSubsystem_Statics; \
public: \
	DECLARE_CLASS(UQuestEventSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(UQuestEventSubsystem)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEventSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestEventSubsystem(UQuestEventSubsystem&&); \
	UQuestEventSubsystem(const UQuestEventSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEventSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEventSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestEventSubsystem) \
	NO_API virtual ~UQuestEventSubsystem();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_11_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class UQuestEventSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
