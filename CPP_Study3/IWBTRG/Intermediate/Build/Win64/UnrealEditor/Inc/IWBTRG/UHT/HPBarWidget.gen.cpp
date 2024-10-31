// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/UI/HPBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPBarWidget() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_UHPBarWidget();
IWBTRG_API UClass* Z_Construct_UClass_UHPBarWidget_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UWidgetBase();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UHPBarWidget Function OnDie
struct Z_Construct_UFunction_UHPBarWidget_OnDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HPBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPBarWidget_OnDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPBarWidget, nullptr, "OnDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPBarWidget_OnDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPBarWidget_OnDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHPBarWidget_OnDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPBarWidget_OnDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPBarWidget::execOnDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDie();
	P_NATIVE_END;
}
// End Class UHPBarWidget Function OnDie

// Begin Class UHPBarWidget Function OnHiddenUI
struct Z_Construct_UFunction_UHPBarWidget_OnHiddenUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HPBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPBarWidget_OnHiddenUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPBarWidget, nullptr, "OnHiddenUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPBarWidget_OnHiddenUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPBarWidget_OnHiddenUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHPBarWidget_OnHiddenUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPBarWidget_OnHiddenUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPBarWidget::execOnHiddenUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHiddenUI();
	P_NATIVE_END;
}
// End Class UHPBarWidget Function OnHiddenUI

// Begin Class UHPBarWidget Function OnHPChanged
struct Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics
{
	struct HPBarWidget_eventOnHPChanged_Parms
	{
		float CurrentHP;
		float MaxHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HPBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPBarWidget_eventOnHPChanged_Parms, CurrentHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPBarWidget_eventOnHPChanged_Parms, MaxHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::NewProp_MaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPBarWidget, nullptr, "OnHPChanged", nullptr, nullptr, Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::HPBarWidget_eventOnHPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::HPBarWidget_eventOnHPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHPBarWidget_OnHPChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPBarWidget_OnHPChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPBarWidget::execOnHPChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHP);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHPChanged(Z_Param_CurrentHP,Z_Param_MaxHP);
	P_NATIVE_END;
}
// End Class UHPBarWidget Function OnHPChanged

// Begin Class UHPBarWidget
void UHPBarWidget::StaticRegisterNativesUHPBarWidget()
{
	UClass* Class = UHPBarWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDie", &UHPBarWidget::execOnDie },
		{ "OnHiddenUI", &UHPBarWidget::execOnHiddenUI },
		{ "OnHPChanged", &UHPBarWidget::execOnHPChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHPBarWidget);
UClass* Z_Construct_UClass_UHPBarWidget_NoRegister()
{
	return UHPBarWidget::StaticClass();
}
struct Z_Construct_UClass_UHPBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/HPBarWidget.h" },
		{ "ModuleRelativePath", "UI/HPBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HPBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HPBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPBarEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HPBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HPBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBarEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHPBarWidget_OnDie, "OnDie" }, // 1294678921
		{ &Z_Construct_UFunction_UHPBarWidget_OnHiddenUI, "OnHiddenUI" }, // 3921639758
		{ &Z_Construct_UFunction_UHPBarWidget_OnHPChanged, "OnHPChanged" }, // 2525870474
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHPBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHPBarWidget_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHPBarWidget, HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPBar_MetaData), NewProp_HPBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHPBarWidget_Statics::NewProp_HPBarEffect = { "HPBarEffect", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHPBarWidget, HPBarEffect), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPBarEffect_MetaData), NewProp_HPBarEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHPBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPBarWidget_Statics::NewProp_HPBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPBarWidget_Statics::NewProp_HPBarEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHPBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHPBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHPBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHPBarWidget_Statics::ClassParams = {
	&UHPBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHPBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHPBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHPBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHPBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHPBarWidget()
{
	if (!Z_Registration_Info_UClass_UHPBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHPBarWidget.OuterSingleton, Z_Construct_UClass_UHPBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHPBarWidget.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UHPBarWidget>()
{
	return UHPBarWidget::StaticClass();
}
UHPBarWidget::UHPBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHPBarWidget);
UHPBarWidget::~UHPBarWidget() {}
// End Class UHPBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHPBarWidget, UHPBarWidget::StaticClass, TEXT("UHPBarWidget"), &Z_Registration_Info_UClass_UHPBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHPBarWidget), 667990922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_1633755178(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
