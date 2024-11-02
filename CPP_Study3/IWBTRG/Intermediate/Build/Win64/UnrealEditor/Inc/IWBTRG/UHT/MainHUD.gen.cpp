// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/System/MainHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
IWBTRG_API UClass* Z_Construct_UClass_AMainHUD();
IWBTRG_API UClass* Z_Construct_UClass_AMainHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AMainHUD
void AMainHUD::StaticRegisterNativesAMainHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainHUD);
UClass* Z_Construct_UClass_AMainHUD_NoRegister()
{
	return AMainHUD::StaticClass();
}
struct Z_Construct_UClass_AMainHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "System/MainHUD.h" },
		{ "ModuleRelativePath", "System/MainHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainHUD_Statics::ClassParams = {
	&AMainHUD::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainHUD()
{
	if (!Z_Registration_Info_UClass_AMainHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainHUD.OuterSingleton, Z_Construct_UClass_AMainHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainHUD.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AMainHUD>()
{
	return AMainHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainHUD);
AMainHUD::~AMainHUD() {}
// End Class AMainHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_System_MainHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainHUD, AMainHUD::StaticClass, TEXT("AMainHUD"), &Z_Registration_Info_UClass_AMainHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainHUD), 3048342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_System_MainHUD_h_377143673(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_System_MainHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_System_MainHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
