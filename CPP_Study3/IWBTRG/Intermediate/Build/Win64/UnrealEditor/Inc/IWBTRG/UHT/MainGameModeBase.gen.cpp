// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/System/MainGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IWBTRG_API UClass* Z_Construct_UClass_AMainGameModeBase();
IWBTRG_API UClass* Z_Construct_UClass_AMainGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AMainGameModeBase
void AMainGameModeBase::StaticRegisterNativesAMainGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameModeBase);
UClass* Z_Construct_UClass_AMainGameModeBase_NoRegister()
{
	return AMainGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AMainGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "System/MainGameModeBase.h" },
		{ "ModuleRelativePath", "System/MainGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameModeBase_Statics::ClassParams = {
	&AMainGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMainGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameModeBase.OuterSingleton, Z_Construct_UClass_AMainGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGameModeBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AMainGameModeBase>()
{
	return AMainGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameModeBase);
AMainGameModeBase::~AMainGameModeBase() {}
// End Class AMainGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameModeBase, AMainGameModeBase::StaticClass, TEXT("AMainGameModeBase"), &Z_Registration_Info_UClass_AMainGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameModeBase), 1260142979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameModeBase_h_2535237317(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_MainGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
