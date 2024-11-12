// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/PooledActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePooledActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
IWBTRG_API UClass* Z_Construct_UClass_APooledActor();
IWBTRG_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class APooledActor
void APooledActor::StaticRegisterNativesAPooledActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APooledActor);
UClass* Z_Construct_UClass_APooledActor_NoRegister()
{
	return APooledActor::StaticClass();
}
struct Z_Construct_UClass_APooledActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PooledActor.h" },
		{ "ModuleRelativePath", "Actors/PooledActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APooledActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APooledActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APooledActor_Statics::ClassParams = {
	&APooledActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APooledActor()
{
	if (!Z_Registration_Info_UClass_APooledActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APooledActor.OuterSingleton, Z_Construct_UClass_APooledActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APooledActor.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<APooledActor>()
{
	return APooledActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APooledActor);
APooledActor::~APooledActor() {}
// End Class APooledActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_PooledActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APooledActor, APooledActor::StaticClass, TEXT("APooledActor"), &Z_Registration_Info_UClass_APooledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APooledActor), 3538276565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_PooledActor_h_3917651227(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_PooledActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_PooledActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
