// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/AI/AIControllerSans.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerSans() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
IWBTRG_API UClass* Z_Construct_UClass_AAIControllerSans();
IWBTRG_API UClass* Z_Construct_UClass_AAIControllerSans_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AAIControllerSans
void AAIControllerSans::StaticRegisterNativesAAIControllerSans()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIControllerSans);
UClass* Z_Construct_UClass_AAIControllerSans_NoRegister()
{
	return AAIControllerSans::StaticClass();
}
struct Z_Construct_UClass_AAIControllerSans_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Actors/AI/AIControllerSans.h" },
		{ "ModuleRelativePath", "Actors/AI/AIControllerSans.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerSans>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIControllerSans_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerSans_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerSans_Statics::ClassParams = {
	&AAIControllerSans::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerSans_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIControllerSans_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIControllerSans()
{
	if (!Z_Registration_Info_UClass_AAIControllerSans.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIControllerSans.OuterSingleton, Z_Construct_UClass_AAIControllerSans_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIControllerSans.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AAIControllerSans>()
{
	return AAIControllerSans::StaticClass();
}
AAIControllerSans::AAIControllerSans(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerSans);
AAIControllerSans::~AAIControllerSans() {}
// End Class AAIControllerSans

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerSans_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIControllerSans, AAIControllerSans::StaticClass, TEXT("AAIControllerSans"), &Z_Registration_Info_UClass_AAIControllerSans, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIControllerSans), 299166602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerSans_h_665098243(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerSans_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerSans_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
