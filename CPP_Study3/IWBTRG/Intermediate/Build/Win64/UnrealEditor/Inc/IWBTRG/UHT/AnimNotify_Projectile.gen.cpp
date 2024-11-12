// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Animation/AnimNotify_Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Projectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
IWBTRG_API UClass* Z_Construct_UClass_UAnimNotify_Projectile();
IWBTRG_API UClass* Z_Construct_UClass_UAnimNotify_Projectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UAnimNotify_Projectile
void UAnimNotify_Projectile::StaticRegisterNativesUAnimNotify_Projectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Projectile);
UClass* Z_Construct_UClass_UAnimNotify_Projectile_NoRegister()
{
	return UAnimNotify_Projectile::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Projectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_Projectile.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_Projectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Projectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_Projectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Projectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Projectile_Statics::ClassParams = {
	&UAnimNotify_Projectile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Projectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Projectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Projectile()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Projectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Projectile.OuterSingleton, Z_Construct_UClass_UAnimNotify_Projectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Projectile.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UAnimNotify_Projectile>()
{
	return UAnimNotify_Projectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Projectile);
UAnimNotify_Projectile::~UAnimNotify_Projectile() {}
// End Class UAnimNotify_Projectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Projectile, UAnimNotify_Projectile::StaticClass, TEXT("UAnimNotify_Projectile"), &Z_Registration_Info_UClass_UAnimNotify_Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Projectile), 3465065172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_Projectile_h_1166645778(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
