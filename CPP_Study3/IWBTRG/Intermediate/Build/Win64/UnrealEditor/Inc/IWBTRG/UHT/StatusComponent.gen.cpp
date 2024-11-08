// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Components/StatusComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature();
IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature();
IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature();
IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Delegate FOnHPChanged
struct Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics
{
	struct _Script_IWBTRG_eventOnHPChanged_Parms
	{
		float CurrentHP;
		float MaxHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IWBTRG_eventOnHPChanged_Parms, CurrentHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IWBTRG_eventOnHPChanged_Parms, MaxHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::NewProp_MaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnHPChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::_Script_IWBTRG_eventOnHPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::_Script_IWBTRG_eventOnHPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWBTRG_OnHPChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHPChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHPChanged, float CurrentHP, float MaxHP)
{
	struct _Script_IWBTRG_eventOnHPChanged_Parms
	{
		float CurrentHP;
		float MaxHP;
	};
	_Script_IWBTRG_eventOnHPChanged_Parms Parms;
	Parms.CurrentHP=CurrentHP;
	Parms.MaxHP=MaxHP;
	OnHPChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHPChanged

// Begin Delegate FOnStaminaChanged
struct Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics
{
	struct _Script_IWBTRG_eventOnStaminaChanged_Parms
	{
		float CurrentStamina;
		float MaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IWBTRG_eventOnStaminaChanged_Parms, CurrentStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IWBTRG_eventOnStaminaChanged_Parms, MaxStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnStaminaChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::_Script_IWBTRG_eventOnStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::_Script_IWBTRG_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWBTRG_OnStaminaChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float CurrentStamina, float MaxStamina)
{
	struct _Script_IWBTRG_eventOnStaminaChanged_Parms
	{
		float CurrentStamina;
		float MaxStamina;
	};
	_Script_IWBTRG_eventOnStaminaChanged_Parms Parms;
	Parms.CurrentStamina=CurrentStamina;
	Parms.MaxStamina=MaxStamina;
	OnStaminaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStaminaChanged

// Begin Delegate FOnShotChanged
struct Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics
{
	struct _Script_IWBTRG_eventOnShotChanged_Parms
	{
		int32 CurrentProjectileNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProjectileNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::NewProp_CurrentProjectileNum = { "CurrentProjectileNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IWBTRG_eventOnShotChanged_Parms, CurrentProjectileNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::NewProp_CurrentProjectileNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnShotChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::_Script_IWBTRG_eventOnShotChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::_Script_IWBTRG_eventOnShotChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWBTRG_OnShotChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnShotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnShotChanged, int32 CurrentProjectileNum)
{
	struct _Script_IWBTRG_eventOnShotChanged_Parms
	{
		int32 CurrentProjectileNum;
	};
	_Script_IWBTRG_eventOnShotChanged_Parms Parms;
	Parms.CurrentProjectileNum=CurrentProjectileNum;
	OnShotChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnShotChanged

// Begin Delegate FOnDie
struct Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnDie__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWBTRG_OnDie__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDie_DelegateWrapper(const FMulticastScriptDelegate& OnDie)
{
	OnDie.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDie

// Begin Class UStatusComponent
void UStatusComponent::StaticRegisterNativesUStatusComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusComponent);
UClass* Z_Construct_UClass_UStatusComponent_NoRegister()
{
	return UStatusComponent::StaticClass();
}
struct Z_Construct_UClass_UStatusComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StatusComponent.h" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAimming_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDie_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExhausted_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProjectileNum_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[] = {
		{ "ModuleRelativePath", "Components/StatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static void NewProp_bIsAimming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAimming;
	static void NewProp_bCanMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
	static void NewProp_bDie_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDie;
	static void NewProp_bExhausted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExhausted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProjectileNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
void Z_Construct_UClass_UStatusComponent_Statics::NewProp_bIsAimming_SetBit(void* Obj)
{
	((UStatusComponent*)Obj)->bIsAimming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_bIsAimming = { "bIsAimming", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatusComponent), &Z_Construct_UClass_UStatusComponent_Statics::NewProp_bIsAimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAimming_MetaData), NewProp_bIsAimming_MetaData) };
void Z_Construct_UClass_UStatusComponent_Statics::NewProp_bCanMove_SetBit(void* Obj)
{
	((UStatusComponent*)Obj)->bCanMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatusComponent), &Z_Construct_UClass_UStatusComponent_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanMove_MetaData), NewProp_bCanMove_MetaData) };
void Z_Construct_UClass_UStatusComponent_Statics::NewProp_bDie_SetBit(void* Obj)
{
	((UStatusComponent*)Obj)->bDie = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_bDie = { "bDie", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatusComponent), &Z_Construct_UClass_UStatusComponent_Statics::NewProp_bDie_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDie_MetaData), NewProp_bDie_MetaData) };
void Z_Construct_UClass_UStatusComponent_Statics::NewProp_bExhausted_SetBit(void* Obj)
{
	((UStatusComponent*)Obj)->bExhausted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_bExhausted = { "bExhausted", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatusComponent), &Z_Construct_UClass_UStatusComponent_Statics::NewProp_bExhausted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExhausted_MetaData), NewProp_bExhausted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentProjectileNum = { "CurrentProjectileNum", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, CurrentProjectileNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProjectileNum_MetaData), NewProp_CurrentProjectileNum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTransform_MetaData), NewProp_CurrentTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_bIsAimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_bCanMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_bDie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_bExhausted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentProjectileNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_CurrentTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatusComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusComponent_Statics::ClassParams = {
	&UStatusComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatusComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusComponent()
{
	if (!Z_Registration_Info_UClass_UStatusComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusComponent.OuterSingleton, Z_Construct_UClass_UStatusComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusComponent.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UStatusComponent>()
{
	return UStatusComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusComponent);
UStatusComponent::~UStatusComponent() {}
// End Class UStatusComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusComponent, UStatusComponent::StaticClass, TEXT("UStatusComponent"), &Z_Registration_Info_UClass_UStatusComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusComponent), 730978769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_1216126802(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
