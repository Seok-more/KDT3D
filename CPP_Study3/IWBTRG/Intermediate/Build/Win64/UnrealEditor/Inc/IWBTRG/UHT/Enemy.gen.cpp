// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Pawn/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_AEnemy();
IWBTRG_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_APawnBase();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AEnemy
void AEnemy::StaticRegisterNativesAEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
UClass* Z_Construct_UClass_AEnemy_NoRegister()
{
	return AEnemy::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Pawn/Enemy.h" },
		{ "ModuleRelativePath", "Actors/Pawn/Enemy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawnBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
	&AEnemy::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy()
{
	if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AEnemy>()
{
	return AEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
AEnemy::~AEnemy() {}
// End Class AEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 3484738344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Enemy_h_1031112172(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
