// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Node/BTTask_Sans_Bone1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Sans_Bone1() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Base();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Sans_Bone1();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Sans_Bone1_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UBTTask_Sans_Bone1 Function Fininsh
struct Z_Construct_UFunction_UBTTask_Sans_Bone1_Fininsh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Node/BTTask_Sans_Bone1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_Sans_Bone1_Fininsh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_Sans_Bone1, nullptr, "Fininsh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_Sans_Bone1_Fininsh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_Sans_Bone1_Fininsh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTTask_Sans_Bone1_Fininsh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_Sans_Bone1_Fininsh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_Sans_Bone1::execFininsh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fininsh();
	P_NATIVE_END;
}
// End Class UBTTask_Sans_Bone1 Function Fininsh

// Begin Class UBTTask_Sans_Bone1 Function OnResult
struct Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics
{
	struct BTTask_Sans_Bone1_eventOnResult_Parms
	{
		TEnumAsByte<EPathFollowingResult::Type> MovementResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Node/BTTask_Sans_Bone1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::NewProp_MovementResult = { "MovementResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_Sans_Bone1_eventOnResult_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::NewProp_MovementResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_Sans_Bone1, nullptr, "OnResult", nullptr, nullptr, Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::BTTask_Sans_Bone1_eventOnResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::BTTask_Sans_Bone1_eventOnResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_Sans_Bone1::execOnResult)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_MovementResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResult(EPathFollowingResult::Type(Z_Param_MovementResult));
	P_NATIVE_END;
}
// End Class UBTTask_Sans_Bone1 Function OnResult

// Begin Class UBTTask_Sans_Bone1
void UBTTask_Sans_Bone1::StaticRegisterNativesUBTTask_Sans_Bone1()
{
	UClass* Class = UBTTask_Sans_Bone1::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fininsh", &UBTTask_Sans_Bone1::execFininsh },
		{ "OnResult", &UBTTask_Sans_Bone1::execOnResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Sans_Bone1);
UClass* Z_Construct_UClass_UBTTask_Sans_Bone1_NoRegister()
{
	return UBTTask_Sans_Bone1::StaticClass();
}
struct Z_Construct_UClass_UBTTask_Sans_Bone1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Node/BTTask_Sans_Bone1.h" },
		{ "ModuleRelativePath", "Node/BTTask_Sans_Bone1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_Sans_Bone1_Fininsh, "Fininsh" }, // 2437789557
		{ &Z_Construct_UFunction_UBTTask_Sans_Bone1_OnResult, "OnResult" }, // 174232203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Sans_Bone1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_Sans_Bone1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Sans_Bone1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Sans_Bone1_Statics::ClassParams = {
	&UBTTask_Sans_Bone1::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Sans_Bone1_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Sans_Bone1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_Sans_Bone1()
{
	if (!Z_Registration_Info_UClass_UBTTask_Sans_Bone1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Sans_Bone1.OuterSingleton, Z_Construct_UClass_UBTTask_Sans_Bone1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_Sans_Bone1.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UBTTask_Sans_Bone1>()
{
	return UBTTask_Sans_Bone1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Sans_Bone1);
UBTTask_Sans_Bone1::~UBTTask_Sans_Bone1() {}
// End Class UBTTask_Sans_Bone1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Sans_Bone1, UBTTask_Sans_Bone1::StaticClass, TEXT("UBTTask_Sans_Bone1"), &Z_Registration_Info_UClass_UBTTask_Sans_Bone1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Sans_Bone1), 3334376466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone1_h_1609275871(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
