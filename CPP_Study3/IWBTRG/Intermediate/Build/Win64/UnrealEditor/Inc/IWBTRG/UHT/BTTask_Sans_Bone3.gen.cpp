// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Node/BTTask_Sans_Bone3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Sans_Bone3() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Sans_Bone2();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Sans_Bone3();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Sans_Bone3_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UBTTask_Sans_Bone3
void UBTTask_Sans_Bone3::StaticRegisterNativesUBTTask_Sans_Bone3()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Sans_Bone3);
UClass* Z_Construct_UClass_UBTTask_Sans_Bone3_NoRegister()
{
	return UBTTask_Sans_Bone3::StaticClass();
}
struct Z_Construct_UClass_UBTTask_Sans_Bone3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Node/BTTask_Sans_Bone3.h" },
		{ "ModuleRelativePath", "Node/BTTask_Sans_Bone3.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Sans_Bone3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_Sans_Bone3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_Sans_Bone2,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Sans_Bone3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Sans_Bone3_Statics::ClassParams = {
	&UBTTask_Sans_Bone3::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Sans_Bone3_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Sans_Bone3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_Sans_Bone3()
{
	if (!Z_Registration_Info_UClass_UBTTask_Sans_Bone3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Sans_Bone3.OuterSingleton, Z_Construct_UClass_UBTTask_Sans_Bone3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_Sans_Bone3.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UBTTask_Sans_Bone3>()
{
	return UBTTask_Sans_Bone3::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Sans_Bone3);
UBTTask_Sans_Bone3::~UBTTask_Sans_Bone3() {}
// End Class UBTTask_Sans_Bone3

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone3_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Sans_Bone3, UBTTask_Sans_Bone3::StaticClass, TEXT("UBTTask_Sans_Bone3"), &Z_Registration_Info_UClass_UBTTask_Sans_Bone3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Sans_Bone3), 304187470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone3_h_1446856817(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Sans_Bone3_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
