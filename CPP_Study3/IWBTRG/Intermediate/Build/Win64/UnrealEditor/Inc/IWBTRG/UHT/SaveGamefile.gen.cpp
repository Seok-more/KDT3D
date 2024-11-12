// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/System/SaveGamefile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGamefile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
IWBTRG_API UClass* Z_Construct_UClass_USaveGamefile();
IWBTRG_API UClass* Z_Construct_UClass_USaveGamefile_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class USaveGamefile
void USaveGamefile::StaticRegisterNativesUSaveGamefile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGamefile);
UClass* Z_Construct_UClass_USaveGamefile_NoRegister()
{
	return USaveGamefile::StaticClass();
}
struct Z_Construct_UClass_USaveGamefile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/SaveGamefile.h" },
		{ "ModuleRelativePath", "System/SaveGamefile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "System/SaveGamefile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelNameToSave_MetaData[] = {
		{ "ModuleRelativePath", "System/SaveGamefile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelNameToSave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGamefile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGamefile_Statics::NewProp_StatusComponent = { "StatusComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGamefile, StatusComponent), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponent_MetaData), NewProp_StatusComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGamefile_Statics::NewProp_LevelNameToSave = { "LevelNameToSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGamefile, LevelNameToSave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelNameToSave_MetaData), NewProp_LevelNameToSave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGamefile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGamefile_Statics::NewProp_StatusComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGamefile_Statics::NewProp_LevelNameToSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamefile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveGamefile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamefile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGamefile_Statics::ClassParams = {
	&USaveGamefile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveGamefile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamefile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamefile_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGamefile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGamefile()
{
	if (!Z_Registration_Info_UClass_USaveGamefile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGamefile.OuterSingleton, Z_Construct_UClass_USaveGamefile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGamefile.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<USaveGamefile>()
{
	return USaveGamefile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGamefile);
USaveGamefile::~USaveGamefile() {}
// End Class USaveGamefile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGamefile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGamefile, USaveGamefile::StaticClass, TEXT("USaveGamefile"), &Z_Registration_Info_UClass_USaveGamefile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGamefile), 3707984564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGamefile_h_3349611994(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGamefile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_SaveGamefile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
