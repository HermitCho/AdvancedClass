// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "5week/MyActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
#ifdef SPARTAUNREALMASTER_MyActorComponent_generated_h
#error "MyActorComponent.generated.h already included, missing '#pragma once' in MyActorComponent.h"
#endif
#define SPARTAUNREALMASTER_MyActorComponent_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_10_DELEGATE \
SPARTAUNREALMASTER_API void FHealthDeadSignature_DelegateWrapper(const FMulticastScriptDelegate& HealthDeadSignature, AController* Instigator);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_12_DELEGATE \
SPARTAUNREALMASTER_API void FHealthDamagedSignature_DelegateWrapper(const FMulticastScriptDelegate& HealthDamagedSignature, float NewHealth, float MaxHealth, float HealthChange);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDamageTake);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyActorComponent(); \
	friend struct Z_Construct_UClass_UMyActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMyActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), NO_API) \
	DECLARE_SERIALIZER(UMyActorComponent)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyActorComponent(UMyActorComponent&&); \
	UMyActorComponent(const UMyActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyActorComponent) \
	NO_API virtual ~UMyActorComponent();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_14_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class UMyActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_MyActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
