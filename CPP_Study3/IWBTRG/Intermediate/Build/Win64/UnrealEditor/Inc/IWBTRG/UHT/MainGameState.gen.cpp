// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/System/MainGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
IWBTRG_API UClass* Z_Construct_UClass_AMainGameState();
IWBTRG_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
IWBTRG_API UFunction* Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature();
IWBTRG_API UFunction* Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Delegate FOnGameClear
struct Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnGameClear__DelegateSignature", "MainGameState", "OnGameClear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameClear_DelegateWrapper(const FMulticastScriptDelegate& OnGameClear)
{
	OnGameClear.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameClear

// Begin Delegate FOnGameOver
struct Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnGameOver__DelegateSignature", "MainGameState", "OnGameOver", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_IWBTRG_OnGameOver__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameOver_DelegateWrapper(const FMulticastScriptDelegate& OnGameOver)
{
	OnGameOver.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameOver

// Begin Class AMainGameState Function OnLevelTransition
struct Z_Construct_UFunction_AMainGameState_OnLevelTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_OnLevelTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "OnLevelTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_OnLevelTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_OnLevelTransition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainGameState_OnLevelTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_OnLevelTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execOnLevelTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelTransition();
	P_NATIVE_END;
}
// End Class AMainGameState Function OnLevelTransition

// Begin Class AMainGameState
void AMainGameState::StaticRegisterNativesAMainGameState()
{
	UClass* Class = AMainGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLevelTransition", &AMainGameState::execOnLevelTransition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameState);
UClass* Z_Construct_UClass_AMainGameState_NoRegister()
{
	return AMainGameState::StaticClass();
}
struct Z_Construct_UClass_AMainGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "System/MainGameState.h" },
		{ "ModuleRelativePath", "System/MainGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameClear_MetaData[] = {
		{ "ModuleRelativePath", "System/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameOver_MetaData[] = {
		{ "ModuleRelativePath", "System/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameClear;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameOver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGameState_OnLevelTransition, "OnLevelTransition" }, // 3931431616
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_OnGameClear = { "OnGameClear", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, OnGameClear), Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameClear_MetaData), NewProp_OnGameClear_MetaData) }; // 299490169
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_OnGameOver = { "OnGameOver", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, OnGameOver), Z_Construct_USparseDelegateFunction_IWBTRG_OnGameClear__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameOver_MetaData), NewProp_OnGameOver_MetaData) }; // 299490169
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_OnGameClear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_OnGameOver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameState_Statics::ClassParams = {
	&AMainGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGameState()
{
	if (!Z_Registration_Info_UClass_AMainGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameState.OuterSingleton, Z_Construct_UClass_AMainGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGameState.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AMainGameState>()
{
	return AMainGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameState);
AMainGameState::~AMainGameState() {}
// End Class AMainGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameState, AMainGameState::StaticClass, TEXT("AMainGameState"), &Z_Registration_Info_UClass_AMainGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameState), 121992119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameState_h_20719786(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
