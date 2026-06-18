// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaUnrealMaster/Public/5week/QuestEventSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEventSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UQuestEventSubsystem();
SPARTAUNREALMASTER_API UClass* Z_Construct_UClass_UQuestEventSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster();
// End Cross Module References

// Begin Class UQuestEventSubsystem Function BroadcastQuestEvent
struct Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics
{
	struct QuestEventSubsystem_eventBroadcastQuestEvent_Parms
	{
		FGameplayTag EventTag;
		AController* Instigator;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xaa\xac\xec\x8a\xa4\xed\x84\xb0\xea\xb0\x80 \xec\x82\xac\xeb\xa7\x9d\xed\x95\xa0 \xeb\x95\x8c \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/5week/QuestEventSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xaa\xac\xec\x8a\xa4\xed\x84\xb0\xea\xb0\x80 \xec\x82\xac\xeb\xa7\x9d\xed\x95\xa0 \xeb\x95\x8c \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestEventSubsystem_eventBroadcastQuestEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestEventSubsystem_eventBroadcastQuestEvent_Parms, Instigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestEventSubsystem_eventBroadcastQuestEvent_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEventSubsystem, nullptr, "BroadcastQuestEvent", nullptr, nullptr, Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::QuestEventSubsystem_eventBroadcastQuestEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::QuestEventSubsystem_eventBroadcastQuestEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestEventSubsystem::execBroadcastQuestEvent)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_OBJECT(AController,Z_Param_Instigator);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastQuestEvent(Z_Param_EventTag,Z_Param_Instigator,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UQuestEventSubsystem Function BroadcastQuestEvent

// Begin Class UQuestEventSubsystem
void UQuestEventSubsystem::StaticRegisterNativesUQuestEventSubsystem()
{
	UClass* Class = UQuestEventSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastQuestEvent", &UQuestEventSubsystem::execBroadcastQuestEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEventSubsystem);
UClass* Z_Construct_UClass_UQuestEventSubsystem_NoRegister()
{
	return UQuestEventSubsystem::StaticClass();
}
struct Z_Construct_UClass_UQuestEventSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "5week/QuestEventSubsystem.h" },
		{ "ModuleRelativePath", "Public/5week/QuestEventSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEventSubsystem_BroadcastQuestEvent, "BroadcastQuestEvent" }, // 3177400818
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEventSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuestEventSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaUnrealMaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEventSubsystem_Statics::ClassParams = {
	&UQuestEventSubsystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestEventSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestEventSubsystem()
{
	if (!Z_Registration_Info_UClass_UQuestEventSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEventSubsystem.OuterSingleton, Z_Construct_UClass_UQuestEventSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestEventSubsystem.OuterSingleton;
}
template<> SPARTAUNREALMASTER_API UClass* StaticClass<UQuestEventSubsystem>()
{
	return UQuestEventSubsystem::StaticClass();
}
UQuestEventSubsystem::UQuestEventSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEventSubsystem);
UQuestEventSubsystem::~UQuestEventSubsystem() {}
// End Class UQuestEventSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEventSubsystem, UQuestEventSubsystem::StaticClass, TEXT("UQuestEventSubsystem"), &Z_Registration_Info_UClass_UQuestEventSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEventSubsystem), 3850617178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_3379250995(TEXT("/Script/SpartaUnrealMaster"),
	Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaUnrealMaster_Source_SpartaUnrealMaster_Public_5week_QuestEventSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
