// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorEnemy() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_AActorBase();
IWBTRG_API UClass* Z_Construct_UClass_AActorEnemy();
IWBTRG_API UClass* Z_Construct_UClass_AActorEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AActorEnemy
void AActorEnemy::StaticRegisterNativesAActorEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorEnemy);
UClass* Z_Construct_UClass_AActorEnemy_NoRegister()
{
	return AActorEnemy::StaticClass();
}
struct Z_Construct_UClass_AActorEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/ActorEnemy.h" },
		{ "ModuleRelativePath", "Actors/ActorEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AActorEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorEnemy_Statics::ClassParams = {
	&AActorEnemy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorEnemy()
{
	if (!Z_Registration_Info_UClass_AActorEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorEnemy.OuterSingleton, Z_Construct_UClass_AActorEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorEnemy.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorEnemy>()
{
	return AActorEnemy::StaticClass();
}
AActorEnemy::AActorEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorEnemy);
AActorEnemy::~AActorEnemy() {}
// End Class AActorEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorEnemy, AActorEnemy::StaticClass, TEXT("AActorEnemy"), &Z_Registration_Info_UClass_AActorEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorEnemy), 1708711295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorEnemy_h_4131433757(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
