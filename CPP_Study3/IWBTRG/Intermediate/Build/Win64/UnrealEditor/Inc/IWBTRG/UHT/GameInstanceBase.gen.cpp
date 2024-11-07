// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/System/GameInstanceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UGameInstanceBase();
IWBTRG_API UClass* Z_Construct_UClass_UGameInstanceBase_NoRegister();
IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Delegate FOnTempSave
struct Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnTempSave__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWBTRG_OnTempSave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTempSave_DelegateWrapper(const FMulticastScriptDelegate& OnTempSave)
{
	OnTempSave.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTempSave

// Begin Class UGameInstanceBase
void UGameInstanceBase::StaticRegisterNativesUGameInstanceBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstanceBase);
UClass* Z_Construct_UClass_UGameInstanceBase_NoRegister()
{
	return UGameInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UGameInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/GameInstanceBase.h" },
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransformToSave_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Not Using yet\n" },
#endif
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not Using yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestToSave_MetaData[] = {
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotatorToLevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level Change\n" },
#endif
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level Change" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRotatorToLevel_MetaData[] = {
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromLevel_MetaData[] = {
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransformToTempSave_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TempSave\n" },
#endif
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TempSave" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelNameToTempSave_MetaData[] = {
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRotatorToTempSave_MetaData[] = {
		{ "ModuleRelativePath", "System/GameInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTransformToSave;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TestToSave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotatorToLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerRotatorToLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTransformToTempSave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentLevelNameToTempSave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerRotatorToTempSave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_PlayerTransformToSave = { "PlayerTransformToSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, PlayerTransformToSave), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTransformToSave_MetaData), NewProp_PlayerTransformToSave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_TestToSave = { "TestToSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, TestToSave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestToSave_MetaData), NewProp_TestToSave_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_PlayerRotatorToLevel = { "PlayerRotatorToLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, PlayerRotatorToLevel), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRotatorToLevel_MetaData), NewProp_PlayerRotatorToLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_ControllerRotatorToLevel = { "ControllerRotatorToLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, ControllerRotatorToLevel), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRotatorToLevel_MetaData), NewProp_ControllerRotatorToLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_FromLevel = { "FromLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, FromLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromLevel_MetaData), NewProp_FromLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_PlayerTransformToTempSave = { "PlayerTransformToTempSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, PlayerTransformToTempSave), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTransformToTempSave_MetaData), NewProp_PlayerTransformToTempSave_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_CurrentLevelNameToTempSave = { "CurrentLevelNameToTempSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, CurrentLevelNameToTempSave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelNameToTempSave_MetaData), NewProp_CurrentLevelNameToTempSave_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_ControllerRotatorToTempSave = { "ControllerRotatorToTempSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceBase, ControllerRotatorToTempSave), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRotatorToTempSave_MetaData), NewProp_ControllerRotatorToTempSave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstanceBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_PlayerTransformToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_TestToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_PlayerRotatorToLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_ControllerRotatorToLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_FromLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_PlayerTransformToTempSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_CurrentLevelNameToTempSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_ControllerRotatorToTempSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceBase_Statics::ClassParams = {
	&UGameInstanceBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameInstanceBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceBase_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInstanceBase()
{
	if (!Z_Registration_Info_UClass_UGameInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstanceBase.OuterSingleton, Z_Construct_UClass_UGameInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInstanceBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UGameInstanceBase>()
{
	return UGameInstanceBase::StaticClass();
}
UGameInstanceBase::UGameInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceBase);
UGameInstanceBase::~UGameInstanceBase() {}
// End Class UGameInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstanceBase, UGameInstanceBase::StaticClass, TEXT("UGameInstanceBase"), &Z_Registration_Info_UClass_UGameInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstanceBase), 1561734308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_183404090(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
