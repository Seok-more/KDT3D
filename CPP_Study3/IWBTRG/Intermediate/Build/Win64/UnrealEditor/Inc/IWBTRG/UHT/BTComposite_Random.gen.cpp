// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Node/BTComposite_Random.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_Random() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
IWBTRG_API UClass* Z_Construct_UClass_UBTComposite_Random();
IWBTRG_API UClass* Z_Construct_UClass_UBTComposite_Random_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UBTComposite_Random
void UBTComposite_Random::StaticRegisterNativesUBTComposite_Random()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTComposite_Random);
UClass* Z_Construct_UClass_UBTComposite_Random_NoRegister()
{
	return UBTComposite_Random::StaticClass();
}
struct Z_Construct_UClass_UBTComposite_Random_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Node/BTComposite_Random.h" },
		{ "ModuleRelativePath", "Node/BTComposite_Random.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTComposite_Random>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTComposite_Random_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_Random_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTComposite_Random_Statics::ClassParams = {
	&UBTComposite_Random::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_Random_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTComposite_Random_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTComposite_Random()
{
	if (!Z_Registration_Info_UClass_UBTComposite_Random.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTComposite_Random.OuterSingleton, Z_Construct_UClass_UBTComposite_Random_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTComposite_Random.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UBTComposite_Random>()
{
	return UBTComposite_Random::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_Random);
UBTComposite_Random::~UBTComposite_Random() {}
// End Class UBTComposite_Random

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTComposite_Random_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTComposite_Random, UBTComposite_Random::StaticClass, TEXT("UBTComposite_Random"), &Z_Registration_Info_UClass_UBTComposite_Random, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTComposite_Random), 1207972966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTComposite_Random_h_4114637815(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTComposite_Random_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTComposite_Random_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
