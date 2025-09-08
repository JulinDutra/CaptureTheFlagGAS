// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFramework/CTFPlayerState.h"
#include "Core/CTFTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFPlayerState() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFAttributeSet_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTeamChangedDelegate ************************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnTeamChangedDelegate_Parms
	{
		ETeam OldTeam;
		ETeam NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnTeamChangedDelegate_Parms, OldTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnTeamChangedDelegate_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnTeamChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnTeamChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnTeamChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTeamChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTeamChangedDelegate, ETeam OldTeam, ETeam NewTeam)
{
	struct _Script_CaptureTheFlagGAS_eventOnTeamChangedDelegate_Parms
	{
		ETeam OldTeam;
		ETeam NewTeam;
	};
	_Script_CaptureTheFlagGAS_eventOnTeamChangedDelegate_Parms Parms;
	Parms.OldTeam=OldTeam;
	Parms.NewTeam=NewTeam;
	OnTeamChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTeamChangedDelegate **************************************************

// ********** Begin Delegate FOnStatsChangedDelegate ***********************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnStatsChangedDelegate_Parms
	{
		FPlayerStats NewStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::NewProp_NewStats = { "NewStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnStatsChangedDelegate_Parms, NewStats), Z_Construct_UScriptStruct_FPlayerStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStats_MetaData), NewProp_NewStats_MetaData) }; // 2464396412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::NewProp_NewStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnStatsChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnStatsChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnStatsChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStatsChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStatsChangedDelegate, FPlayerStats const& NewStats)
{
	struct _Script_CaptureTheFlagGAS_eventOnStatsChangedDelegate_Parms
	{
		FPlayerStats NewStats;
	};
	_Script_CaptureTheFlagGAS_eventOnStatsChangedDelegate_Parms Parms;
	Parms.NewStats=NewStats;
	OnStatsChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStatsChangedDelegate *************************************************

// ********** Begin Delegate FOnFlagStatusChangedDelegate ******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagStatusChangedDelegate_Parms
	{
		bool bHasFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::NewProp_bHasFlag_SetBit(void* Obj)
{
	((_Script_CaptureTheFlagGAS_eventOnFlagStatusChangedDelegate_Parms*)Obj)->bHasFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::NewProp_bHasFlag = { "bHasFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CaptureTheFlagGAS_eventOnFlagStatusChangedDelegate_Parms), &Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::NewProp_bHasFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::NewProp_bHasFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnFlagStatusChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagStatusChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagStatusChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFlagStatusChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagStatusChangedDelegate, bool bHasFlag)
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagStatusChangedDelegate_Parms
	{
		bool bHasFlag;
	};
	_Script_CaptureTheFlagGAS_eventOnFlagStatusChangedDelegate_Parms Parms;
	Parms.bHasFlag=bHasFlag ? true : false;
	OnFlagStatusChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFlagStatusChangedDelegate ********************************************

// ********** Begin Class ACTFPlayerState Function AddCapture **************************************
struct Z_Construct_UFunction_ACTFPlayerState_AddCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_AddCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "AddCapture", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_AddCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_AddCapture_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_AddCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_AddCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execAddCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCapture();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function AddCapture ****************************************

// ********** Begin Class ACTFPlayerState Function AddDeath ****************************************
struct Z_Construct_UFunction_ACTFPlayerState_AddDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_AddDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "AddDeath", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_AddDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_AddDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_AddDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_AddDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execAddDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDeath();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function AddDeath ******************************************

// ********** Begin Class ACTFPlayerState Function AddFlagTime *************************************
struct Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics
{
	struct CTFPlayerState_eventAddFlagTime_Parms
	{
		float TimeWithFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWithFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::NewProp_TimeWithFlag = { "TimeWithFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventAddFlagTime_Parms, TimeWithFlag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::NewProp_TimeWithFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "AddFlagTime", Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::CTFPlayerState_eventAddFlagTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::CTFPlayerState_eventAddFlagTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_AddFlagTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_AddFlagTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execAddFlagTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeWithFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFlagTime(Z_Param_TimeWithFlag);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function AddFlagTime ***************************************

// ********** Begin Class ACTFPlayerState Function AddKill *****************************************
struct Z_Construct_UFunction_ACTFPlayerState_AddKill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_AddKill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "AddKill", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_AddKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_AddKill_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_AddKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_AddKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execAddKill)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddKill();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function AddKill *******************************************

// ********** Begin Class ACTFPlayerState Function AddReturn ***************************************
struct Z_Construct_UFunction_ACTFPlayerState_AddReturn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_AddReturn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "AddReturn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_AddReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_AddReturn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_AddReturn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_AddReturn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execAddReturn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddReturn();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function AddReturn *****************************************

// ********** Begin Class ACTFPlayerState Function CanRespawn **************************************
struct Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics
{
	struct CTFPlayerState_eventCanRespawn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerState_eventCanRespawn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerState_eventCanRespawn_Parms), &Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "CanRespawn", Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::CTFPlayerState_eventCanRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::CTFPlayerState_eventCanRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_CanRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_CanRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execCanRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRespawn();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function CanRespawn ****************************************

// ********** Begin Class ACTFPlayerState Function DropFlag ****************************************
struct Z_Construct_UFunction_ACTFPlayerState_DropFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_DropFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "DropFlag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_DropFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_DropFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_DropFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_DropFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execDropFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function DropFlag ******************************************

// ********** Begin Class ACTFPlayerState Function GetCarriedFlag **********************************
struct Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics
{
	struct CTFPlayerState_eventGetCarriedFlag_Parms
	{
		ACTFFlag* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetCarriedFlag_Parms, ReturnValue), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetCarriedFlag", Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::CTFPlayerState_eventGetCarriedFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::CTFPlayerState_eventGetCarriedFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetCarriedFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFFlag**)Z_Param__Result=P_THIS->GetCarriedFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetCarriedFlag ************************************

// ********** Begin Class ACTFPlayerState Function GetKillDeathRatio *******************************
struct Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics
{
	struct CTFPlayerState_eventGetKillDeathRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetKillDeathRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetKillDeathRatio", Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::CTFPlayerState_eventGetKillDeathRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::CTFPlayerState_eventGetKillDeathRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetKillDeathRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetKillDeathRatio();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetKillDeathRatio *********************************

// ********** Begin Class ACTFPlayerState Function GetRespawnCountdown *****************************
struct Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics
{
	struct CTFPlayerState_eventGetRespawnCountdown_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetRespawnCountdown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetRespawnCountdown", Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::CTFPlayerState_eventGetRespawnCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::CTFPlayerState_eventGetRespawnCountdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetRespawnCountdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRespawnCountdown();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetRespawnCountdown *******************************

// ********** Begin Class ACTFPlayerState Function GetRespawnTime **********************************
struct Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics
{
	struct CTFPlayerState_eventGetRespawnTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetRespawnTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetRespawnTime", Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::CTFPlayerState_eventGetRespawnTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::CTFPlayerState_eventGetRespawnTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetRespawnTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRespawnTime();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetRespawnTime ************************************

// ********** Begin Class ACTFPlayerState Function GetStats ****************************************
struct Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics
{
	struct CTFPlayerState_eventGetStats_Parms
	{
		FPlayerStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stats Management\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stats Management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2464396412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetStats", Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::CTFPlayerState_eventGetStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::CTFPlayerState_eventGetStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerStats*)Z_Param__Result=P_THIS->GetStats();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetStats ******************************************

// ********** Begin Class ACTFPlayerState Function GetTeam *****************************************
struct Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics
{
	struct CTFPlayerState_eventGetTeam_Parms
	{
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetTeam", Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::CTFPlayerState_eventGetTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::CTFPlayerState_eventGetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetTeam();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetTeam *******************************************

// ********** Begin Class ACTFPlayerState Function GetTeamColor ************************************
struct Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics
{
	struct CTFPlayerState_eventGetTeamColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetTeamColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetTeamColor", Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::CTFPlayerState_eventGetTeamColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::CTFPlayerState_eventGetTeamColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetTeamColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetTeamColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetTeamColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetTeamColor();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetTeamColor **************************************

// ********** Begin Class ACTFPlayerState Function GetTotalScore ***********************************
struct Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics
{
	struct CTFPlayerState_eventGetTotalScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventGetTotalScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "GetTotalScore", Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::CTFPlayerState_eventGetTotalScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::CTFPlayerState_eventGetTotalScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_GetTotalScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_GetTotalScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execGetTotalScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalScore();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function GetTotalScore *************************************

// ********** Begin Class ACTFPlayerState Function HandlePlayerDeath *******************************
struct Z_Construct_UFunction_ACTFPlayerState_HandlePlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CTF Rule Compliance - Auto drop flag on death\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CTF Rule Compliance - Auto drop flag on death" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_HandlePlayerDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "HandlePlayerDeath", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_HandlePlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_HandlePlayerDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_HandlePlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_HandlePlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execHandlePlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerDeath();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function HandlePlayerDeath *********************************

// ********** Begin Class ACTFPlayerState Function HasFlag *****************************************
struct Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics
{
	struct CTFPlayerState_eventHasFlag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerState_eventHasFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerState_eventHasFlag_Parms), &Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "HasFlag", Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::CTFPlayerState_eventHasFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::CTFPlayerState_eventHasFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_HasFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_HasFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execHasFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function HasFlag *******************************************

// ********** Begin Class ACTFPlayerState Function IsAlive *****************************************
struct Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics
{
	struct CTFPlayerState_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "IsAlive", Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::CTFPlayerState_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::CTFPlayerState_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function IsAlive *******************************************

// ********** Begin Class ACTFPlayerState Function IsEnemyOf ***************************************
struct Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics
{
	struct CTFPlayerState_eventIsEnemyOf_Parms
	{
		const ACTFPlayerState* OtherPlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::NewProp_OtherPlayer = { "OtherPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventIsEnemyOf_Parms, OtherPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPlayer_MetaData), NewProp_OtherPlayer_MetaData) };
void Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerState_eventIsEnemyOf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerState_eventIsEnemyOf_Parms), &Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::NewProp_OtherPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "IsEnemyOf", Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::CTFPlayerState_eventIsEnemyOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::CTFPlayerState_eventIsEnemyOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execIsEnemyOf)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_OtherPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnemyOf(Z_Param_OtherPlayer);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function IsEnemyOf *****************************************

// ********** Begin Class ACTFPlayerState Function IsOnSameTeam ************************************
struct Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics
{
	struct CTFPlayerState_eventIsOnSameTeam_Parms
	{
		const ACTFPlayerState* OtherPlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::NewProp_OtherPlayer = { "OtherPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventIsOnSameTeam_Parms, OtherPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPlayer_MetaData), NewProp_OtherPlayer_MetaData) };
void Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerState_eventIsOnSameTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerState_eventIsOnSameTeam_Parms), &Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::NewProp_OtherPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "IsOnSameTeam", Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::CTFPlayerState_eventIsOnSameTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::CTFPlayerState_eventIsOnSameTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execIsOnSameTeam)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_OtherPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnSameTeam(Z_Param_OtherPlayer);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function IsOnSameTeam **************************************

// ********** Begin Class ACTFPlayerState Function IsOnTeam ****************************************
struct Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics
{
	struct CTFPlayerState_eventIsOnTeam_Parms
	{
		ETeam Team;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventIsOnTeam_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
void Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerState_eventIsOnTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerState_eventIsOnTeam_Parms), &Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "IsOnTeam", Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::CTFPlayerState_eventIsOnTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::CTFPlayerState_eventIsOnTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_IsOnTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_IsOnTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execIsOnTeam)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnTeam(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function IsOnTeam ******************************************

// ********** Begin Class ACTFPlayerState Function OnPlayerKilled **********************************
struct Z_Construct_UFunction_ACTFPlayerState_OnPlayerKilled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_OnPlayerKilled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "OnPlayerKilled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_OnPlayerKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_OnPlayerKilled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_OnPlayerKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_OnPlayerKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execOnPlayerKilled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerKilled();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function OnPlayerKilled ************************************

// ********** Begin Class ACTFPlayerState Function OnPlayerRespawned *******************************
struct Z_Construct_UFunction_ACTFPlayerState_OnPlayerRespawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_OnPlayerRespawned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "OnPlayerRespawned", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_OnPlayerRespawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_OnPlayerRespawned_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_OnPlayerRespawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_OnPlayerRespawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execOnPlayerRespawned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerRespawned();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function OnPlayerRespawned *********************************

// ********** Begin Class ACTFPlayerState Function OnRep_CarriedFlag *******************************
struct Z_Construct_UFunction_ACTFPlayerState_OnRep_CarriedFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_OnRep_CarriedFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "OnRep_CarriedFlag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_OnRep_CarriedFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_OnRep_CarriedFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_OnRep_CarriedFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_OnRep_CarriedFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execOnRep_CarriedFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CarriedFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function OnRep_CarriedFlag *********************************

// ********** Begin Class ACTFPlayerState Function OnRep_RespawnTime *******************************
struct Z_Construct_UFunction_ACTFPlayerState_OnRep_RespawnTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_OnRep_RespawnTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "OnRep_RespawnTime", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_OnRep_RespawnTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_OnRep_RespawnTime_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_OnRep_RespawnTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_OnRep_RespawnTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execOnRep_RespawnTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RespawnTime();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function OnRep_RespawnTime *********************************

// ********** Begin Class ACTFPlayerState Function OnRep_Stats *************************************
struct Z_Construct_UFunction_ACTFPlayerState_OnRep_Stats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_OnRep_Stats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "OnRep_Stats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_OnRep_Stats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_OnRep_Stats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_OnRep_Stats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_OnRep_Stats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execOnRep_Stats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stats();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function OnRep_Stats ***************************************

// ********** Begin Class ACTFPlayerState Function OnRep_Team **************************************
struct Z_Construct_UFunction_ACTFPlayerState_OnRep_Team_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_OnRep_Team_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "OnRep_Team", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_OnRep_Team_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_OnRep_Team_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_OnRep_Team()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_OnRep_Team_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execOnRep_Team)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Team();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function OnRep_Team ****************************************

// ********** Begin Class ACTFPlayerState Function ResetStats **************************************
struct Z_Construct_UFunction_ACTFPlayerState_ResetStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_ResetStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "ResetStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_ResetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_ResetStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerState_ResetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_ResetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execResetStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetStats();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function ResetStats ****************************************

// ********** Begin Class ACTFPlayerState Function SetCarriedFlag **********************************
struct Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics
{
	struct CTFPlayerState_eventSetCarriedFlag_Parms
	{
		ACTFFlag* Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag Management\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventSetCarriedFlag_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "SetCarriedFlag", Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::CTFPlayerState_eventSetCarriedFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::CTFPlayerState_eventSetCarriedFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execSetCarriedFlag)
{
	P_GET_OBJECT(ACTFFlag,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCarriedFlag(Z_Param_Flag);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function SetCarriedFlag ************************************

// ********** Begin Class ACTFPlayerState Function SetRespawnTime **********************************
struct Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics
{
	struct CTFPlayerState_eventSetRespawnTime_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Respawn Management\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Respawn Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventSetRespawnTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "SetRespawnTime", Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::CTFPlayerState_eventSetRespawnTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::CTFPlayerState_eventSetRespawnTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execSetRespawnTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRespawnTime(Z_Param_Time);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function SetRespawnTime ************************************

// ********** Begin Class ACTFPlayerState Function SetTeam *****************************************
struct Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics
{
	struct CTFPlayerState_eventSetTeam_Parms
	{
		ETeam NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Team Management\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerState_eventSetTeam_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerState, nullptr, "SetTeam", Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::CTFPlayerState_eventSetTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::CTFPlayerState_eventSetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerState_SetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerState_SetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerState::execSetTeam)
{
	P_GET_ENUM(ETeam,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeam(ETeam(Z_Param_NewTeam));
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerState Function SetTeam *******************************************

// ********** Begin Class ACTFPlayerState **********************************************************
void ACTFPlayerState::StaticRegisterNativesACTFPlayerState()
{
	UClass* Class = ACTFPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCapture", &ACTFPlayerState::execAddCapture },
		{ "AddDeath", &ACTFPlayerState::execAddDeath },
		{ "AddFlagTime", &ACTFPlayerState::execAddFlagTime },
		{ "AddKill", &ACTFPlayerState::execAddKill },
		{ "AddReturn", &ACTFPlayerState::execAddReturn },
		{ "CanRespawn", &ACTFPlayerState::execCanRespawn },
		{ "DropFlag", &ACTFPlayerState::execDropFlag },
		{ "GetCarriedFlag", &ACTFPlayerState::execGetCarriedFlag },
		{ "GetKillDeathRatio", &ACTFPlayerState::execGetKillDeathRatio },
		{ "GetRespawnCountdown", &ACTFPlayerState::execGetRespawnCountdown },
		{ "GetRespawnTime", &ACTFPlayerState::execGetRespawnTime },
		{ "GetStats", &ACTFPlayerState::execGetStats },
		{ "GetTeam", &ACTFPlayerState::execGetTeam },
		{ "GetTeamColor", &ACTFPlayerState::execGetTeamColor },
		{ "GetTotalScore", &ACTFPlayerState::execGetTotalScore },
		{ "HandlePlayerDeath", &ACTFPlayerState::execHandlePlayerDeath },
		{ "HasFlag", &ACTFPlayerState::execHasFlag },
		{ "IsAlive", &ACTFPlayerState::execIsAlive },
		{ "IsEnemyOf", &ACTFPlayerState::execIsEnemyOf },
		{ "IsOnSameTeam", &ACTFPlayerState::execIsOnSameTeam },
		{ "IsOnTeam", &ACTFPlayerState::execIsOnTeam },
		{ "OnPlayerKilled", &ACTFPlayerState::execOnPlayerKilled },
		{ "OnPlayerRespawned", &ACTFPlayerState::execOnPlayerRespawned },
		{ "OnRep_CarriedFlag", &ACTFPlayerState::execOnRep_CarriedFlag },
		{ "OnRep_RespawnTime", &ACTFPlayerState::execOnRep_RespawnTime },
		{ "OnRep_Stats", &ACTFPlayerState::execOnRep_Stats },
		{ "OnRep_Team", &ACTFPlayerState::execOnRep_Team },
		{ "ResetStats", &ACTFPlayerState::execResetStats },
		{ "SetCarriedFlag", &ACTFPlayerState::execSetCarriedFlag },
		{ "SetRespawnTime", &ACTFPlayerState::execSetRespawnTime },
		{ "SetTeam", &ACTFPlayerState::execSetTeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACTFPlayerState;
UClass* ACTFPlayerState::GetPrivateStaticClass()
{
	using TClass = ACTFPlayerState;
	if (!Z_Registration_Info_UClass_ACTFPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFPlayerState"),
			Z_Registration_Info_UClass_ACTFPlayerState.InnerSingleton,
			StaticRegisterNativesACTFPlayerState,
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
	return Z_Registration_Info_UClass_ACTFPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister()
{
	return ACTFPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACTFPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/CTFPlayerState.h" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagStatusChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Ability System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability System Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Ability System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTeam_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedFlag_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagPickupTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal State\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTeam_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Track previous team for race condition fix\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Track previous team for race condition fix" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TeamChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StatsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FlagStatusChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTeam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedFlag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlagPickupTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACTFPlayerState_AddCapture, "AddCapture" }, // 1587642460
		{ &Z_Construct_UFunction_ACTFPlayerState_AddDeath, "AddDeath" }, // 3761696487
		{ &Z_Construct_UFunction_ACTFPlayerState_AddFlagTime, "AddFlagTime" }, // 1878369127
		{ &Z_Construct_UFunction_ACTFPlayerState_AddKill, "AddKill" }, // 582260054
		{ &Z_Construct_UFunction_ACTFPlayerState_AddReturn, "AddReturn" }, // 2176789438
		{ &Z_Construct_UFunction_ACTFPlayerState_CanRespawn, "CanRespawn" }, // 3815592105
		{ &Z_Construct_UFunction_ACTFPlayerState_DropFlag, "DropFlag" }, // 2990948948
		{ &Z_Construct_UFunction_ACTFPlayerState_GetCarriedFlag, "GetCarriedFlag" }, // 2574035458
		{ &Z_Construct_UFunction_ACTFPlayerState_GetKillDeathRatio, "GetKillDeathRatio" }, // 1194787690
		{ &Z_Construct_UFunction_ACTFPlayerState_GetRespawnCountdown, "GetRespawnCountdown" }, // 1532100660
		{ &Z_Construct_UFunction_ACTFPlayerState_GetRespawnTime, "GetRespawnTime" }, // 3418355025
		{ &Z_Construct_UFunction_ACTFPlayerState_GetStats, "GetStats" }, // 2310208042
		{ &Z_Construct_UFunction_ACTFPlayerState_GetTeam, "GetTeam" }, // 1550434951
		{ &Z_Construct_UFunction_ACTFPlayerState_GetTeamColor, "GetTeamColor" }, // 2432716745
		{ &Z_Construct_UFunction_ACTFPlayerState_GetTotalScore, "GetTotalScore" }, // 180100553
		{ &Z_Construct_UFunction_ACTFPlayerState_HandlePlayerDeath, "HandlePlayerDeath" }, // 1789918784
		{ &Z_Construct_UFunction_ACTFPlayerState_HasFlag, "HasFlag" }, // 3173806735
		{ &Z_Construct_UFunction_ACTFPlayerState_IsAlive, "IsAlive" }, // 211421728
		{ &Z_Construct_UFunction_ACTFPlayerState_IsEnemyOf, "IsEnemyOf" }, // 2337789292
		{ &Z_Construct_UFunction_ACTFPlayerState_IsOnSameTeam, "IsOnSameTeam" }, // 1817498371
		{ &Z_Construct_UFunction_ACTFPlayerState_IsOnTeam, "IsOnTeam" }, // 3637830455
		{ &Z_Construct_UFunction_ACTFPlayerState_OnPlayerKilled, "OnPlayerKilled" }, // 3392699770
		{ &Z_Construct_UFunction_ACTFPlayerState_OnPlayerRespawned, "OnPlayerRespawned" }, // 649265046
		{ &Z_Construct_UFunction_ACTFPlayerState_OnRep_CarriedFlag, "OnRep_CarriedFlag" }, // 2446541026
		{ &Z_Construct_UFunction_ACTFPlayerState_OnRep_RespawnTime, "OnRep_RespawnTime" }, // 3840099264
		{ &Z_Construct_UFunction_ACTFPlayerState_OnRep_Stats, "OnRep_Stats" }, // 1618838529
		{ &Z_Construct_UFunction_ACTFPlayerState_OnRep_Team, "OnRep_Team" }, // 4210604658
		{ &Z_Construct_UFunction_ACTFPlayerState_ResetStats, "ResetStats" }, // 2760223002
		{ &Z_Construct_UFunction_ACTFPlayerState_SetCarriedFlag, "SetCarriedFlag" }, // 3235135394
		{ &Z_Construct_UFunction_ACTFPlayerState_SetRespawnTime, "SetRespawnTime" }, // 1034925503
		{ &Z_Construct_UFunction_ACTFPlayerState_SetTeam, "SetTeam" }, // 2705535493
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACTFPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_TeamChanged = { "TeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, TeamChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnTeamChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamChanged_MetaData), NewProp_TeamChanged_MetaData) }; // 3895926641
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_StatsChanged = { "StatsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, StatsChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnStatsChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsChanged_MetaData), NewProp_StatsChanged_MetaData) }; // 2770600242
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_FlagStatusChanged = { "FlagStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, FlagStatusChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagStatusChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagStatusChanged_MetaData), NewProp_FlagStatusChanged_MetaData) }; // 3912214429
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, AttributeSet), Z_Construct_UClass_UCTFAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_CurrentTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_CurrentTeam = { "CurrentTeam", "OnRep_Team", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, CurrentTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTeam_MetaData), NewProp_CurrentTeam_MetaData) }; // 576107608
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_PlayerStats = { "PlayerStats", "OnRep_Stats", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, PlayerStats), Z_Construct_UScriptStruct_FPlayerStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStats_MetaData), NewProp_PlayerStats_MetaData) }; // 2464396412
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_CarriedFlag = { "CarriedFlag", "OnRep_CarriedFlag", (EPropertyFlags)0x0124080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, CarriedFlag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedFlag_MetaData), NewProp_CarriedFlag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_RespawnTime = { "RespawnTime", "OnRep_RespawnTime", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, RespawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTime_MetaData), NewProp_RespawnTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_FlagPickupTime = { "FlagPickupTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, FlagPickupTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagPickupTime_MetaData), NewProp_FlagPickupTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_PreviousTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_PreviousTeam = { "PreviousTeam", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerState, PreviousTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTeam_MetaData), NewProp_PreviousTeam_MetaData) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACTFPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_TeamChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_StatsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_FlagStatusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_CurrentTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_CurrentTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_PlayerStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_CarriedFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_RespawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_FlagPickupTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_PreviousTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerState_Statics::NewProp_PreviousTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACTFPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACTFPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACTFPlayerState, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACTFPlayerState_Statics::ClassParams = {
	&ACTFPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACTFPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACTFPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACTFPlayerState()
{
	if (!Z_Registration_Info_UClass_ACTFPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACTFPlayerState.OuterSingleton, Z_Construct_UClass_ACTFPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACTFPlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACTFPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentTeam(TEXT("CurrentTeam"));
	static FName Name_PlayerStats(TEXT("PlayerStats"));
	static FName Name_CarriedFlag(TEXT("CarriedFlag"));
	static FName Name_RespawnTime(TEXT("RespawnTime"));
	const bool bIsValid = true
		&& Name_CurrentTeam == ClassReps[(int32)ENetFields_Private::CurrentTeam].Property->GetFName()
		&& Name_PlayerStats == ClassReps[(int32)ENetFields_Private::PlayerStats].Property->GetFName()
		&& Name_CarriedFlag == ClassReps[(int32)ENetFields_Private::CarriedFlag].Property->GetFName()
		&& Name_RespawnTime == ClassReps[(int32)ENetFields_Private::RespawnTime].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACTFPlayerState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACTFPlayerState);
ACTFPlayerState::~ACTFPlayerState() {}
// ********** End Class ACTFPlayerState ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACTFPlayerState, ACTFPlayerState::StaticClass, TEXT("ACTFPlayerState"), &Z_Registration_Info_UClass_ACTFPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACTFPlayerState), 3473862226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h__Script_CaptureTheFlagGAS_487922276(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
