// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Pawn/PawnBossSans.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnBossSans() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
IWBTRG_API UClass* Z_Construct_UClass_AEnemy();
IWBTRG_API UClass* Z_Construct_UClass_APawnBossSans();
IWBTRG_API UClass* Z_Construct_UClass_APawnBossSans_NoRegister();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FPawnBaseTableRow();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FPawnBoss_SansTableRow();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin ScriptStruct FPawnBoss_SansTableRow
static_assert(std::is_polymorphic<FPawnBoss_SansTableRow>() == std::is_polymorphic<FPawnBaseTableRow>(), "USTRUCT FPawnBoss_SansTableRow cannot be polymorphic unless super FPawnBaseTableRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow;
class UScriptStruct* FPawnBoss_SansTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnBoss_SansTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("PawnBoss_SansTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FPawnBoss_SansTableRow>()
{
	return FPawnBoss_SansTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainSprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlastSprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "Bone" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
		{ "RowType", "/Script/IWBTRG.ActorBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlastEffect_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
		{ "RowType", "/Script/IWBTRG.EffectBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoomEffect_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
		{ "RowType", "/Script/IWBTRG.EffectBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlastSprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlastEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoomEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnBoss_SansTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_MainSprite = { "MainSprite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBoss_SansTableRow, MainSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainSprite_MetaData), NewProp_MainSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_BlastSprite = { "BlastSprite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBoss_SansTableRow, BlastSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlastSprite_MetaData), NewProp_BlastSprite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBoss_SansTableRow, Bone), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_BlastEffect = { "BlastEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBoss_SansTableRow, BlastEffect), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlastEffect_MetaData), NewProp_BlastEffect_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_BoomEffect = { "BoomEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBoss_SansTableRow, BoomEffect), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoomEffect_MetaData), NewProp_BoomEffect_MetaData) }; // 1360917958
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBoss_SansTableRow, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_MainSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_BlastSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_BlastEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_BoomEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewProp_MaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FPawnBaseTableRow,
	&NewStructOps,
	"PawnBoss_SansTableRow",
	Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::PropPointers),
	sizeof(FPawnBoss_SansTableRow),
	alignof(FPawnBoss_SansTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPawnBoss_SansTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow.InnerSingleton, Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow.InnerSingleton;
}
// End ScriptStruct FPawnBoss_SansTableRow

// Begin Class APawnBossSans
void APawnBossSans::StaticRegisterNativesAPawnBossSans()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APawnBossSans);
UClass* Z_Construct_UClass_APawnBossSans_NoRegister()
{
	return APawnBossSans::StaticClass();
}
struct Z_Construct_UClass_APawnBossSans_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Pawn/PawnBossSans.h" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainSpriteComponent_MetaData[] = {
		{ "Category", "PawnBossSans" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBossSans.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainSpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnBossSans>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBossSans_Statics::NewProp_MainSpriteComponent = { "MainSpriteComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBossSans, MainSpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainSpriteComponent_MetaData), NewProp_MainSpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawnBossSans_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBossSans_Statics::NewProp_MainSpriteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawnBossSans_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APawnBossSans_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawnBossSans_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APawnBossSans_Statics::ClassParams = {
	&APawnBossSans::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APawnBossSans_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APawnBossSans_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APawnBossSans_Statics::Class_MetaDataParams), Z_Construct_UClass_APawnBossSans_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APawnBossSans()
{
	if (!Z_Registration_Info_UClass_APawnBossSans.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APawnBossSans.OuterSingleton, Z_Construct_UClass_APawnBossSans_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APawnBossSans.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<APawnBossSans>()
{
	return APawnBossSans::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APawnBossSans);
APawnBossSans::~APawnBossSans() {}
// End Class APawnBossSans

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBossSans_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPawnBoss_SansTableRow::StaticStruct, Z_Construct_UScriptStruct_FPawnBoss_SansTableRow_Statics::NewStructOps, TEXT("PawnBoss_SansTableRow"), &Z_Registration_Info_UScriptStruct_PawnBoss_SansTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnBoss_SansTableRow), 3330118326U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APawnBossSans, APawnBossSans::StaticClass, TEXT("APawnBossSans"), &Z_Registration_Info_UClass_APawnBossSans, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APawnBossSans), 1861930018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBossSans_h_334506390(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBossSans_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBossSans_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBossSans_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBossSans_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
