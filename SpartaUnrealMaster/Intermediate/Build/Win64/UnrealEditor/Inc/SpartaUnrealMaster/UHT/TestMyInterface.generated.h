// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "5week/TestMyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAUNREALMASTER_TestMyInterface_generated_h
#error "TestMyInterface.generated.h already included, missing '#pragma once' in TestMyInterface.h"
#endif
#define SPARTAUNREALMASTER_TestMyInterface_generated_h

#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFireDetected_Implementation(float Temperature, FVector HitLocation) {}; \
	DECLARE_FUNCTION(execOnFireDetected);


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_CALLBACK_WRAPPERS
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPARTAUNREALMASTER_API UTestMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMyInterface(UTestMyInterface&&); \
	UTestMyInterface(const UTestMyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPARTAUNREALMASTER_API, UTestMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMyInterface) \
	SPARTAUNREALMASTER_API virtual ~UTestMyInterface();


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTestMyInterface(); \
	friend struct Z_Construct_UClass_UTestMyInterface_Statics; \
public: \
	DECLARE_CLASS(UTestMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SpartaUnrealMaster"), SPARTAUNREALMASTER_API) \
	DECLARE_SERIALIZER(UTestMyInterface)


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITestMyInterface() {} \
public: \
	typedef UTestMyInterface UClassType; \
	typedef ITestMyInterface ThisClass; \
	static void Execute_OnFireDetected(UObject* O, float Temperature, FVector HitLocation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_10_PROLOG
#define FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_CALLBACK_WRAPPERS \
	FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAUNREALMASTER_API UClass* StaticClass<class UTestMyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
