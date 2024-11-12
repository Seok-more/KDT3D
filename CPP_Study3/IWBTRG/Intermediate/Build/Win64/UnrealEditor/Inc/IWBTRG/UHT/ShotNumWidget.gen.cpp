// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/UI/ShotNumWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotNumWidget() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_UShotNumWidget();
IWBTRG_API UClass* Z_Construct_UClass_UShotNumWidget_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UWidgetBase();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UShotNumWidget Function OnDie
struct Z_Construct_UFunction_UShotNumWidget_OnDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ShotNumWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotNumWidget_OnDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotNumWidget, nullptr, "OnDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShotNumWidget_OnDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShotNumWidget_OnDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UShotNumWidget_OnDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotNumWidget_OnDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShotNumWidget::execOnDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDie();
	P_NATIVE_END;
}
// End Class UShotNumWidget Function OnDie

// Begin Class UShotNumWidget Function OnHiddenUI
struct Z_Construct_UFunction_UShotNumWidget_OnHiddenUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ShotNumWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotNumWidget_OnHiddenUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotNumWidget, nullptr, "OnHiddenUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShotNumWidget_OnHiddenUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShotNumWidget_OnHiddenUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UShotNumWidget_OnHiddenUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotNumWidget_OnHiddenUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShotNumWidget::execOnHiddenUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHiddenUI();
	P_NATIVE_END;
}
// End Class UShotNumWidget Function OnHiddenUI

// Begin Class UShotNumWidget
void UShotNumWidget::StaticRegisterNativesUShotNumWidget()
{
	UClass* Class = UShotNumWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDie", &UShotNumWidget::execOnDie },
		{ "OnHiddenUI", &UShotNumWidget::execOnHiddenUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShotNumWidget);
UClass* Z_Construct_UClass_UShotNumWidget_NoRegister()
{
	return UShotNumWidget::StaticClass();
}
struct Z_Construct_UClass_UShotNumWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ShotNumWidget.h" },
		{ "ModuleRelativePath", "UI/ShotNumWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotNum_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShotNumWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ShotNumWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProjectileNum_MetaData[] = {
		{ "Category", "ShotNumWidget" },
		{ "ModuleRelativePath", "UI/ShotNumWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProjectileNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShotNumWidget_OnDie, "OnDie" }, // 819542174
		{ &Z_Construct_UFunction_UShotNumWidget_OnHiddenUI, "OnHiddenUI" }, // 1774382178
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShotNumWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShotNumWidget_Statics::NewProp_ShotNum = { "ShotNum", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShotNumWidget, ShotNum), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotNum_MetaData), NewProp_ShotNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShotNumWidget_Statics::NewProp_CurrentProjectileNum = { "CurrentProjectileNum", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShotNumWidget, CurrentProjectileNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProjectileNum_MetaData), NewProp_CurrentProjectileNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShotNumWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotNumWidget_Statics::NewProp_ShotNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotNumWidget_Statics::NewProp_CurrentProjectileNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShotNumWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShotNumWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShotNumWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShotNumWidget_Statics::ClassParams = {
	&UShotNumWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShotNumWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShotNumWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShotNumWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UShotNumWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShotNumWidget()
{
	if (!Z_Registration_Info_UClass_UShotNumWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShotNumWidget.OuterSingleton, Z_Construct_UClass_UShotNumWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShotNumWidget.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UShotNumWidget>()
{
	return UShotNumWidget::StaticClass();
}
UShotNumWidget::UShotNumWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShotNumWidget);
UShotNumWidget::~UShotNumWidget() {}
// End Class UShotNumWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_ShotNumWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShotNumWidget, UShotNumWidget::StaticClass, TEXT("UShotNumWidget"), &Z_Registration_Info_UClass_UShotNumWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShotNumWidget), 3663846152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_ShotNumWidget_h_2883955661(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_ShotNumWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_ShotNumWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
