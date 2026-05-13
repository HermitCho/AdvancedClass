// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/TestMyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestMyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UTestMyInterface();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UTestMyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Interface UTestMyInterface Function OnFireDetected
struct TestMyInterface_eventOnFireDetected_Parms
{
	float Temperature;
	FVector HitLocation;
};
void ITestMyInterface::OnFireDetected(float Temperature, FVector HitLocation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFireDetected instead.");
}
static FName NAME_UTestMyInterface_OnFireDetected = FName(TEXT("OnFireDetected"));
void ITestMyInterface::Execute_OnFireDetected(UObject* O, float Temperature, FVector HitLocation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTestMyInterface::StaticClass()));
	TestMyInterface_eventOnFireDetected_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTestMyInterface_OnFireDetected);
	if (Func)
	{
		Parms.Temperature=Temperature;
		Parms.HitLocation=HitLocation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITestMyInterface*)(O->GetNativeInterfaceAddress(UTestMyInterface::StaticClass())))
	{
		I->OnFireDetected_Implementation(Temperature,HitLocation);
	}
}
struct Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// = 0\xec\x9d\x84 \xeb\xb6\x99\xec\x9d\xb4\xeb\xa9\xb4, \xec\x9d\xb4 \xec\x9d\xb8\xed\x84\xb0\xed\x8e\x98\xec\x9d\xb4\xec\x8a\xa4\xeb\xa5\xbc \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x9c\xbc\xeb\xa9\xb4 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c \xed\x95\xb4\xeb\x8b\xb9 \xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\xa8.\n//virtual void OnFireDetected(float Temperature, FVector HitLocation) = 0;\n" },
#endif
		{ "ModuleRelativePath", "Public/5week/TestMyInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "= 0\xec\x9d\x84 \xeb\xb6\x99\xec\x9d\xb4\xeb\xa9\xb4, \xec\x9d\xb4 \xec\x9d\xb8\xed\x84\xb0\xed\x8e\x98\xec\x9d\xb4\xec\x8a\xa4\xeb\xa5\xbc \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x9c\xbc\xeb\xa9\xb4 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c \xed\x95\xb4\xeb\x8b\xb9 \xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\xa8.\nvirtual void OnFireDetected(float Temperature, FVector HitLocation) = 0;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestMyInterface_eventOnFireDetected_Parms, Temperature), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestMyInterface_eventOnFireDetected_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::NewProp_HitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestMyInterface, nullptr, "OnFireDetected", nullptr, nullptr, Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::PropPointers), sizeof(TestMyInterface_eventOnFireDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(TestMyInterface_eventOnFireDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestMyInterface_OnFireDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestMyInterface_OnFireDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITestMyInterface::execOnFireDetected)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temperature);
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFireDetected_Implementation(Z_Param_Temperature,Z_Param_HitLocation);
	P_NATIVE_END;
}
// End Interface UTestMyInterface Function OnFireDetected

// Begin Interface UTestMyInterface
void UTestMyInterface::StaticRegisterNativesUTestMyInterface()
{
	UClass* Class = UTestMyInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnFireDetected", &ITestMyInterface::execOnFireDetected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMyInterface);
UClass* Z_Construct_UClass_UTestMyInterface_NoRegister()
{
	return UTestMyInterface::StaticClass();
}
struct Z_Construct_UClass_UTestMyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/5week/TestMyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestMyInterface_OnFireDetected, "OnFireDetected" }, // 4268712146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITestMyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestMyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMyInterface_Statics::ClassParams = {
	&UTestMyInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMyInterface()
{
	if (!Z_Registration_Info_UClass_UTestMyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMyInterface.OuterSingleton, Z_Construct_UClass_UTestMyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMyInterface.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UTestMyInterface>()
{
	return UTestMyInterface::StaticClass();
}
UTestMyInterface::UTestMyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMyInterface);
UTestMyInterface::~UTestMyInterface() {}
// End Interface UTestMyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestMyInterface, UTestMyInterface::StaticClass, TEXT("UTestMyInterface"), &Z_Registration_Info_UClass_UTestMyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMyInterface), 3670370063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_2940316705(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_TestMyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
