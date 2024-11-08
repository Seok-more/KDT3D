// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorSave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSave() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
IWBTRG_API UClass* Z_Construct_UClass_AActorBase();
IWBTRG_API UClass* Z_Construct_UClass_AActorSave();
IWBTRG_API UClass* Z_Construct_UClass_AActorSave_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AActorSave
void AActorSave::StaticRegisterNativesAActorSave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorSave);
UClass* Z_Construct_UClass_AActorSave_NoRegister()
{
	return AActorSave::StaticClass();
}
struct Z_Construct_UClass_AActorSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/ActorSave.h" },
		{ "ModuleRelativePath", "Actors/ActorSave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransfrom_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ActorSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTransfrom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorSave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActorSave_Statics::NewProp_PlayerTransfrom = { "PlayerTransfrom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorSave, PlayerTransfrom), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTransfrom_MetaData), NewProp_PlayerTransfrom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorSave_Statics::NewProp_PlayerTransfrom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorSave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorSave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorSave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorSave_Statics::ClassParams = {
	&AActorSave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActorSave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorSave_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorSave_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorSave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorSave()
{
	if (!Z_Registration_Info_UClass_AActorSave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorSave.OuterSingleton, Z_Construct_UClass_AActorSave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorSave.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorSave>()
{
	return AActorSave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorSave);
AActorSave::~AActorSave() {}
// End Class AActorSave

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorSave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorSave, AActorSave::StaticClass, TEXT("AActorSave"), &Z_Registration_Info_UClass_AActorSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorSave), 2841601840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorSave_h_3993549013(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorSave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
