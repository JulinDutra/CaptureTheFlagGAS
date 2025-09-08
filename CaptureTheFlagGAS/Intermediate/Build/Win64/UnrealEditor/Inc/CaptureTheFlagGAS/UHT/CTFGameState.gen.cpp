// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFramework/CTFGameState.h"
#include "Core/CTFTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFGameState() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameConfig();
CAPTURETHEFLAGGAS_API UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnScoreChangedDelegate ***********************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnScoreChangedDelegate_Parms
	{
		ETeam Team;
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnScoreChangedDelegate_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnScoreChangedDelegate_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnScoreChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnScoreChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnScoreChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScoreChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnScoreChangedDelegate, ETeam Team, int32 NewScore)
{
	struct _Script_CaptureTheFlagGAS_eventOnScoreChangedDelegate_Parms
	{
		ETeam Team;
		int32 NewScore;
	};
	_Script_CaptureTheFlagGAS_eventOnScoreChangedDelegate_Parms Parms;
	Parms.Team=Team;
	Parms.NewScore=NewScore;
	OnScoreChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnScoreChangedDelegate *************************************************

// ********** Begin Delegate FOnGamePhaseChangedDelegate *******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnGamePhaseChangedDelegate_Parms
	{
		EGamePhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnGamePhaseChangedDelegate_Parms, NewPhase), Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase, METADATA_PARAMS(0, nullptr) }; // 1253027156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnGamePhaseChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnGamePhaseChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnGamePhaseChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGamePhaseChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGamePhaseChangedDelegate, EGamePhase NewPhase)
{
	struct _Script_CaptureTheFlagGAS_eventOnGamePhaseChangedDelegate_Parms
	{
		EGamePhase NewPhase;
	};
	_Script_CaptureTheFlagGAS_eventOnGamePhaseChangedDelegate_Parms Parms;
	Parms.NewPhase=NewPhase;
	OnGamePhaseChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGamePhaseChangedDelegate *********************************************

// ********** Begin Delegate FOnFlagCapturedDelegate ***********************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms
	{
		ETeam CapturingTeam;
		ACTFPlayerState* CapturingPlayer;
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturingPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam = { "CapturingTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms, CapturingTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingPlayer = { "CapturingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms, CapturingPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnFlagCapturedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFlagCapturedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagCapturedDelegate, ETeam CapturingTeam, ACTFPlayerState* CapturingPlayer, int32 NewScore)
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms
	{
		ETeam CapturingTeam;
		ACTFPlayerState* CapturingPlayer;
		int32 NewScore;
	};
	_Script_CaptureTheFlagGAS_eventOnFlagCapturedDelegate_Parms Parms;
	Parms.CapturingTeam=CapturingTeam;
	Parms.CapturingPlayer=CapturingPlayer;
	Parms.NewScore=NewScore;
	OnFlagCapturedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFlagCapturedDelegate *************************************************

// ********** Begin Delegate FOnFlagDroppedDelegate ************************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagDroppedDelegate_Parms
	{
		ACTFPlayerState* DroppingPlayer;
		FVector DropLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroppingPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::NewProp_DroppingPlayer = { "DroppingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnFlagDroppedDelegate_Parms, DroppingPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnFlagDroppedDelegate_Parms, DropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::NewProp_DroppingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::NewProp_DropLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnFlagDroppedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagDroppedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagDroppedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFlagDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagDroppedDelegate, ACTFPlayerState* DroppingPlayer, FVector DropLocation)
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagDroppedDelegate_Parms
	{
		ACTFPlayerState* DroppingPlayer;
		FVector DropLocation;
	};
	_Script_CaptureTheFlagGAS_eventOnFlagDroppedDelegate_Parms Parms;
	Parms.DroppingPlayer=DroppingPlayer;
	Parms.DropLocation=DropLocation;
	OnFlagDroppedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFlagDroppedDelegate **************************************************

// ********** Begin Delegate FOnFlagReturnedDelegate ***********************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagReturnedDelegate_Parms
	{
		ETeam Team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnFlagReturnedDelegate_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnFlagReturnedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagReturnedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnFlagReturnedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFlagReturnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagReturnedDelegate, ETeam Team)
{
	struct _Script_CaptureTheFlagGAS_eventOnFlagReturnedDelegate_Parms
	{
		ETeam Team;
	};
	_Script_CaptureTheFlagGAS_eventOnFlagReturnedDelegate_Parms Parms;
	Parms.Team=Team;
	OnFlagReturnedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFlagReturnedDelegate *************************************************

// ********** Begin Class ACTFGameState Function AddTeamScore **************************************
struct Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics
{
	struct CTFGameState_eventAddTeamScore_Parms
	{
		ETeam Team;
		int32 ScoreToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "CPP_Default_ScoreToAdd", "1" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventAddTeamScore_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::NewProp_ScoreToAdd = { "ScoreToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventAddTeamScore_Parms, ScoreToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::NewProp_ScoreToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "AddTeamScore", Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::CTFGameState_eventAddTeamScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::CTFGameState_eventAddTeamScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_AddTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_AddTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execAddTeamScore)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_GET_PROPERTY(FIntProperty,Z_Param_ScoreToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTeamScore(ETeam(Z_Param_Team),Z_Param_ScoreToAdd);
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function AddTeamScore ****************************************

// ********** Begin Class ACTFGameState Function CanJoinTeam ***************************************
struct Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics
{
	struct CTFGameState_eventCanJoinTeam_Parms
	{
		ETeam Team;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventCanJoinTeam_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
void Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFGameState_eventCanJoinTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFGameState_eventCanJoinTeam_Parms), &Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "CanJoinTeam", Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::CTFGameState_eventCanJoinTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::CTFGameState_eventCanJoinTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_CanJoinTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_CanJoinTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execCanJoinTeam)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanJoinTeam(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function CanJoinTeam *****************************************

// ********** Begin Class ACTFGameState Function CheckForMatchEnd **********************************
struct Z_Construct_UFunction_ACTFGameState_CheckForMatchEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_CheckForMatchEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "CheckForMatchEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_CheckForMatchEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_CheckForMatchEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFGameState_CheckForMatchEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_CheckForMatchEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execCheckForMatchEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckForMatchEnd();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function CheckForMatchEnd ************************************

// ********** Begin Class ACTFGameState Function GetAllFlags ***************************************
struct Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics
{
	struct CTFGameState_eventGetAllFlags_Parms
	{
		TArray<ACTFFlag*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetAllFlags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetAllFlags", Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::CTFGameState_eventGetAllFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::CTFGameState_eventGetAllFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetAllFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetAllFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetAllFlags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ACTFFlag*>*)Z_Param__Result=P_THIS->GetAllFlags();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetAllFlags *****************************************

// ********** Begin Class ACTFGameState Function GetFlag *******************************************
struct Z_Construct_UFunction_ACTFGameState_GetFlag_Statics
{
	struct CTFGameState_eventGetFlag_Parms
	{
		ACTFFlag* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetFlag_Parms, ReturnValue), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetFlag", Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::CTFGameState_eventGetFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::CTFGameState_eventGetFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFFlag**)Z_Param__Result=P_THIS->GetFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetFlag *********************************************

// ********** Begin Class ACTFGameState Function GetGameConfig *************************************
struct Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics
{
	struct CTFGameState_eventGetGameConfig_Parms
	{
		FGameConfig ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Configuration" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetGameConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3624988173
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetGameConfig", Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::CTFGameState_eventGetGameConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::CTFGameState_eventGetGameConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetGameConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetGameConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetGameConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameConfig*)Z_Param__Result=P_THIS->GetGameConfig();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetGameConfig ***************************************

// ********** Begin Class ACTFGameState Function GetGamePhase **************************************
struct Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics
{
	struct CTFGameState_eventGetGamePhase_Parms
	{
		EGamePhase ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetGamePhase_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase, METADATA_PARAMS(0, nullptr) }; // 1253027156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetGamePhase", Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::CTFGameState_eventGetGamePhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::CTFGameState_eventGetGamePhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetGamePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGamePhase*)Z_Param__Result=P_THIS->GetGamePhase();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetGamePhase ****************************************

// ********** Begin Class ACTFGameState Function GetPlayersOnTeam **********************************
struct Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics
{
	struct CTFGameState_eventGetPlayersOnTeam_Parms
	{
		ETeam Team;
		TArray<ACTFPlayerState*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetPlayersOnTeam_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetPlayersOnTeam_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetPlayersOnTeam", Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::CTFGameState_eventGetPlayersOnTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::CTFGameState_eventGetPlayersOnTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetPlayersOnTeam)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ACTFPlayerState*>*)Z_Param__Result=P_THIS->GetPlayersOnTeam(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetPlayersOnTeam ************************************

// ********** Begin Class ACTFGameState Function GetRemainingTime **********************************
struct Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics
{
	struct CTFGameState_eventGetRemainingTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetRemainingTime", Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::CTFGameState_eventGetRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::CTFGameState_eventGetRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetRemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRemainingTime();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetRemainingTime ************************************

// ********** Begin Class ACTFGameState Function GetSmallestTeam ***********************************
struct Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics
{
	struct CTFGameState_eventGetSmallestTeam_Parms
	{
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetSmallestTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetSmallestTeam", Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::CTFGameState_eventGetSmallestTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::CTFGameState_eventGetSmallestTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetSmallestTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetSmallestTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetSmallestTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetSmallestTeam();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetSmallestTeam *************************************

// ********** Begin Class ACTFGameState Function GetTeamFlag ***************************************
struct Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics
{
	struct CTFGameState_eventGetTeamFlag_Parms
	{
		ETeam Team;
		ACTFFlag* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamFlag_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamFlag_Parms, ReturnValue), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetTeamFlag", Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::CTFGameState_eventGetTeamFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::CTFGameState_eventGetTeamFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetTeamFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetTeamFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetTeamFlag)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFFlag**)Z_Param__Result=P_THIS->GetTeamFlag(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetTeamFlag *****************************************

// ********** Begin Class ACTFGameState Function GetTeamInfo ***************************************
struct Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics
{
	struct CTFGameState_eventGetTeamInfo_Parms
	{
		ETeam Team;
		FTeamInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Team Management\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team Management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamInfo_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1693386140
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetTeamInfo", Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::CTFGameState_eventGetTeamInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::CTFGameState_eventGetTeamInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetTeamInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetTeamInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetTeamInfo)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTeamInfo*)Z_Param__Result=P_THIS->GetTeamInfo(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetTeamInfo *****************************************

// ********** Begin Class ACTFGameState Function GetTeamPlayerCount ********************************
struct Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics
{
	struct CTFGameState_eventGetTeamPlayerCount_Parms
	{
		ETeam Team;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamPlayerCount_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamPlayerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetTeamPlayerCount", Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::CTFGameState_eventGetTeamPlayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::CTFGameState_eventGetTeamPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetTeamPlayerCount)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTeamPlayerCount(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetTeamPlayerCount **********************************

// ********** Begin Class ACTFGameState Function GetTeamScore **************************************
struct Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics
{
	struct CTFGameState_eventGetTeamScore_Parms
	{
		ETeam Team;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamScore_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetTeamScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetTeamScore", Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::CTFGameState_eventGetTeamScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::CTFGameState_eventGetTeamScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetTeamScore)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTeamScore(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetTeamScore ****************************************

// ********** Begin Class ACTFGameState Function GetWinningTeam ************************************
struct Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics
{
	struct CTFGameState_eventGetWinningTeam_Parms
	{
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventGetWinningTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "GetWinningTeam", Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::CTFGameState_eventGetWinningTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::CTFGameState_eventGetWinningTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_GetWinningTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_GetWinningTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execGetWinningTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetWinningTeam();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function GetWinningTeam **************************************

// ********** Begin Class ACTFGameState Function IsMatchInProgress *********************************
struct Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics
{
	struct CTFGameState_eventIsMatchInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFGameState_eventIsMatchInProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFGameState_eventIsMatchInProgress_Parms), &Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "IsMatchInProgress", Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::CTFGameState_eventIsMatchInProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::CTFGameState_eventIsMatchInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_IsMatchInProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_IsMatchInProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execIsMatchInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMatchInProgress();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function IsMatchInProgress ***********************************

// ********** Begin Class ACTFGameState Function IsTeamWinning *************************************
struct Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics
{
	struct CTFGameState_eventIsTeamWinning_Parms
	{
		ETeam Team;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventIsTeamWinning_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
void Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFGameState_eventIsTeamWinning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFGameState_eventIsTeamWinning_Parms), &Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "IsTeamWinning", Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::CTFGameState_eventIsTeamWinning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::CTFGameState_eventIsTeamWinning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_IsTeamWinning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_IsTeamWinning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execIsTeamWinning)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTeamWinning(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function IsTeamWinning ***************************************

// ********** Begin Class ACTFGameState Function OnFlagCaptured ************************************
struct Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics
{
	struct CTFGameState_eventOnFlagCaptured_Parms
	{
		ETeam CapturingTeam;
		ACTFPlayerState* CapturingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game Events\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::NewProp_CapturingTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::NewProp_CapturingTeam = { "CapturingTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventOnFlagCaptured_Parms, CapturingTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::NewProp_CapturingPlayer = { "CapturingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventOnFlagCaptured_Parms, CapturingPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::NewProp_CapturingTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::NewProp_CapturingTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::NewProp_CapturingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "OnFlagCaptured", Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::CTFGameState_eventOnFlagCaptured_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::CTFGameState_eventOnFlagCaptured_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_OnFlagCaptured()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_OnFlagCaptured_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execOnFlagCaptured)
{
	P_GET_ENUM(ETeam,Z_Param_CapturingTeam);
	P_GET_OBJECT(ACTFPlayerState,Z_Param_CapturingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlagCaptured(ETeam(Z_Param_CapturingTeam),Z_Param_CapturingPlayer);
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function OnFlagCaptured **************************************

// ********** Begin Class ACTFGameState Function OnFlagDropped *************************************
struct Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics
{
	struct CTFGameState_eventOnFlagDropped_Parms
	{
		ACTFPlayerState* DroppingPlayer;
		FVector DropLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroppingPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::NewProp_DroppingPlayer = { "DroppingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventOnFlagDropped_Parms, DroppingPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventOnFlagDropped_Parms, DropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropLocation_MetaData), NewProp_DropLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::NewProp_DroppingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::NewProp_DropLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "OnFlagDropped", Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::CTFGameState_eventOnFlagDropped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::CTFGameState_eventOnFlagDropped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_OnFlagDropped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_OnFlagDropped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execOnFlagDropped)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_DroppingPlayer);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DropLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlagDropped(Z_Param_DroppingPlayer,Z_Param_Out_DropLocation);
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function OnFlagDropped ***************************************

// ********** Begin Class ACTFGameState Function OnFlagReturned ************************************
struct Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics
{
	struct CTFGameState_eventOnFlagReturned_Parms
	{
		ETeam Team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventOnFlagReturned_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "OnFlagReturned", Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::CTFGameState_eventOnFlagReturned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::CTFGameState_eventOnFlagReturned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_OnFlagReturned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_OnFlagReturned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execOnFlagReturned)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlagReturned(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function OnFlagReturned **************************************

// ********** Begin Class ACTFGameState Function OnPlayerDisconnected ******************************
struct Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics
{
	struct CTFGameState_eventOnPlayerDisconnected_Parms
	{
		ACTFPlayerState* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cleanup Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cleanup Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventOnPlayerDisconnected_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "OnPlayerDisconnected", Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::CTFGameState_eventOnPlayerDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::CTFGameState_eventOnPlayerDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execOnPlayerDisconnected)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDisconnected(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function OnPlayerDisconnected ********************************

// ********** Begin Class ACTFGameState Function OnRep_BlueTeamInfo ********************************
struct Z_Construct_UFunction_ACTFGameState_OnRep_BlueTeamInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_OnRep_BlueTeamInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "OnRep_BlueTeamInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnRep_BlueTeamInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_OnRep_BlueTeamInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFGameState_OnRep_BlueTeamInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_OnRep_BlueTeamInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execOnRep_BlueTeamInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlueTeamInfo();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function OnRep_BlueTeamInfo **********************************

// ********** Begin Class ACTFGameState Function OnRep_GamePhase ***********************************
struct Z_Construct_UFunction_ACTFGameState_OnRep_GamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_OnRep_GamePhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "OnRep_GamePhase", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnRep_GamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_OnRep_GamePhase_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFGameState_OnRep_GamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_OnRep_GamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execOnRep_GamePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_GamePhase();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function OnRep_GamePhase *************************************

// ********** Begin Class ACTFGameState Function OnRep_RedTeamInfo *********************************
struct Z_Construct_UFunction_ACTFGameState_OnRep_RedTeamInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_OnRep_RedTeamInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "OnRep_RedTeamInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_OnRep_RedTeamInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_OnRep_RedTeamInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFGameState_OnRep_RedTeamInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_OnRep_RedTeamInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execOnRep_RedTeamInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RedTeamInfo();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function OnRep_RedTeamInfo ***********************************

// ********** Begin Class ACTFGameState Function RegisterFlag **************************************
struct Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics
{
	struct CTFGameState_eventRegisterFlag_Parms
	{
		ACTFFlag* Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag Management\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventRegisterFlag_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "RegisterFlag", Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::CTFGameState_eventRegisterFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::CTFGameState_eventRegisterFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_RegisterFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_RegisterFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execRegisterFlag)
{
	P_GET_OBJECT(ACTFFlag,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterFlag(Z_Param_Flag);
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function RegisterFlag ****************************************

// ********** Begin Class ACTFGameState Function ResetMatch ****************************************
struct Z_Construct_UFunction_ACTFGameState_ResetMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_ResetMatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "ResetMatch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_ResetMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_ResetMatch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFGameState_ResetMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_ResetMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execResetMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMatch();
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function ResetMatch ******************************************

// ********** Begin Class ACTFGameState Function SetGameConfig *************************************
struct Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics
{
	struct CTFGameState_eventSetGameConfig_Parms
	{
		FGameConfig NewConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventSetGameConfig_Parms, NewConfig), Z_Construct_UScriptStruct_FGameConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewConfig_MetaData), NewProp_NewConfig_MetaData) }; // 3624988173
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::NewProp_NewConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "SetGameConfig", Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::CTFGameState_eventSetGameConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::CTFGameState_eventSetGameConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_SetGameConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_SetGameConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execSetGameConfig)
{
	P_GET_STRUCT_REF(FGameConfig,Z_Param_Out_NewConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameConfig(Z_Param_Out_NewConfig);
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function SetGameConfig ***************************************

// ********** Begin Class ACTFGameState Function SetGamePhase **************************************
struct Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics
{
	struct CTFGameState_eventSetGamePhase_Parms
	{
		EGamePhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game State Management\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game State Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventSetGamePhase_Parms, NewPhase), Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase, METADATA_PARAMS(0, nullptr) }; // 1253027156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "SetGamePhase", Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::CTFGameState_eventSetGamePhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::CTFGameState_eventSetGamePhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_SetGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_SetGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execSetGamePhase)
{
	P_GET_ENUM(EGamePhase,Z_Param_NewPhase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGamePhase(EGamePhase(Z_Param_NewPhase));
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function SetGamePhase ****************************************

// ********** Begin Class ACTFGameState Function SetTeamScore **************************************
struct Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics
{
	struct CTFGameState_eventSetTeamScore_Parms
	{
		ETeam Team;
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventSetTeamScore_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFGameState_eventSetTeamScore_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameState, nullptr, "SetTeamScore", Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::CTFGameState_eventSetTeamScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::CTFGameState_eventSetTeamScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFGameState_SetTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameState_SetTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFGameState::execSetTeamScore)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamScore(ETeam(Z_Param_Team),Z_Param_NewScore);
	P_NATIVE_END;
}
// ********** End Class ACTFGameState Function SetTeamScore ****************************************

// ********** Begin Class ACTFGameState ************************************************************
void ACTFGameState::StaticRegisterNativesACTFGameState()
{
	UClass* Class = ACTFGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTeamScore", &ACTFGameState::execAddTeamScore },
		{ "CanJoinTeam", &ACTFGameState::execCanJoinTeam },
		{ "CheckForMatchEnd", &ACTFGameState::execCheckForMatchEnd },
		{ "GetAllFlags", &ACTFGameState::execGetAllFlags },
		{ "GetFlag", &ACTFGameState::execGetFlag },
		{ "GetGameConfig", &ACTFGameState::execGetGameConfig },
		{ "GetGamePhase", &ACTFGameState::execGetGamePhase },
		{ "GetPlayersOnTeam", &ACTFGameState::execGetPlayersOnTeam },
		{ "GetRemainingTime", &ACTFGameState::execGetRemainingTime },
		{ "GetSmallestTeam", &ACTFGameState::execGetSmallestTeam },
		{ "GetTeamFlag", &ACTFGameState::execGetTeamFlag },
		{ "GetTeamInfo", &ACTFGameState::execGetTeamInfo },
		{ "GetTeamPlayerCount", &ACTFGameState::execGetTeamPlayerCount },
		{ "GetTeamScore", &ACTFGameState::execGetTeamScore },
		{ "GetWinningTeam", &ACTFGameState::execGetWinningTeam },
		{ "IsMatchInProgress", &ACTFGameState::execIsMatchInProgress },
		{ "IsTeamWinning", &ACTFGameState::execIsTeamWinning },
		{ "OnFlagCaptured", &ACTFGameState::execOnFlagCaptured },
		{ "OnFlagDropped", &ACTFGameState::execOnFlagDropped },
		{ "OnFlagReturned", &ACTFGameState::execOnFlagReturned },
		{ "OnPlayerDisconnected", &ACTFGameState::execOnPlayerDisconnected },
		{ "OnRep_BlueTeamInfo", &ACTFGameState::execOnRep_BlueTeamInfo },
		{ "OnRep_GamePhase", &ACTFGameState::execOnRep_GamePhase },
		{ "OnRep_RedTeamInfo", &ACTFGameState::execOnRep_RedTeamInfo },
		{ "RegisterFlag", &ACTFGameState::execRegisterFlag },
		{ "ResetMatch", &ACTFGameState::execResetMatch },
		{ "SetGameConfig", &ACTFGameState::execSetGameConfig },
		{ "SetGamePhase", &ACTFGameState::execSetGamePhase },
		{ "SetTeamScore", &ACTFGameState::execSetTeamScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACTFGameState;
UClass* ACTFGameState::GetPrivateStaticClass()
{
	using TClass = ACTFGameState;
	if (!Z_Registration_Info_UClass_ACTFGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFGameState"),
			Z_Registration_Info_UClass_ACTFGameState.InnerSingleton,
			StaticRegisterNativesACTFGameState,
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
	return Z_Registration_Info_UClass_ACTFGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACTFGameState_NoRegister()
{
	return ACTFGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACTFGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/CTFGameState.h" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePhaseChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagCaptured_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagDropped_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagReturned_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamInfo_MetaData[] = {
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamInfo_MetaData[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGamePhase_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchStartTime_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConfig_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFlag_MetaData[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game Objects\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Objects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllFlags_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamInfoMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal State\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal State" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScoreChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GamePhaseChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FlagCaptured;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FlagDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FlagReturned;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RedTeamInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueTeamInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGamePhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGamePhase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchStartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameFlag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllFlags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamInfoMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamInfoMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamInfoMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TeamInfoMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACTFGameState_AddTeamScore, "AddTeamScore" }, // 2747730906
		{ &Z_Construct_UFunction_ACTFGameState_CanJoinTeam, "CanJoinTeam" }, // 3251388439
		{ &Z_Construct_UFunction_ACTFGameState_CheckForMatchEnd, "CheckForMatchEnd" }, // 1939928770
		{ &Z_Construct_UFunction_ACTFGameState_GetAllFlags, "GetAllFlags" }, // 1757286305
		{ &Z_Construct_UFunction_ACTFGameState_GetFlag, "GetFlag" }, // 2701658231
		{ &Z_Construct_UFunction_ACTFGameState_GetGameConfig, "GetGameConfig" }, // 3884429302
		{ &Z_Construct_UFunction_ACTFGameState_GetGamePhase, "GetGamePhase" }, // 1842646513
		{ &Z_Construct_UFunction_ACTFGameState_GetPlayersOnTeam, "GetPlayersOnTeam" }, // 3301114359
		{ &Z_Construct_UFunction_ACTFGameState_GetRemainingTime, "GetRemainingTime" }, // 1690510793
		{ &Z_Construct_UFunction_ACTFGameState_GetSmallestTeam, "GetSmallestTeam" }, // 1548748761
		{ &Z_Construct_UFunction_ACTFGameState_GetTeamFlag, "GetTeamFlag" }, // 12355450
		{ &Z_Construct_UFunction_ACTFGameState_GetTeamInfo, "GetTeamInfo" }, // 3806957845
		{ &Z_Construct_UFunction_ACTFGameState_GetTeamPlayerCount, "GetTeamPlayerCount" }, // 1808861731
		{ &Z_Construct_UFunction_ACTFGameState_GetTeamScore, "GetTeamScore" }, // 3354382935
		{ &Z_Construct_UFunction_ACTFGameState_GetWinningTeam, "GetWinningTeam" }, // 2769729074
		{ &Z_Construct_UFunction_ACTFGameState_IsMatchInProgress, "IsMatchInProgress" }, // 939956273
		{ &Z_Construct_UFunction_ACTFGameState_IsTeamWinning, "IsTeamWinning" }, // 1257647744
		{ &Z_Construct_UFunction_ACTFGameState_OnFlagCaptured, "OnFlagCaptured" }, // 765925910
		{ &Z_Construct_UFunction_ACTFGameState_OnFlagDropped, "OnFlagDropped" }, // 773949647
		{ &Z_Construct_UFunction_ACTFGameState_OnFlagReturned, "OnFlagReturned" }, // 1965787512
		{ &Z_Construct_UFunction_ACTFGameState_OnPlayerDisconnected, "OnPlayerDisconnected" }, // 3040193676
		{ &Z_Construct_UFunction_ACTFGameState_OnRep_BlueTeamInfo, "OnRep_BlueTeamInfo" }, // 3139507960
		{ &Z_Construct_UFunction_ACTFGameState_OnRep_GamePhase, "OnRep_GamePhase" }, // 425069699
		{ &Z_Construct_UFunction_ACTFGameState_OnRep_RedTeamInfo, "OnRep_RedTeamInfo" }, // 1874747277
		{ &Z_Construct_UFunction_ACTFGameState_RegisterFlag, "RegisterFlag" }, // 3324630323
		{ &Z_Construct_UFunction_ACTFGameState_ResetMatch, "ResetMatch" }, // 2870006416
		{ &Z_Construct_UFunction_ACTFGameState_SetGameConfig, "SetGameConfig" }, // 388066239
		{ &Z_Construct_UFunction_ACTFGameState_SetGamePhase, "SetGamePhase" }, // 3957357007
		{ &Z_Construct_UFunction_ACTFGameState_SetTeamScore, "SetTeamScore" }, // 3138235586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACTFGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_ScoreChanged = { "ScoreChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, ScoreChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnScoreChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreChanged_MetaData), NewProp_ScoreChanged_MetaData) }; // 3258347308
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_GamePhaseChanged = { "GamePhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, GamePhaseChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnGamePhaseChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePhaseChanged_MetaData), NewProp_GamePhaseChanged_MetaData) }; // 2519567320
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_FlagCaptured = { "FlagCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, FlagCaptured), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagCapturedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagCaptured_MetaData), NewProp_FlagCaptured_MetaData) }; // 4269758531
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_FlagDropped = { "FlagDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, FlagDropped), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagDroppedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagDropped_MetaData), NewProp_FlagDropped_MetaData) }; // 1798534037
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_FlagReturned = { "FlagReturned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, FlagReturned), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnFlagReturnedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagReturned_MetaData), NewProp_FlagReturned_MetaData) }; // 983341528
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_RedTeamInfo = { "RedTeamInfo", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, RedTeamInfo), Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedTeamInfo_MetaData), NewProp_RedTeamInfo_MetaData) }; // 1693386140
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_BlueTeamInfo = { "BlueTeamInfo", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, BlueTeamInfo), Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueTeamInfo_MetaData), NewProp_BlueTeamInfo_MetaData) }; // 1693386140
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_CurrentGamePhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_CurrentGamePhase = { "CurrentGamePhase", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, CurrentGamePhase), Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGamePhase_MetaData), NewProp_CurrentGamePhase_MetaData) }; // 1253027156
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_MatchStartTime = { "MatchStartTime", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, MatchStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchStartTime_MetaData), NewProp_MatchStartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_GameConfig = { "GameConfig", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, GameConfig), Z_Construct_UScriptStruct_FGameConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConfig_MetaData), NewProp_GameConfig_MetaData) }; // 3624988173
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_GameFlag = { "GameFlag", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, GameFlag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFlag_MetaData), NewProp_GameFlag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_AllFlags_Inner = { "AllFlags", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_AllFlags = { "AllFlags", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, AllFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllFlags_MetaData), NewProp_AllFlags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap_ValueProp = { "TeamInfoMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(0, nullptr) }; // 1693386140
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap_Key_KeyProp = { "TeamInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap = { "TeamInfoMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameState, TeamInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamInfoMap_MetaData), NewProp_TeamInfoMap_MetaData) }; // 576107608 1693386140
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACTFGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_ScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_GamePhaseChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_FlagCaptured,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_FlagDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_FlagReturned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_RedTeamInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_BlueTeamInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_CurrentGamePhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_CurrentGamePhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_MatchStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_GameConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_GameFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_AllFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_AllFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameState_Statics::NewProp_TeamInfoMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACTFGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACTFGameState_Statics::ClassParams = {
	&ACTFGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACTFGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACTFGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACTFGameState()
{
	if (!Z_Registration_Info_UClass_ACTFGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACTFGameState.OuterSingleton, Z_Construct_UClass_ACTFGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACTFGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACTFGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_RedTeamInfo(TEXT("RedTeamInfo"));
	static FName Name_BlueTeamInfo(TEXT("BlueTeamInfo"));
	static FName Name_CurrentGamePhase(TEXT("CurrentGamePhase"));
	static FName Name_MatchStartTime(TEXT("MatchStartTime"));
	static FName Name_GameConfig(TEXT("GameConfig"));
	const bool bIsValid = true
		&& Name_RedTeamInfo == ClassReps[(int32)ENetFields_Private::RedTeamInfo].Property->GetFName()
		&& Name_BlueTeamInfo == ClassReps[(int32)ENetFields_Private::BlueTeamInfo].Property->GetFName()
		&& Name_CurrentGamePhase == ClassReps[(int32)ENetFields_Private::CurrentGamePhase].Property->GetFName()
		&& Name_MatchStartTime == ClassReps[(int32)ENetFields_Private::MatchStartTime].Property->GetFName()
		&& Name_GameConfig == ClassReps[(int32)ENetFields_Private::GameConfig].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACTFGameState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACTFGameState);
ACTFGameState::~ACTFGameState() {}
// ********** End Class ACTFGameState **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACTFGameState, ACTFGameState::StaticClass, TEXT("ACTFGameState"), &Z_Registration_Info_UClass_ACTFGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACTFGameState), 4044907315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h__Script_CaptureTheFlagGAS_1009236381(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
