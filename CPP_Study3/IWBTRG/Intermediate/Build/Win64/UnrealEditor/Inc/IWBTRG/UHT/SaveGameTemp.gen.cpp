// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/System/SaveGameTemp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameTemp() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
IWBTRG_API UClass* Z_Construct_UClass_USaveGameTemp();
IWBTRG_API UClass* Z_Construct_UClass_USaveGameTemp_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class USaveGameTemp
void USaveGameTemp::StaticRegisterNativesUSaveGameTemp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameTemp);
UClass* Z_Construct_UClass_USaveGameTemp_NoRegister()
{
	return USaveGameTemp::StaticClass();
}
struct Z_Construct_UClass_USaveGameTemp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/SaveGameTemp.h" },
		{ "ModuleRelativePath", "System/SaveGameTemp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "System/SaveGameTemp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransform_MetaData[] = {
		{ "ModuleRelativePath", "System/SaveGameTemp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "ModuleRelativePath", "System/SaveGameTemp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Test;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameTemp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameTemp_Statics::NewProp_StatusComponent = { "StatusComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameTemp, StatusComponent), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponent_MetaData), NewProp_StatusComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameTemp_Statics::NewProp_PlayerTransform = { "PlayerTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameTemp, PlayerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTransform_MetaData), NewProp_PlayerTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameTemp_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameTemp, Test), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameTemp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameTemp_Statics::NewProp_StatusComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameTemp_Statics::NewProp_PlayerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameTemp_Statics::NewProp_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameTemp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveGameTemp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameTemp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameTemp_Statics::ClassParams = {
	&USaveGameTemp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveGameTemp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameTemp_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameTemp_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameTemp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameTemp()
{
	if (!Z_Registration_Info_UClass_USaveGameTemp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameTemp.OuterSingleton, Z_Construct_UClass_USaveGameTemp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameTemp.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<USaveGameTemp>()
{
	return USaveGameTemp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameTemp);
USaveGameTemp::~USaveGameTemp() {}
// End Class USaveGameTemp

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGameTemp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameTemp, USaveGameTemp::StaticClass, TEXT("USaveGameTemp"), &Z_Registration_Info_UClass_USaveGameTemp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameTemp), 396327767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGameTemp_h_3192981161(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGameTemp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGameTemp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
