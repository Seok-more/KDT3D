// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorItem_Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorItem_Projectile() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_AActorItem();
IWBTRG_API UClass* Z_Construct_UClass_AActorItem_Projectile();
IWBTRG_API UClass* Z_Construct_UClass_AActorItem_Projectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AActorItem_Projectile
void AActorItem_Projectile::StaticRegisterNativesAActorItem_Projectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorItem_Projectile);
UClass* Z_Construct_UClass_AActorItem_Projectile_NoRegister()
{
	return AActorItem_Projectile::StaticClass();
}
struct Z_Construct_UClass_AActorItem_Projectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/ActorItem_Projectile.h" },
		{ "ModuleRelativePath", "Actors/ActorItem_Projectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorItem_Projectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AActorItem_Projectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActorItem,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Projectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorItem_Projectile_Statics::ClassParams = {
	&AActorItem_Projectile::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Projectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorItem_Projectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorItem_Projectile()
{
	if (!Z_Registration_Info_UClass_AActorItem_Projectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorItem_Projectile.OuterSingleton, Z_Construct_UClass_AActorItem_Projectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorItem_Projectile.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorItem_Projectile>()
{
	return AActorItem_Projectile::StaticClass();
}
AActorItem_Projectile::AActorItem_Projectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorItem_Projectile);
AActorItem_Projectile::~AActorItem_Projectile() {}
// End Class AActorItem_Projectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorItem_Projectile, AActorItem_Projectile::StaticClass, TEXT("AActorItem_Projectile"), &Z_Registration_Info_UClass_AActorItem_Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorItem_Projectile), 2279457449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_Projectile_h_3864082019(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
