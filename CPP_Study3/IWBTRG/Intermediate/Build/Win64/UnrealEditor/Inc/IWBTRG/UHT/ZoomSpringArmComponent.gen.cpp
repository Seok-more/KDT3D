// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Components/ZoomSpringArmComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoomSpringArmComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
IWBTRG_API UClass* Z_Construct_UClass_UZoomSpringArmComponent();
IWBTRG_API UClass* Z_Construct_UClass_UZoomSpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UZoomSpringArmComponent Function SetDesiredZoom
struct Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics
{
	struct ZoomSpringArmComponent_eventSetDesiredZoom_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/ZoomSpringArmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomSpringArmComponent_eventSetDesiredZoom_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomSpringArmComponent, nullptr, "SetDesiredZoom", nullptr, nullptr, Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::ZoomSpringArmComponent_eventSetDesiredZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::ZoomSpringArmComponent_eventSetDesiredZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZoomSpringArmComponent::execSetDesiredZoom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredZoom(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UZoomSpringArmComponent Function SetDesiredZoom

// Begin Class UZoomSpringArmComponent Function SetMinMaxTargetArmLength
struct Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics
{
	struct ZoomSpringArmComponent_eventSetMinMaxTargetArmLength_Parms
	{
		float MinLength;
		float MaxLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/ZoomSpringArmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLength_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::NewProp_MinLength = { "MinLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomSpringArmComponent_eventSetMinMaxTargetArmLength_Parms, MinLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLength_MetaData), NewProp_MinLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomSpringArmComponent_eventSetMinMaxTargetArmLength_Parms, MaxLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLength_MetaData), NewProp_MaxLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::NewProp_MinLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::NewProp_MaxLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomSpringArmComponent, nullptr, "SetMinMaxTargetArmLength", nullptr, nullptr, Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::ZoomSpringArmComponent_eventSetMinMaxTargetArmLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::ZoomSpringArmComponent_eventSetMinMaxTargetArmLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZoomSpringArmComponent::execSetMinMaxTargetArmLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinLength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinMaxTargetArmLength(Z_Param_MinLength,Z_Param_MaxLength);
	P_NATIVE_END;
}
// End Class UZoomSpringArmComponent Function SetMinMaxTargetArmLength

// Begin Class UZoomSpringArmComponent
void UZoomSpringArmComponent::StaticRegisterNativesUZoomSpringArmComponent()
{
	UClass* Class = UZoomSpringArmComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDesiredZoom", &UZoomSpringArmComponent::execSetDesiredZoom },
		{ "SetMinMaxTargetArmLength", &UZoomSpringArmComponent::execSetMinMaxTargetArmLength },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoomSpringArmComponent);
UClass* Z_Construct_UClass_UZoomSpringArmComponent_NoRegister()
{
	return UZoomSpringArmComponent::StaticClass();
}
struct Z_Construct_UClass_UZoomSpringArmComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ZoomSpringArmComponent.h" },
		{ "ModuleRelativePath", "Components/ZoomSpringArmComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZoomSpringArmComponent_SetDesiredZoom, "SetDesiredZoom" }, // 2019008446
		{ &Z_Construct_UFunction_UZoomSpringArmComponent_SetMinMaxTargetArmLength, "SetMinMaxTargetArmLength" }, // 4105743128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoomSpringArmComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UZoomSpringArmComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZoomSpringArmComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoomSpringArmComponent_Statics::ClassParams = {
	&UZoomSpringArmComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZoomSpringArmComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UZoomSpringArmComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UZoomSpringArmComponent()
{
	if (!Z_Registration_Info_UClass_UZoomSpringArmComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoomSpringArmComponent.OuterSingleton, Z_Construct_UClass_UZoomSpringArmComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZoomSpringArmComponent.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UZoomSpringArmComponent>()
{
	return UZoomSpringArmComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UZoomSpringArmComponent);
UZoomSpringArmComponent::~UZoomSpringArmComponent() {}
// End Class UZoomSpringArmComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_ZoomSpringArmComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZoomSpringArmComponent, UZoomSpringArmComponent::StaticClass, TEXT("UZoomSpringArmComponent"), &Z_Registration_Info_UClass_UZoomSpringArmComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoomSpringArmComponent), 1721273713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_ZoomSpringArmComponent_h_2989539242(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_ZoomSpringArmComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_ZoomSpringArmComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
