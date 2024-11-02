// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorProjectile.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
IWBTRG_API UClass* Z_Construct_UClass_AActorProjectile();
IWBTRG_API UClass* Z_Construct_UClass_AActorProjectile_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_AEffectBase_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTableRow();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin ScriptStruct FProjectileTableRow
static_assert(std::is_polymorphic<FProjectileTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FProjectileTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectileTableRow;
class UScriptStruct* FProjectileTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectileTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("ProjectileTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectileTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FProjectileTableRow>()
{
	return FProjectileTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProjectileTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bStaticMesh" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileGravityScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLifeSpan_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform\n" },
#endif
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WithEffectTableRowHandle_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
		{ "RowType", "/Script/IWBTRG.EffectBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEffectTableRowHandle_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
		{ "RowType", "/Script/IWBTRG.EffectBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMID_MetaData[] = {
		{ "Category", "MID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MID\n" },
#endif
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDColor_temp_MetaData[] = {
		{ "Category", "MID" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileGravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialLifeSpan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WithEffectTableRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitEffectTableRowHandle;
	static void NewProp_bMID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MIDColor_temp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActorProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSpeed_MetaData), NewProp_InitialSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_ProjectileGravityScale = { "ProjectileGravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, ProjectileGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileGravityScale_MetaData), NewProp_ProjectileGravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_InitialLifeSpan = { "InitialLifeSpan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, InitialLifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLifeSpan_MetaData), NewProp_InitialLifeSpan_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_WithEffectTableRowHandle = { "WithEffectTableRowHandle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, WithEffectTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WithEffectTableRowHandle_MetaData), NewProp_WithEffectTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_HitEffectTableRowHandle = { "HitEffectTableRowHandle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, HitEffectTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEffectTableRowHandle_MetaData), NewProp_HitEffectTableRowHandle_MetaData) }; // 1360917958
void Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_bMID_SetBit(void* Obj)
{
	((FProjectileTableRow*)Obj)->bMID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_bMID = { "bMID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileTableRow), &Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_bMID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMID_MetaData), NewProp_bMID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_MIDColor_temp = { "MIDColor_temp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTableRow, MIDColor_temp), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDColor_temp_MetaData), NewProp_MIDColor_temp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_InitialSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_ProjectileGravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_InitialLifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_WithEffectTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_HitEffectTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_bMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewProp_MIDColor_temp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ProjectileTableRow",
	Z_Construct_UScriptStruct_FProjectileTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTableRow_Statics::PropPointers),
	sizeof(FProjectileTableRow),
	alignof(FProjectileTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectileTableRow.InnerSingleton, Z_Construct_UScriptStruct_FProjectileTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProjectileTableRow.InnerSingleton;
}
// End ScriptStruct FProjectileTableRow

// Begin Class AActorProjectile Function OnMeshBeginOverlap
struct Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics
{
	struct ActorProjectile_eventOnMeshBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorProjectile_eventOnMeshBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorProjectile_eventOnMeshBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorProjectile_eventOnMeshBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorProjectile_eventOnMeshBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ActorProjectile_eventOnMeshBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorProjectile_eventOnMeshBeginOverlap_Parms), &Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorProjectile_eventOnMeshBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorProjectile, nullptr, "OnMeshBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::ActorProjectile_eventOnMeshBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::ActorProjectile_eventOnMeshBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActorProjectile::execOnMeshBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeshBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AActorProjectile Function OnMeshBeginOverlap

// Begin Class AActorProjectile
void AActorProjectile::StaticRegisterNativesAActorProjectile()
{
	UClass* Class = AActorProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMeshBeginOverlap", &AActorProjectile::execOnMeshBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorProjectile);
UClass* Z_Construct_UClass_AActorProjectile_NoRegister()
{
	return AActorProjectile::StaticClass();
}
struct Z_Construct_UClass_AActorProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ActorProjectile.h" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "ActorProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponent_MetaData[] = {
		{ "Category", "ActorProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WithEffect_MetaData[] = {
		{ "Category", "ActorProjectile" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "ActorProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "Category", "ActorProjectile" },
		{ "ModuleRelativePath", "Actors/ActorProjectile.h" },
		{ "RowType", "/Script/IWBTRG.FProjectileTableRow" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WithEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorProjectile_OnMeshBeginOverlap, "OnMeshBeginOverlap" }, // 457552232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorProjectile_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorProjectile, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorProjectile_Statics::NewProp_StatusComponent = { "StatusComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorProjectile, StatusComponent), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponent_MetaData), NewProp_StatusComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorProjectile_Statics::NewProp_WithEffect = { "WithEffect", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorProjectile, WithEffect), Z_Construct_UClass_AEffectBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WithEffect_MetaData), NewProp_WithEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActorProjectile_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorProjectile, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorProjectile_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorProjectile_Statics::NewProp_StatusComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorProjectile_Statics::NewProp_WithEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorProjectile_Statics::NewProp_ProjectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorProjectile_Statics::NewProp_DataTableRowHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorProjectile_Statics::ClassParams = {
	&AActorProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AActorProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorProjectile()
{
	if (!Z_Registration_Info_UClass_AActorProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorProjectile.OuterSingleton, Z_Construct_UClass_AActorProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorProjectile.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorProjectile>()
{
	return AActorProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorProjectile);
AActorProjectile::~AActorProjectile() {}
// End Class AActorProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileTableRow::StaticStruct, Z_Construct_UScriptStruct_FProjectileTableRow_Statics::NewStructOps, TEXT("ProjectileTableRow"), &Z_Registration_Info_UScriptStruct_ProjectileTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileTableRow), 867664657U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorProjectile, AActorProjectile::StaticClass, TEXT("AActorProjectile"), &Z_Registration_Info_UClass_AActorProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorProjectile), 2592016934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_961980310(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
