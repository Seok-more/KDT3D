// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Pawn/PawnBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
IWBTRG_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_APawnBase();
IWBTRG_API UClass* Z_Construct_UClass_APawnBase_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FPawnBaseTableRow();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin ScriptStruct FPawnBaseTableRow
static_assert(std::is_polymorphic<FPawnBaseTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPawnBaseTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnBaseTableRow;
class UScriptStruct* FPawnBaseTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnBaseTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnBaseTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnBaseTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("PawnBaseTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_PawnBaseTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FPawnBaseTableRow>()
{
	return FPawnBaseTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimClass_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HittedMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DieMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
		{ "RowType", "/Script/IWBTRG.ProjectileTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionClass_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphereRadius_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxExtent_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsuleRadius_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsuleHalfHeight_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMaxSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement\n// No function\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement\nNo function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMID_MetaData[] = {
		{ "Category", "MID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MID\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDColor_temp_MetaData[] = {
		{ "Category", "MID" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFriendly_MetaData[] = {
		{ "Category", "Friendly" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Friendly\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Friendly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI\n" },
#endif
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HittedMontage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HittedMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DieMontage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DieMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Projectile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CollisionClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSphereRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionBoxExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionCapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionCapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementMaxSpeed;
	static void NewProp_bMID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MIDColor_temp;
	static void NewProp_bFriendly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFriendly;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AIControllerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnBaseTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawnBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_AnimClass = { "AnimClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, AnimClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimClass_MetaData), NewProp_AnimClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_ShotMontage = { "ShotMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, ShotMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotMontage_MetaData), NewProp_ShotMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_HittedMontage_Inner = { "HittedMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_HittedMontage = { "HittedMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, HittedMontage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HittedMontage_MetaData), NewProp_HittedMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_DieMontage_Inner = { "DieMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_DieMontage = { "DieMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, DieMontage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DieMontage_MetaData), NewProp_DieMontage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, Projectile), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Projectile_MetaData), NewProp_Projectile_MetaData) }; // 1360917958
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionClass = { "CollisionClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, CollisionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionClass_MetaData), NewProp_CollisionClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionSphereRadius = { "CollisionSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, CollisionSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphereRadius_MetaData), NewProp_CollisionSphereRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionBoxExtent = { "CollisionBoxExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, CollisionBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBoxExtent_MetaData), NewProp_CollisionBoxExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionCapsuleRadius = { "CollisionCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, CollisionCapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionCapsuleRadius_MetaData), NewProp_CollisionCapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionCapsuleHalfHeight = { "CollisionCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, CollisionCapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionCapsuleHalfHeight_MetaData), NewProp_CollisionCapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_MovementMaxSpeed = { "MovementMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, MovementMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMaxSpeed_MetaData), NewProp_MovementMaxSpeed_MetaData) };
void Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bMID_SetBit(void* Obj)
{
	((FPawnBaseTableRow*)Obj)->bMID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bMID = { "bMID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPawnBaseTableRow), &Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bMID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMID_MetaData), NewProp_bMID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_MIDColor_temp = { "MIDColor_temp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, MIDColor_temp), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDColor_temp_MetaData), NewProp_MIDColor_temp_MetaData) };
void Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bFriendly_SetBit(void* Obj)
{
	((FPawnBaseTableRow*)Obj)->bFriendly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bFriendly = { "bFriendly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPawnBaseTableRow), &Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bFriendly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFriendly_MetaData), NewProp_bFriendly_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_AIControllerClass = { "AIControllerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnBaseTableRow, AIControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIControllerClass_MetaData), NewProp_AIControllerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_AnimClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_ShotMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_HittedMontage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_HittedMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_DieMontage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_DieMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_Projectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionBoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionCapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_CollisionCapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_MovementMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_MIDColor_temp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_bFriendly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewProp_AIControllerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PawnBaseTableRow",
	Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::PropPointers),
	sizeof(FPawnBaseTableRow),
	alignof(FPawnBaseTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPawnBaseTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_PawnBaseTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnBaseTableRow.InnerSingleton, Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PawnBaseTableRow.InnerSingleton;
}
// End ScriptStruct FPawnBaseTableRow

// Begin Class APawnBase Function OnDie
struct Z_Construct_UFunction_APawnBase_OnDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawnBase_OnDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawnBase, nullptr, "OnDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APawnBase_OnDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_APawnBase_OnDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APawnBase_OnDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawnBase_OnDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APawnBase::execOnDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDie();
	P_NATIVE_END;
}
// End Class APawnBase Function OnDie

// Begin Class APawnBase
void APawnBase::StaticRegisterNativesAPawnBase()
{
	UClass* Class = APawnBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDie", &APawnBase::execOnDie },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APawnBase);
UClass* Z_Construct_UClass_APawnBase_NoRegister()
{
	return APawnBase::StaticClass();
}
struct Z_Construct_UClass_APawnBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ----------------------------------------------------------\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Pawn/PawnBase.h" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponent_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPWidgetComponent_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPathRef_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "Category", "PawnBase" },
		{ "ModuleRelativePath", "Actors/Pawn/PawnBase.h" },
		{ "RowType", "/Script/IWBTRG.PawnBaseTableRow" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPWidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPathRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APawnBase_OnDie, "OnDie" }, // 1268577970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, CollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_StatusComponent = { "StatusComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, StatusComponent), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponent_MetaData), NewProp_StatusComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_HPWidgetComponent = { "HPWidgetComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, HPWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPWidgetComponent_MetaData), NewProp_HPWidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_PatrolPathRef = { "PatrolPathRef", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, PatrolPathRef), Z_Construct_UClass_APatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPathRef_MetaData), NewProp_PatrolPathRef_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawnBase, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawnBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_DefaultSceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_StatusComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_HPWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_PatrolPathRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_DataTableRowHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APawnBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APawnBase_Statics::ClassParams = {
	&APawnBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APawnBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APawnBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APawnBase()
{
	if (!Z_Registration_Info_UClass_APawnBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APawnBase.OuterSingleton, Z_Construct_UClass_APawnBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APawnBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<APawnBase>()
{
	return APawnBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APawnBase);
APawnBase::~APawnBase() {}
// End Class APawnBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPawnBaseTableRow::StaticStruct, Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics::NewStructOps, TEXT("PawnBaseTableRow"), &Z_Registration_Info_UScriptStruct_PawnBaseTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnBaseTableRow), 3027991392U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APawnBase, APawnBase::StaticClass, TEXT("APawnBase"), &Z_Registration_Info_UClass_APawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APawnBase), 4152778179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_3577947942(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
