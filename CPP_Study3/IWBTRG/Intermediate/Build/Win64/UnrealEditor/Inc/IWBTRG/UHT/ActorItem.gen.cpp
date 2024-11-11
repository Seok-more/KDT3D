// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorItem() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_AActorBase();
IWBTRG_API UClass* Z_Construct_UClass_AActorItem();
IWBTRG_API UClass* Z_Construct_UClass_AActorItem_NoRegister();
IWBTRG_API UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FActorBaseTableRow();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FActorItemTableRow();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Delegate FOnUsed
struct Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ActorItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IWBTRG, nullptr, "OnUsed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IWBTRG_OnUsed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUsed_DelegateWrapper(const FMulticastScriptDelegate& OnUsed)
{
	OnUsed.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUsed

// Begin ScriptStruct FActorItemTableRow
static_assert(std::is_polymorphic<FActorItemTableRow>() == std::is_polymorphic<FActorBaseTableRow>(), "USTRUCT FActorItemTableRow cannot be polymorphic unless super FActorBaseTableRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorItemTableRow;
class UScriptStruct* FActorItemTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorItemTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorItemTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorItemTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("ActorItemTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_ActorItemTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FActorItemTableRow>()
{
	return FActorItemTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorItemTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ActorItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uses_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Actors/ActorItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Uses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorItemTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorItemTableRow_Statics::NewProp_Uses = { "Uses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorItemTableRow, Uses), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uses_MetaData), NewProp_Uses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorItemTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorItemTableRow_Statics::NewProp_Uses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorItemTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorItemTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FActorBaseTableRow,
	&NewStructOps,
	"ActorItemTableRow",
	Z_Construct_UScriptStruct_FActorItemTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorItemTableRow_Statics::PropPointers),
	sizeof(FActorItemTableRow),
	alignof(FActorItemTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorItemTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorItemTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorItemTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_ActorItemTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorItemTableRow.InnerSingleton, Z_Construct_UScriptStruct_FActorItemTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorItemTableRow.InnerSingleton;
}
// End ScriptStruct FActorItemTableRow

// Begin Class AActorItem Function Used
struct Z_Construct_UFunction_AActorItem_Used_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ActorItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorItem_Used_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorItem, nullptr, "Used", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActorItem_Used_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActorItem_Used_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActorItem_Used()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorItem_Used_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActorItem::execUsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Used();
	P_NATIVE_END;
}
// End Class AActorItem Function Used

// Begin Class AActorItem
void AActorItem::StaticRegisterNativesAActorItem()
{
	UClass* Class = AActorItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Used", &AActorItem::execUsed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorItem);
UClass* Z_Construct_UClass_AActorItem_NoRegister()
{
	return AActorItem::StaticClass();
}
struct Z_Construct_UClass_AActorItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ActorItem.h" },
		{ "ModuleRelativePath", "Actors/ActorItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uses_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Actors/ActorItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Uses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorItem_Used, "Used" }, // 1326121249
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActorItem_Statics::NewProp_Uses = { "Uses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorItem, Uses), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uses_MetaData), NewProp_Uses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorItem_Statics::NewProp_Uses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorItem_Statics::ClassParams = {
	&AActorItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AActorItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorItem()
{
	if (!Z_Registration_Info_UClass_AActorItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorItem.OuterSingleton, Z_Construct_UClass_AActorItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorItem.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorItem>()
{
	return AActorItem::StaticClass();
}
AActorItem::AActorItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorItem);
AActorItem::~AActorItem() {}
// End Class AActorItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorItemTableRow::StaticStruct, Z_Construct_UScriptStruct_FActorItemTableRow_Statics::NewStructOps, TEXT("ActorItemTableRow"), &Z_Registration_Info_UScriptStruct_ActorItemTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorItemTableRow), 3040675897U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorItem, AActorItem::StaticClass, TEXT("AActorItem"), &Z_Registration_Info_UClass_AActorItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorItem), 2864500847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_3377181245(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
