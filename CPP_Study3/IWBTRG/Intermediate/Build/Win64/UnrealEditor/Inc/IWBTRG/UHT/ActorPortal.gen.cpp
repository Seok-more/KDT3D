// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorPortal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPortal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_AActorBase();
IWBTRG_API UClass* Z_Construct_UClass_AActorPortal();
IWBTRG_API UClass* Z_Construct_UClass_AActorPortal_NoRegister();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FActorBaseTableRow();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FActorPortalTableRow();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin ScriptStruct FActorPortalTableRow
static_assert(std::is_polymorphic<FActorPortalTableRow>() == std::is_polymorphic<FActorBaseTableRow>(), "USTRUCT FActorPortalTableRow cannot be polymorphic unless super FActorBaseTableRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorPortalTableRow;
class UScriptStruct* FActorPortalTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPortalTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorPortalTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPortalTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("ActorPortalTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_ActorPortalTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FActorPortalTableRow>()
{
	return FActorPortalTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorPortalTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Actors/ActorPortal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Actors/ActorPortal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ToLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPortalTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::NewProp_ToLevel = { "ToLevel", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPortalTableRow, ToLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToLevel_MetaData), NewProp_ToLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::NewProp_ToLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FActorBaseTableRow,
	&NewStructOps,
	"ActorPortalTableRow",
	Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::PropPointers),
	sizeof(FActorPortalTableRow),
	alignof(FActorPortalTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorPortalTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPortalTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorPortalTableRow.InnerSingleton, Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorPortalTableRow.InnerSingleton;
}
// End ScriptStruct FActorPortalTableRow

// Begin Class AActorPortal
void AActorPortal::StaticRegisterNativesAActorPortal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorPortal);
UClass* Z_Construct_UClass_AActorPortal_NoRegister()
{
	return AActorPortal::StaticClass();
}
struct Z_Construct_UClass_AActorPortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ActorPortal.h" },
		{ "ModuleRelativePath", "Actors/ActorPortal.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToLevel_MetaData[] = {
		{ "Category", "ActorPortal" },
		{ "ModuleRelativePath", "Actors/ActorPortal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ToLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorPortal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AActorPortal_Statics::NewProp_ToLevel = { "ToLevel", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorPortal, ToLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToLevel_MetaData), NewProp_ToLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorPortal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPortal_Statics::NewProp_ToLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPortal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorPortal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPortal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorPortal_Statics::ClassParams = {
	&AActorPortal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActorPortal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorPortal_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPortal_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorPortal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorPortal()
{
	if (!Z_Registration_Info_UClass_AActorPortal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorPortal.OuterSingleton, Z_Construct_UClass_AActorPortal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorPortal.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorPortal>()
{
	return AActorPortal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorPortal);
AActorPortal::~AActorPortal() {}
// End Class AActorPortal

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorPortal_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorPortalTableRow::StaticStruct, Z_Construct_UScriptStruct_FActorPortalTableRow_Statics::NewStructOps, TEXT("ActorPortalTableRow"), &Z_Registration_Info_UScriptStruct_ActorPortalTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPortalTableRow), 2839276094U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorPortal, AActorPortal::StaticClass, TEXT("AActorPortal"), &Z_Registration_Info_UClass_AActorPortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorPortal), 429131967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorPortal_h_4257486575(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorPortal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorPortal_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorPortal_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorPortal_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
