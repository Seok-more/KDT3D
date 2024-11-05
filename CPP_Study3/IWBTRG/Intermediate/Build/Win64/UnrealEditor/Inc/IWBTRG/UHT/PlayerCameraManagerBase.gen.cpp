// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/System/PlayerCameraManagerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraManagerBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
IWBTRG_API UClass* Z_Construct_UClass_APlayerCameraManagerBase();
IWBTRG_API UClass* Z_Construct_UClass_APlayerCameraManagerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class APlayerCameraManagerBase
void APlayerCameraManagerBase::StaticRegisterNativesAPlayerCameraManagerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCameraManagerBase);
UClass* Z_Construct_UClass_APlayerCameraManagerBase_NoRegister()
{
	return APlayerCameraManagerBase::StaticClass();
}
struct Z_Construct_UClass_APlayerCameraManagerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/PlayerCameraManagerBase.h" },
		{ "ModuleRelativePath", "System/PlayerCameraManagerBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraManagerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerCameraManagerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManagerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraManagerBase_Statics::ClassParams = {
	&APlayerCameraManagerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManagerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCameraManagerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCameraManagerBase()
{
	if (!Z_Registration_Info_UClass_APlayerCameraManagerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCameraManagerBase.OuterSingleton, Z_Construct_UClass_APlayerCameraManagerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCameraManagerBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<APlayerCameraManagerBase>()
{
	return APlayerCameraManagerBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraManagerBase);
APlayerCameraManagerBase::~APlayerCameraManagerBase() {}
// End Class APlayerCameraManagerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_PlayerCameraManagerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCameraManagerBase, APlayerCameraManagerBase::StaticClass, TEXT("APlayerCameraManagerBase"), &Z_Registration_Info_UClass_APlayerCameraManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCameraManagerBase), 3724184982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_PlayerCameraManagerBase_h_2040494151(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_PlayerCameraManagerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_PlayerCameraManagerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
