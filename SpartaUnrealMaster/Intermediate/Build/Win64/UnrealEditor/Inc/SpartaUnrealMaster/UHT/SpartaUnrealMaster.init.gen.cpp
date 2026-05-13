// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaUnrealMaster_init() {}
	SPARTAUNREALMASTER_API UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature();
	SPARTAUNREALMASTER_API UFunction* Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpartaUnrealMaster;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpartaUnrealMaster()
	{
		if (!Z_Registration_Info_UPackage__Script_SpartaUnrealMaster.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDamagedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpartaUnrealMaster_HealthDeadSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpartaUnrealMaster",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x190DC58F,
				0x9A394D79,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpartaUnrealMaster.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SpartaUnrealMaster.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpartaUnrealMaster(Z_Construct_UPackage__Script_SpartaUnrealMaster, TEXT("/Script/SpartaUnrealMaster"), Z_Registration_Info_UPackage__Script_SpartaUnrealMaster, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x190DC58F, 0x9A394D79));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
