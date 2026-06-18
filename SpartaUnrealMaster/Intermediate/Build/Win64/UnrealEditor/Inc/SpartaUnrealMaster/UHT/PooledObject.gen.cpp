// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/8week/PooledObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePooledObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UPooledObject();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UPooledObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UPooledObject Function RecycleSelf
struct Z_Construct_UFunction_UPooledObject_RecycleSelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/8week/PooledObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledObject_RecycleSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPooledObject, nullptr, "RecycleSelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledObject_RecycleSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledObject_RecycleSelf_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPooledObject_RecycleSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledObject_RecycleSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPooledObject::execRecycleSelf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecycleSelf();
	P_NATIVE_END;
}
// End Class UPooledObject Function RecycleSelf

// Begin Class UPooledObject
void UPooledObject::StaticRegisterNativesUPooledObject()
{
	UClass* Class = UPooledObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RecycleSelf", &UPooledObject::execRecycleSelf },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPooledObject);
UClass* Z_Construct_UClass_UPooledObject_NoRegister()
{
	return UPooledObject::StaticClass();
}
struct Z_Construct_UClass_UPooledObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "8week/PooledObject.h" },
		{ "ModuleRelativePath", "Public/8week/PooledObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPoolActive_MetaData[] = {
		{ "Category", "PooledObject" },
		{ "ModuleRelativePath", "Public/8week/PooledObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPoolActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPoolActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPooledObject_RecycleSelf, "RecycleSelf" }, // 4042429902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPooledObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPooledObject_Statics::NewProp_bIsPoolActive_SetBit(void* Obj)
{
	((UPooledObject*)Obj)->bIsPoolActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPooledObject_Statics::NewProp_bIsPoolActive = { "bIsPoolActive", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPooledObject), &Z_Construct_UClass_UPooledObject_Statics::NewProp_bIsPoolActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPoolActive_MetaData), NewProp_bIsPoolActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPooledObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPooledObject_Statics::NewProp_bIsPoolActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPooledObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPooledObject_Statics::ClassParams = {
	&UPooledObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPooledObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPooledObject_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UPooledObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPooledObject()
{
	if (!Z_Registration_Info_UClass_UPooledObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPooledObject.OuterSingleton, Z_Construct_UClass_UPooledObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPooledObject.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UPooledObject>()
{
	return UPooledObject::StaticClass();
}
UPooledObject::UPooledObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPooledObject);
UPooledObject::~UPooledObject() {}
// End Class UPooledObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPooledObject, UPooledObject::StaticClass, TEXT("UPooledObject"), &Z_Registration_Info_UClass_UPooledObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPooledObject), 1207522113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObject_h_2409574798(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_PooledObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
