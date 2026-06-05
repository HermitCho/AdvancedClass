// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/8week/MyObjectPool.h"
#include "SpartaUnrealMaster/Public/8week/PooledObjectData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObjectPool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMyObjectPool();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_AMyObjectPool_NoRegister();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UPooledObject_NoRegister();
SPARTAUNREALMASTER_API UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature();
SPARTAUNREALMASTER_API UScriptStruct* Z_Construct_UScriptStruct_FPooledObjectData();
SPARTAUNREALMASTER_API UScriptStruct* Z_Construct_UScriptStruct_FSingleObjectPool();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Delegate FPoolerCleanupSignature
struct Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpartaUnrealMaster, nullptr, "PoolerCleanupSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPoolerCleanupSignature_DelegateWrapper(const FMulticastScriptDelegate& PoolerCleanupSignature)
{
	PoolerCleanupSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FPoolerCleanupSignature

// Begin ScriptStruct FSingleObjectPool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SingleObjectPool;
class UScriptStruct* FSingleObjectPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SingleObjectPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SingleObjectPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleObjectPool, (UObject*)Z_Construct_UPackage__Script_SpartaUnrealMaster(), TEXT("SingleObjectPool"));
	}
	return Z_Registration_Info_UScriptStruct_SingleObjectPool.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UScriptStruct* StaticStruct<FSingleObjectPool>()
{
	return FSingleObjectPool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSingleObjectPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PooledObject\xeb\xa5\xbc \xeb\x8b\xb4\xec\x9d\x84 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PooledObject\xeb\xa5\xbc \xeb\x8b\xb4\xec\x9d\x84 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PooledObjects_MetaData[] = {
		{ "Category", "SingleObjectPool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PooledObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleObjectPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSingleObjectPool_Statics::NewProp_PooledObjects_Inner = { "PooledObjects", nullptr, (EPropertyFlags)0x01040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPooledObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleObjectPool_Statics::NewProp_PooledObjects = { "PooledObjects", nullptr, (EPropertyFlags)0x011400800002081d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleObjectPool, PooledObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PooledObjects_MetaData), NewProp_PooledObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleObjectPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleObjectPool_Statics::NewProp_PooledObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleObjectPool_Statics::NewProp_PooledObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleObjectPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleObjectPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
	nullptr,
	&NewStructOps,
	"SingleObjectPool",
	Z_Construct_UScriptStruct_FSingleObjectPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleObjectPool_Statics::PropPointers),
	sizeof(FSingleObjectPool),
	alignof(FSingleObjectPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleObjectPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSingleObjectPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSingleObjectPool()
{
	if (!Z_Registration_Info_UScriptStruct_SingleObjectPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SingleObjectPool.InnerSingleton, Z_Construct_UScriptStruct_FSingleObjectPool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SingleObjectPool.InnerSingleton;
}
// End ScriptStruct FSingleObjectPool

// Begin Class AMyObjectPool Function Broad_PoolerCleanup
struct Z_Construct_UFunction_AMyObjectPool_Broad_PoolerCleanup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb9\xa0\xec\xa1\x8c\xeb\x8d\x98 \xec\x95\xa1\xed\x84\xb0 \xeb\x8b\xa4\xec\x8b\x9c \xed\x9a\x8c\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb9\xa0\xec\xa1\x8c\xeb\x8d\x98 \xec\x95\xa1\xed\x84\xb0 \xeb\x8b\xa4\xec\x8b\x9c \xed\x9a\x8c\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyObjectPool_Broad_PoolerCleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObjectPool, nullptr, "Broad_PoolerCleanup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_Broad_PoolerCleanup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyObjectPool_Broad_PoolerCleanup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyObjectPool_Broad_PoolerCleanup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyObjectPool_Broad_PoolerCleanup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyObjectPool::execBroad_PoolerCleanup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Broad_PoolerCleanup();
	P_NATIVE_END;
}
// End Class AMyObjectPool Function Broad_PoolerCleanup

// Begin Class AMyObjectPool Function GetPooledActor
struct Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics
{
	struct MyObjectPool_eventGetPooledActor_Parms
	{
		FString Name;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x86\x8c\xed\x99\x98\xed\x95\x9c \xec\x95\xa1\xed\x84\xb0\xeb\x93\xa4\xec\x9d\x84 \xec\x9d\xb4\xeb\xa6\x84\xea\xb3\xbc \xeb\xa7\xa4\xec\xb9\xad\xed\x95\xb4\xec\x84\x9c \xea\xb0\x80\xec\xa0\xb8\xea\xb0\x80\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xed\x99\x98\xed\x95\x9c \xec\x95\xa1\xed\x84\xb0\xeb\x93\xa4\xec\x9d\x84 \xec\x9d\xb4\xeb\xa6\x84\xea\xb3\xbc \xeb\xa7\xa4\xec\xb9\xad\xed\x95\xb4\xec\x84\x9c \xea\xb0\x80\xec\xa0\xb8\xea\xb0\x80\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyObjectPool_eventGetPooledActor_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyObjectPool_eventGetPooledActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObjectPool, nullptr, "GetPooledActor", nullptr, nullptr, Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::MyObjectPool_eventGetPooledActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::MyObjectPool_eventGetPooledActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyObjectPool_GetPooledActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyObjectPool_GetPooledActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyObjectPool::execGetPooledActor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetPooledActor(Z_Param_Name);
	P_NATIVE_END;
}
// End Class AMyObjectPool Function GetPooledActor

// Begin Class AMyObjectPool Function RecycleActor
struct Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics
{
	struct MyObjectPool_eventRecycleActor_Parms
	{
		AActor* PooledActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x95\xa1\xed\x84\xb0\xeb\xa5\xbc \xeb\x84\x98\xea\xb2\xa8\xec\xa3\xbc\xeb\xa9\xb4 \xed\x9a\x8c\xec\x88\x98\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\xa3\xbc\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\xa1\xed\x84\xb0\xeb\xa5\xbc \xeb\x84\x98\xea\xb2\xa8\xec\xa3\xbc\xeb\xa9\xb4 \xed\x9a\x8c\xec\x88\x98\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\xa3\xbc\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::NewProp_PooledActor = { "PooledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyObjectPool_eventRecycleActor_Parms, PooledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::NewProp_PooledActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObjectPool, nullptr, "RecycleActor", nullptr, nullptr, Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::MyObjectPool_eventRecycleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::MyObjectPool_eventRecycleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyObjectPool_RecycleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyObjectPool_RecycleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyObjectPool::execRecycleActor)
{
	P_GET_OBJECT(AActor,Z_Param_PooledActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecycleActor(Z_Param_PooledActor);
	P_NATIVE_END;
}
// End Class AMyObjectPool Function RecycleActor

// Begin Class AMyObjectPool Function RecyclePooledObject
struct Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics
{
	struct MyObjectPool_eventRecyclePooledObject_Parms
	{
		UPooledObject* PoolCompRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xb5\x9c\xec\xa2\x85 \xed\x9a\x8c\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xec\xa2\x85 \xed\x9a\x8c\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoolCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::NewProp_PoolCompRef = { "PoolCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyObjectPool_eventRecyclePooledObject_Parms, PoolCompRef), Z_Construct_UClass_UPooledObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolCompRef_MetaData), NewProp_PoolCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::NewProp_PoolCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObjectPool, nullptr, "RecyclePooledObject", nullptr, nullptr, Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::MyObjectPool_eventRecyclePooledObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::MyObjectPool_eventRecyclePooledObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyObjectPool::execRecyclePooledObject)
{
	P_GET_OBJECT(UPooledObject,Z_Param_PoolCompRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecyclePooledObject(Z_Param_PoolCompRef);
	P_NATIVE_END;
}
// End Class AMyObjectPool Function RecyclePooledObject

// Begin Class AMyObjectPool
void AMyObjectPool::StaticRegisterNativesAMyObjectPool()
{
	UClass* Class = AMyObjectPool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Broad_PoolerCleanup", &AMyObjectPool::execBroad_PoolerCleanup },
		{ "GetPooledActor", &AMyObjectPool::execGetPooledActor },
		{ "RecycleActor", &AMyObjectPool::execRecycleActor },
		{ "RecyclePooledObject", &AMyObjectPool::execRecyclePooledObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyObjectPool);
UClass* Z_Construct_UClass_AMyObjectPool_NoRegister()
{
	return AMyObjectPool::StaticClass();
}
struct Z_Construct_UClass_AMyObjectPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "8week/MyObjectPool.h" },
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPoolerCleanup_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa7\x80\xec\x9a\xb0\xeb\x8a\x94 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x80\xec\x9a\xb0\xeb\x8a\x94 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PooledObjectData_MetaData[] = {
		{ "Category", "MyObjectPool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb0\x96\xec\x97\x90\xec\x84\x9c \xec\x83\x9d\xec\x84\xb1\xed\x95\xa0 \xeb\x95\x8c \xec\xa7\x80\xec\xa0\x95\xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\x96\xec\x97\x90\xec\x84\x9c \xec\x83\x9d\xec\x84\xb1\xed\x95\xa0 \xeb\x95\x8c \xec\xa7\x80\xec\xa0\x95\xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pools_MetaData[] = {
		{ "Category", "MyObjectPool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4 \xeb\x91\x94 \xec\x95\xa1\xed\x84\xb0\xec\x97\x90 \xeb\xb6\x99\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\xa5\xbc \xeb\xaa\xa8\xec\x95\x84\xeb\x91\x90\xeb\x8a\x94 \xeb\xb0\xb0\xec\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/8week/MyObjectPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4 \xeb\x91\x94 \xec\x95\xa1\xed\x84\xb0\xec\x97\x90 \xeb\xb6\x99\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\xa5\xbc \xeb\xaa\xa8\xec\x95\x84\xeb\x91\x90\xeb\x8a\x94 \xeb\xb0\xb0\xec\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPoolerCleanup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PooledObjectData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PooledObjectData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyObjectPool_Broad_PoolerCleanup, "Broad_PoolerCleanup" }, // 1923674026
		{ &Z_Construct_UFunction_AMyObjectPool_GetPooledActor, "GetPooledActor" }, // 1274972704
		{ &Z_Construct_UFunction_AMyObjectPool_RecycleActor, "RecycleActor" }, // 444899843
		{ &Z_Construct_UFunction_AMyObjectPool_RecyclePooledObject, "RecyclePooledObject" }, // 1339171548
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyObjectPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyObjectPool_Statics::NewProp_OnPoolerCleanup = { "OnPoolerCleanup", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyObjectPool, OnPoolerCleanup), Z_Construct_UDelegateFunction_SpartaUnrealMaster_PoolerCleanupSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPoolerCleanup_MetaData), NewProp_OnPoolerCleanup_MetaData) }; // 2636329839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyObjectPool_Statics::NewProp_PooledObjectData_Inner = { "PooledObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPooledObjectData, METADATA_PARAMS(0, nullptr) }; // 2192243915
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyObjectPool_Statics::NewProp_PooledObjectData = { "PooledObjectData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyObjectPool, PooledObjectData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PooledObjectData_MetaData), NewProp_PooledObjectData_MetaData) }; // 2192243915
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyObjectPool_Statics::NewProp_Pools_Inner = { "Pools", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSingleObjectPool, METADATA_PARAMS(0, nullptr) }; // 3478008728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyObjectPool_Statics::NewProp_Pools = { "Pools", nullptr, (EPropertyFlags)0x0020088000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyObjectPool, Pools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pools_MetaData), NewProp_Pools_MetaData) }; // 3478008728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyObjectPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObjectPool_Statics::NewProp_OnPoolerCleanup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObjectPool_Statics::NewProp_PooledObjectData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObjectPool_Statics::NewProp_PooledObjectData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObjectPool_Statics::NewProp_Pools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyObjectPool_Statics::NewProp_Pools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyObjectPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyObjectPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyObjectPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyObjectPool_Statics::ClassParams = {
	&AMyObjectPool::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyObjectPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyObjectPool_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyObjectPool_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyObjectPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyObjectPool()
{
	if (!Z_Registration_Info_UClass_AMyObjectPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyObjectPool.OuterSingleton, Z_Construct_UClass_AMyObjectPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyObjectPool.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<AMyObjectPool>()
{
	return AMyObjectPool::StaticClass();
}
AMyObjectPool::AMyObjectPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyObjectPool);
AMyObjectPool::~AMyObjectPool() {}
// End Class AMyObjectPool

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_MyObjectPool_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSingleObjectPool::StaticStruct, Z_Construct_UScriptStruct_FSingleObjectPool_Statics::NewStructOps, TEXT("SingleObjectPool"), &Z_Registration_Info_UScriptStruct_SingleObjectPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSingleObjectPool), 3478008728U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyObjectPool, AMyObjectPool::StaticClass, TEXT("AMyObjectPool"), &Z_Registration_Info_UClass_AMyObjectPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyObjectPool), 2684500375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_MyObjectPool_h_1628081915(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_MyObjectPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_MyObjectPool_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_MyObjectPool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_8week_MyObjectPool_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
