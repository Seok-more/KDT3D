// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Pawn/Character/CharacterBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_ACharacterBase();
IWBTRG_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UZoomSpringArmComponent_NoRegister();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterBaseTableRow();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FPawnBaseTableRow();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin ScriptStruct FCharacterBaseTableRow
static_assert(std::is_polymorphic<FCharacterBaseTableRow>() == std::is_polymorphic<FPawnBaseTableRow>(), "USTRUCT FCharacterBaseTableRow cannot be polymorphic unless super FPawnBaseTableRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterBaseTableRow;
class UScriptStruct* FCharacterBaseTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterBaseTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterBaseTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterBaseTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("CharacterBaseTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterBaseTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FCharacterBaseTableRow>()
{
	return FCharacterBaseTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHeightHalf_MetaData[] = {
		{ "Category", "Collision|CapsuleComponent" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "Movement|MovementComponent" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "Movement|ovementComponent" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCrouch_MetaData[] = {
		{ "Category", "Movement|MovementComponent" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMCs_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IMC\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMC" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHeightHalf;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
	static void NewProp_bCanCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCrouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IMCs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterBaseTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_CapsuleHeightHalf = { "CapsuleHeightHalf", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseTableRow, CapsuleHeightHalf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHeightHalf_MetaData), NewProp_CapsuleHeightHalf_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseTableRow, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
void Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
{
	((FCharacterBaseTableRow*)Obj)->bOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterBaseTableRow), &Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientRotationToMovement_MetaData), NewProp_bOrientRotationToMovement_MetaData) };
void Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bCanCrouch_SetBit(void* Obj)
{
	((FCharacterBaseTableRow*)Obj)->bCanCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bCanCrouch = { "bCanCrouch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterBaseTableRow), &Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bCanCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCrouch_MetaData), NewProp_bCanCrouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_IMCs_Inner = { "IMCs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_IMCs = { "IMCs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseTableRow, IMCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMCs_MetaData), NewProp_IMCs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_CapsuleHeightHalf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_bCanCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_IMCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewProp_IMCs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FPawnBaseTableRow,
	&NewStructOps,
	"CharacterBaseTableRow",
	Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::PropPointers),
	sizeof(FCharacterBaseTableRow),
	alignof(FCharacterBaseTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterBaseTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterBaseTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterBaseTableRow.InnerSingleton, Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterBaseTableRow.InnerSingleton;
}
// End ScriptStruct FCharacterBaseTableRow

// Begin Class ACharacterBase
void ACharacterBase::StaticRegisterNativesACharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterBase);
UClass* Z_Construct_UClass_ACharacterBase_NoRegister()
{
	return ACharacterBase::StaticClass();
}
struct Z_Construct_UClass_ACharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Pawn/Character/CharacterBase.h" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponent_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "Actors/Pawn/Character/CharacterBase.h" },
		{ "RowType", "/Script/IWBTRG.CharacterBaseTableRow" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatusComponent = { "StatusComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, StatusComponent), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponent_MetaData), NewProp_StatusComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, SpringArm), Z_Construct_UClass_UZoomSpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatusComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DataTableRowHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterBase_Statics::ClassParams = {
	&ACharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterBase()
{
	if (!Z_Registration_Info_UClass_ACharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterBase.OuterSingleton, Z_Construct_UClass_ACharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<ACharacterBase>()
{
	return ACharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterBase);
ACharacterBase::~ACharacterBase() {}
// End Class ACharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_CharacterBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterBaseTableRow::StaticStruct, Z_Construct_UScriptStruct_FCharacterBaseTableRow_Statics::NewStructOps, TEXT("CharacterBaseTableRow"), &Z_Registration_Info_UScriptStruct_CharacterBaseTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterBaseTableRow), 4224931554U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterBase, ACharacterBase::StaticClass, TEXT("ACharacterBase"), &Z_Registration_Info_UClass_ACharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterBase), 3391627943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_CharacterBase_h_1912689579(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_CharacterBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_CharacterBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_Character_CharacterBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
