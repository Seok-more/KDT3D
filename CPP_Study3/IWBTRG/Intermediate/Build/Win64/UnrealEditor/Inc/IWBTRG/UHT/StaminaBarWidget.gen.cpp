// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/UI/StaminaBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaBarWidget() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_UStaminaBarWidget();
IWBTRG_API UClass* Z_Construct_UClass_UStaminaBarWidget_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UWidgetBase();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UStaminaBarWidget Function OnDie
struct Z_Construct_UFunction_UStaminaBarWidget_OnDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StaminaBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaBarWidget_OnDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaBarWidget, nullptr, "OnDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaBarWidget_OnDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaBarWidget_OnDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStaminaBarWidget_OnDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaBarWidget_OnDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaminaBarWidget::execOnDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDie();
	P_NATIVE_END;
}
// End Class UStaminaBarWidget Function OnDie

// Begin Class UStaminaBarWidget Function OnHiddenUI
struct Z_Construct_UFunction_UStaminaBarWidget_OnHiddenUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StaminaBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaBarWidget_OnHiddenUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaBarWidget, nullptr, "OnHiddenUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaBarWidget_OnHiddenUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaBarWidget_OnHiddenUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStaminaBarWidget_OnHiddenUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaBarWidget_OnHiddenUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaminaBarWidget::execOnHiddenUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHiddenUI();
	P_NATIVE_END;
}
// End Class UStaminaBarWidget Function OnHiddenUI

// Begin Class UStaminaBarWidget Function OnStaminaChanged
struct Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics
{
	struct StaminaBarWidget_eventOnStaminaChanged_Parms
	{
		float CurrentStamina;
		float MaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StaminaBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaBarWidget_eventOnStaminaChanged_Parms, CurrentStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaBarWidget_eventOnStaminaChanged_Parms, MaxStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaBarWidget, nullptr, "OnStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::StaminaBarWidget_eventOnStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::StaminaBarWidget_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaminaBarWidget::execOnStaminaChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentStamina);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStaminaChanged(Z_Param_CurrentStamina,Z_Param_MaxStamina);
	P_NATIVE_END;
}
// End Class UStaminaBarWidget Function OnStaminaChanged

// Begin Class UStaminaBarWidget
void UStaminaBarWidget::StaticRegisterNativesUStaminaBarWidget()
{
	UClass* Class = UStaminaBarWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDie", &UStaminaBarWidget::execOnDie },
		{ "OnHiddenUI", &UStaminaBarWidget::execOnHiddenUI },
		{ "OnStaminaChanged", &UStaminaBarWidget::execOnStaminaChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaBarWidget);
UClass* Z_Construct_UClass_UStaminaBarWidget_NoRegister()
{
	return UStaminaBarWidget::StaticClass();
}
struct Z_Construct_UClass_UStaminaBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/StaminaBarWidget.h" },
		{ "ModuleRelativePath", "UI/StaminaBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StaminaBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/StaminaBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBarEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StaminaBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/StaminaBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBarEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaminaBarWidget_OnDie, "OnDie" }, // 876183407
		{ &Z_Construct_UFunction_UStaminaBarWidget_OnHiddenUI, "OnHiddenUI" }, // 2837788184
		{ &Z_Construct_UFunction_UStaminaBarWidget_OnStaminaChanged, "OnStaminaChanged" }, // 3265510722
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaminaBarWidget_Statics::NewProp_StaminaBar = { "StaminaBar", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaBarWidget, StaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBar_MetaData), NewProp_StaminaBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaminaBarWidget_Statics::NewProp_StaminaBarEffect = { "StaminaBarEffect", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaBarWidget, StaminaBarEffect), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBarEffect_MetaData), NewProp_StaminaBarEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaBarWidget_Statics::NewProp_StaminaBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaBarWidget_Statics::NewProp_StaminaBarEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaminaBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaBarWidget_Statics::ClassParams = {
	&UStaminaBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStaminaBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaminaBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaminaBarWidget()
{
	if (!Z_Registration_Info_UClass_UStaminaBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaBarWidget.OuterSingleton, Z_Construct_UClass_UStaminaBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaminaBarWidget.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UStaminaBarWidget>()
{
	return UStaminaBarWidget::StaticClass();
}
UStaminaBarWidget::UStaminaBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaBarWidget);
UStaminaBarWidget::~UStaminaBarWidget() {}
// End Class UStaminaBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_StaminaBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaBarWidget, UStaminaBarWidget::StaticClass, TEXT("UStaminaBarWidget"), &Z_Registration_Info_UClass_UStaminaBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaBarWidget), 4040334400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_StaminaBarWidget_h_2116426128(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_StaminaBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_StaminaBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
