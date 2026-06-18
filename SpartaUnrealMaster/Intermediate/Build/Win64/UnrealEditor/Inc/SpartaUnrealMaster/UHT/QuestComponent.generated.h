// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "5week/QuestComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_QuestComponent_generated_h
#error "QuestComponent.generated.h already included, missing '#pragma once' in QuestComponent.h"
#endif
#define SPARTAUNREALMASTER_QuestComponent_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestData_Statics; \
	SPARTAUNREALMASTER_API static class UScriptStruct* StaticStruct();


template<> SPARTAUNREALMASTER_API UScriptStruct* StaticStruct<struct FQuestData>();

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestComponent(); \
	friend struct Z_Construct_UClass_UQuestComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(UQuestComponent)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestComponent(UQuestComponent&&); \
	UQuestComponent(const UQuestComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestComponent) \
	NO_API virtual ~UQuestComponent();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_27_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class UQuestComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
