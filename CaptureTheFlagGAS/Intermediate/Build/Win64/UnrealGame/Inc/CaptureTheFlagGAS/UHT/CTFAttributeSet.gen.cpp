// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/CTFAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFAttributeSet();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCTFAttributeSet Function OnRep_FlagSpeedMultiplier **********************
struct Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics
{
	struct CTFAttributeSet_eventOnRep_FlagSpeedMultiplier_Parms
	{
		FGameplayAttributeData OldFlagSpeedMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFlagSpeedMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFlagSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::NewProp_OldFlagSpeedMultiplier = { "OldFlagSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFAttributeSet_eventOnRep_FlagSpeedMultiplier_Parms, OldFlagSpeedMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFlagSpeedMultiplier_MetaData), NewProp_OldFlagSpeedMultiplier_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::NewProp_OldFlagSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFAttributeSet, nullptr, "OnRep_FlagSpeedMultiplier", Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::CTFAttributeSet_eventOnRep_FlagSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::CTFAttributeSet_eventOnRep_FlagSpeedMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFAttributeSet::execOnRep_FlagSpeedMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFlagSpeedMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FlagSpeedMultiplier(Z_Param_Out_OldFlagSpeedMultiplier);
	P_NATIVE_END;
}
// ********** End Class UCTFAttributeSet Function OnRep_FlagSpeedMultiplier ************************

// ********** Begin Class UCTFAttributeSet Function OnRep_Health ***********************************
struct Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics
{
	struct CTFAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFAttributeSet, nullptr, "OnRep_Health", Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::CTFAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::CTFAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// ********** End Class UCTFAttributeSet Function OnRep_Health *************************************

// ********** Begin Class UCTFAttributeSet Function OnRep_HealthRegenRate **************************
struct Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics
{
	struct CTFAttributeSet_eventOnRep_HealthRegenRate_Parms
	{
		FGameplayAttributeData OldHealthRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate = { "OldHealthRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFAttributeSet_eventOnRep_HealthRegenRate_Parms, OldHealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealthRegenRate_MetaData), NewProp_OldHealthRegenRate_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFAttributeSet, nullptr, "OnRep_HealthRegenRate", Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::CTFAttributeSet_eventOnRep_HealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::CTFAttributeSet_eventOnRep_HealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFAttributeSet::execOnRep_HealthRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldHealthRegenRate);
	P_NATIVE_END;
}
// ********** End Class UCTFAttributeSet Function OnRep_HealthRegenRate ****************************

// ********** Begin Class UCTFAttributeSet Function OnRep_MaxHealth ********************************
struct Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics
{
	struct CTFAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFAttributeSet, nullptr, "OnRep_MaxHealth", Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::CTFAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::CTFAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// ********** End Class UCTFAttributeSet Function OnRep_MaxHealth **********************************

// ********** Begin Class UCTFAttributeSet Function OnRep_MovementSpeed ****************************
struct Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics
{
	struct CTFAttributeSet_eventOnRep_MovementSpeed_Parms
	{
		FGameplayAttributeData OldMovementSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMovementSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldMovementSpeed = { "OldMovementSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFAttributeSet_eventOnRep_MovementSpeed_Parms, OldMovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMovementSpeed_MetaData), NewProp_OldMovementSpeed_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldMovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFAttributeSet, nullptr, "OnRep_MovementSpeed", Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::CTFAttributeSet_eventOnRep_MovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::CTFAttributeSet_eventOnRep_MovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFAttributeSet::execOnRep_MovementSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMovementSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MovementSpeed(Z_Param_Out_OldMovementSpeed);
	P_NATIVE_END;
}
// ********** End Class UCTFAttributeSet Function OnRep_MovementSpeed ******************************

// ********** Begin Class UCTFAttributeSet Function OnRep_MovementSpeedMultiplier ******************
struct Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics
{
	struct CTFAttributeSet_eventOnRep_MovementSpeedMultiplier_Parms
	{
		FGameplayAttributeData OldMovementSpeedMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMovementSpeedMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMovementSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::NewProp_OldMovementSpeedMultiplier = { "OldMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFAttributeSet_eventOnRep_MovementSpeedMultiplier_Parms, OldMovementSpeedMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMovementSpeedMultiplier_MetaData), NewProp_OldMovementSpeedMultiplier_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::NewProp_OldMovementSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFAttributeSet, nullptr, "OnRep_MovementSpeedMultiplier", Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::CTFAttributeSet_eventOnRep_MovementSpeedMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::CTFAttributeSet_eventOnRep_MovementSpeedMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFAttributeSet::execOnRep_MovementSpeedMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMovementSpeedMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MovementSpeedMultiplier(Z_Param_Out_OldMovementSpeedMultiplier);
	P_NATIVE_END;
}
// ********** End Class UCTFAttributeSet Function OnRep_MovementSpeedMultiplier ********************

// ********** Begin Class UCTFAttributeSet *********************************************************
void UCTFAttributeSet::StaticRegisterNativesUCTFAttributeSet()
{
	UClass* Class = UCTFAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_FlagSpeedMultiplier", &UCTFAttributeSet::execOnRep_FlagSpeedMultiplier },
		{ "OnRep_Health", &UCTFAttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegenRate", &UCTFAttributeSet::execOnRep_HealthRegenRate },
		{ "OnRep_MaxHealth", &UCTFAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MovementSpeed", &UCTFAttributeSet::execOnRep_MovementSpeed },
		{ "OnRep_MovementSpeedMultiplier", &UCTFAttributeSet::execOnRep_MovementSpeedMultiplier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCTFAttributeSet;
UClass* UCTFAttributeSet::GetPrivateStaticClass()
{
	using TClass = UCTFAttributeSet;
	if (!Z_Registration_Info_UClass_UCTFAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFAttributeSet"),
			Z_Registration_Info_UClass_UCTFAttributeSet.InnerSingleton,
			StaticRegisterNativesUCTFAttributeSet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCTFAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCTFAttributeSet_NoRegister()
{
	return UCTFAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCTFAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/CTFAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagSpeedMultiplier_MetaData[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage Attributes (Meta attributes - not replicated)\n" },
#endif
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Attributes (Meta attributes - not replicated)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[] = {
		{ "Category", "Healing" },
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/GAS/CTFAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeedMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlagSpeedMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCTFAttributeSet_OnRep_FlagSpeedMultiplier, "OnRep_FlagSpeedMultiplier" }, // 2725848976
		{ &Z_Construct_UFunction_UCTFAttributeSet_OnRep_Health, "OnRep_Health" }, // 2143350956
		{ &Z_Construct_UFunction_UCTFAttributeSet_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 617133276
		{ &Z_Construct_UFunction_UCTFAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2526803525
		{ &Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeed, "OnRep_MovementSpeed" }, // 2816211193
		{ &Z_Construct_UFunction_UCTFAttributeSet_OnRep_MovementSpeedMultiplier, "OnRep_MovementSpeedMultiplier" }, // 2960652674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCTFAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenRate_MetaData), NewProp_HealthRegenRate_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_MovementSpeed = { "MovementSpeed", "OnRep_MovementSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, MovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_MovementSpeedMultiplier = { "MovementSpeedMultiplier", "OnRep_MovementSpeedMultiplier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, MovementSpeedMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedMultiplier_MetaData), NewProp_MovementSpeedMultiplier_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_FlagSpeedMultiplier = { "FlagSpeedMultiplier", "OnRep_FlagSpeedMultiplier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, FlagSpeedMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagSpeedMultiplier_MetaData), NewProp_FlagSpeedMultiplier_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFAttributeSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCTFAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_HealthRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_MovementSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_FlagSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFAttributeSet_Statics::NewProp_Healing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCTFAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCTFAttributeSet_Statics::ClassParams = {
	&UCTFAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCTFAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCTFAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCTFAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCTFAttributeSet()
{
	if (!Z_Registration_Info_UClass_UCTFAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCTFAttributeSet.OuterSingleton, Z_Construct_UClass_UCTFAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCTFAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UCTFAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
	static FName Name_MovementSpeed(TEXT("MovementSpeed"));
	static FName Name_MovementSpeedMultiplier(TEXT("MovementSpeedMultiplier"));
	static FName Name_FlagSpeedMultiplier(TEXT("FlagSpeedMultiplier"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName()
		&& Name_MovementSpeed == ClassReps[(int32)ENetFields_Private::MovementSpeed].Property->GetFName()
		&& Name_MovementSpeedMultiplier == ClassReps[(int32)ENetFields_Private::MovementSpeedMultiplier].Property->GetFName()
		&& Name_FlagSpeedMultiplier == ClassReps[(int32)ENetFields_Private::FlagSpeedMultiplier].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCTFAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UCTFAttributeSet);
UCTFAttributeSet::~UCTFAttributeSet() {}
// ********** End Class UCTFAttributeSet ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCTFAttributeSet, UCTFAttributeSet::StaticClass, TEXT("UCTFAttributeSet"), &Z_Registration_Info_UClass_UCTFAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCTFAttributeSet), 3777641433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h__Script_CaptureTheFlagGAS_237625050(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
