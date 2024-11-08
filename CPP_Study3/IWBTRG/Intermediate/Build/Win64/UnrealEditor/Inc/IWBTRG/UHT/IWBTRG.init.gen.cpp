// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWBTRG_init() {}
	IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature();
	IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature();
	IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature();
	IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature();
	IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature();
	IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature();
	IWBTRG_API UFunction* Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature();
	IWBTRG_API UFunction* Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IWBTRG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IWBTRG()
	{
		if (!Z_Registration_Info_UPackage__Script_IWBTRG.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IWBTRG",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x42E964F2,
				0x5A78B57F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IWBTRG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IWBTRG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IWBTRG(Z_Construct_UPackage__Script_IWBTRG, TEXT("/Script/IWBTRG"), Z_Registration_Info_UPackage__Script_IWBTRG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x42E964F2, 0x5A78B57F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
