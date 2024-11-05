// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Node/BTTask_PathTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PathTrace() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Base();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_PathTrace();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_PathTrace_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UBTTask_PathTrace Function OnResult
struct Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics
{
	struct BTTask_PathTrace_eventOnResult_Parms
	{
		TEnumAsByte<EPathFollowingResult::Type> MovementResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Node/BTTask_PathTrace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::NewProp_MovementResult = { "MovementResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_PathTrace_eventOnResult_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::NewProp_MovementResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_PathTrace, nullptr, "OnResult", nullptr, nullptr, Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::BTTask_PathTrace_eventOnResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::BTTask_PathTrace_eventOnResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_PathTrace_OnResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_PathTrace_OnResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_PathTrace::execOnResult)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_MovementResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResult(EPathFollowingResult::Type(Z_Param_MovementResult));
	P_NATIVE_END;
}
// End Class UBTTask_PathTrace Function OnResult

// Begin Class UBTTask_PathTrace
void UBTTask_PathTrace::StaticRegisterNativesUBTTask_PathTrace()
{
	UClass* Class = UBTTask_PathTrace::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnResult", &UBTTask_PathTrace::execOnResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PathTrace);
UClass* Z_Construct_UClass_UBTTask_PathTrace_NoRegister()
{
	return UBTTask_PathTrace::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PathTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Node/BTTask_PathTrace.h" },
		{ "ModuleRelativePath", "Node/BTTask_PathTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[] = {
		{ "ModuleRelativePath", "Node/BTTask_PathTrace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_PathTrace_OnResult, "OnResult" }, // 2711058172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PathTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PathTrace_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PathTrace, Proxy), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proxy_MetaData), NewProp_Proxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PathTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PathTrace_Statics::NewProp_Proxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathTrace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PathTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PathTrace_Statics::ClassParams = {
	&UBTTask_PathTrace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_PathTrace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathTrace_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PathTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PathTrace()
{
	if (!Z_Registration_Info_UClass_UBTTask_PathTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PathTrace.OuterSingleton, Z_Construct_UClass_UBTTask_PathTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PathTrace.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UBTTask_PathTrace>()
{
	return UBTTask_PathTrace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PathTrace);
UBTTask_PathTrace::~UBTTask_PathTrace() {}
// End Class UBTTask_PathTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PathTrace, UBTTask_PathTrace::StaticClass, TEXT("UBTTask_PathTrace"), &Z_Registration_Info_UClass_UBTTask_PathTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PathTrace), 1394730215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_1040522420(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
