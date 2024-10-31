// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Pawn/Character/PlayerControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
IWBTRG_API UClass* Z_Construct_UClass_APlayerControllerBase();
IWBTRG_API UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class APlayerControllerBase
void APlayerControllerBase::StaticRegisterNativesAPlayerControllerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerControllerBase);
UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister()
{
	return APlayerControllerBase::StaticClass();
}
struct Z_Construct_UClass_APlayerControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Actors/Pawn/Character/PlayerControllerBase.h" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/PlayerControllerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/PlayerControllerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBase_Statics::NewProp_StatusComponent = { "StatusComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBase, StatusComponent), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponent_MetaData), NewProp_StatusComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBase_Statics::NewProp_StatusComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerBase_Statics::ClassParams = {
	&APlayerControllerBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerControllerBase()
{
	if (!Z_Registration_Info_UClass_APlayerControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerControllerBase.OuterSingleton, Z_Construct_UClass_APlayerControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerControllerBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<APlayerControllerBase>()
{
	return APlayerControllerBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerBase);
APlayerControllerBase::~APlayerControllerBase() {}
// End Class APlayerControllerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_PlayerControllerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerControllerBase, APlayerControllerBase::StaticClass, TEXT("APlayerControllerBase"), &Z_Registration_Info_UClass_APlayerControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerControllerBase), 2137847668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_PlayerControllerBase_h_857132700(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_PlayerControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_PlayerControllerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
