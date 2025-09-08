// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureTheFlagGASGameMode.h"
#include "Core/CTFTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureTheFlagGASGameMode() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASGameMode();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASGameMode_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerController_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameConfig();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPlayerJoinedTeamDelegate *******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerJoinedTeamDelegate_Parms
	{
		ACTFPlayerState* Player;
		ETeam Team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerJoinedTeamDelegate_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerJoinedTeamDelegate_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnPlayerJoinedTeamDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerJoinedTeamDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerJoinedTeamDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerJoinedTeamDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerJoinedTeamDelegate, ACTFPlayerState* Player, ETeam Team)
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerJoinedTeamDelegate_Parms
	{
		ACTFPlayerState* Player;
		ETeam Team;
	};
	_Script_CaptureTheFlagGAS_eventOnPlayerJoinedTeamDelegate_Parms Parms;
	Parms.Player=Player;
	Parms.Team=Team;
	OnPlayerJoinedTeamDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerJoinedTeamDelegate *********************************************

// ********** Begin Delegate FOnMatchStateChangedDelegate ******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnMatchStateChangedDelegate_Parms
	{
		EGamePhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnMatchStateChangedDelegate_Parms, NewPhase), Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase, METADATA_PARAMS(0, nullptr) }; // 1253027156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnMatchStateChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnMatchStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnMatchStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMatchStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMatchStateChangedDelegate, EGamePhase NewPhase)
{
	struct _Script_CaptureTheFlagGAS_eventOnMatchStateChangedDelegate_Parms
	{
		EGamePhase NewPhase;
	};
	_Script_CaptureTheFlagGAS_eventOnMatchStateChangedDelegate_Parms Parms;
	Parms.NewPhase=NewPhase;
	OnMatchStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMatchStateChangedDelegate ********************************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function AssignPlayerToTeam *******************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics
{
	struct CaptureTheFlagGASGameMode_eventAssignPlayerToTeam_Parms
	{
		ACTFPlayerState* Player;
		ETeam Team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Team Management\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventAssignPlayerToTeam_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventAssignPlayerToTeam_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "AssignPlayerToTeam", Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::CaptureTheFlagGASGameMode_eventAssignPlayerToTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::CaptureTheFlagGASGameMode_eventAssignPlayerToTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execAssignPlayerToTeam)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignPlayerToTeam(Z_Param_Player,ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function AssignPlayerToTeam *********************

// ********** Begin Class ACaptureTheFlagGASGameMode Function BalanceTeams *************************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_BalanceTeams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team Management" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_BalanceTeams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "BalanceTeams", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_BalanceTeams_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_BalanceTeams_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_BalanceTeams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_BalanceTeams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execBalanceTeams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BalanceTeams();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function BalanceTeams ***************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function CanRespawnPlayer *********************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics
{
	struct CaptureTheFlagGASGameMode_eventCanRespawnPlayer_Parms
	{
		ACTFPlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventCanRespawnPlayer_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CaptureTheFlagGASGameMode_eventCanRespawnPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureTheFlagGASGameMode_eventCanRespawnPlayer_Parms), &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "CanRespawnPlayer", Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::CaptureTheFlagGASGameMode_eventCanRespawnPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::CaptureTheFlagGASGameMode_eventCanRespawnPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execCanRespawnPlayer)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRespawnPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function CanRespawnPlayer ***********************

// ********** Begin Class ACaptureTheFlagGASGameMode Function CanStartMatch ************************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics
{
	struct CaptureTheFlagGASGameMode_eventCanStartMatch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team Management" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CaptureTheFlagGASGameMode_eventCanStartMatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureTheFlagGASGameMode_eventCanStartMatch_Parms), &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "CanStartMatch", Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::CaptureTheFlagGASGameMode_eventCanStartMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::CaptureTheFlagGASGameMode_eventCanStartMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execCanStartMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStartMatch();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function CanStartMatch **************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function CheckMatchEnd ************************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CheckMatchEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Match Management" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CheckMatchEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "CheckMatchEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CheckMatchEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CheckMatchEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CheckMatchEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CheckMatchEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execCheckMatchEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckMatchEnd();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function CheckMatchEnd **************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function GetTeamPlayerStart *******************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics
{
	struct CaptureTheFlagGASGameMode_eventGetTeamPlayerStart_Parms
	{
		ETeam Team;
		APlayerStart* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spawning\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventGetTeamPlayerStart_Parms, Team), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventGetTeamPlayerStart_Parms, ReturnValue), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "GetTeamPlayerStart", Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::CaptureTheFlagGASGameMode_eventGetTeamPlayerStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::CaptureTheFlagGASGameMode_eventGetTeamPlayerStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execGetTeamPlayerStart)
{
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerStart**)Z_Param__Result=P_THIS->GetTeamPlayerStart(ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function GetTeamPlayerStart *********************

// ********** Begin Class ACaptureTheFlagGASGameMode Function InitializeFlags **********************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_InitializeFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag Management\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_InitializeFlags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "InitializeFlags", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_InitializeFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_InitializeFlags_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_InitializeFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_InitializeFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execInitializeFlags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFlags();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function InitializeFlags ************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function ResetFlags ***************************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag Management" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetFlags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "ResetFlags", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetFlags_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execResetFlags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFlags();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function ResetFlags *****************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function ResetMatch ***************************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Match Management" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetMatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "ResetMatch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetMatch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execResetMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMatch();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function ResetMatch *****************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function RespawnPlayer ************************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics
{
	struct CaptureTheFlagGASGameMode_eventRespawnPlayer_Parms
	{
		AController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventRespawnPlayer_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "RespawnPlayer", Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::CaptureTheFlagGASGameMode_eventRespawnPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::CaptureTheFlagGASGameMode_eventRespawnPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execRespawnPlayer)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RespawnPlayer(Z_Param_Controller);
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function RespawnPlayer **************************

// ********** Begin Class ACaptureTheFlagGASGameMode Function SelectTeamForPlayer ******************
struct Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics
{
	struct CaptureTheFlagGASGameMode_eventSelectTeamForPlayer_Parms
	{
		ACTFPlayerState* Player;
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team Management" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventSelectTeamForPlayer_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASGameMode_eventSelectTeamForPlayer_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode, nullptr, "SelectTeamForPlayer", Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::CaptureTheFlagGASGameMode_eventSelectTeamForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::CaptureTheFlagGASGameMode_eventSelectTeamForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASGameMode::execSelectTeamForPlayer)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->SelectTeamForPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASGameMode Function SelectTeamForPlayer ********************

// ********** Begin Class ACaptureTheFlagGASGameMode ***********************************************
void ACaptureTheFlagGASGameMode::StaticRegisterNativesACaptureTheFlagGASGameMode()
{
	UClass* Class = ACaptureTheFlagGASGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignPlayerToTeam", &ACaptureTheFlagGASGameMode::execAssignPlayerToTeam },
		{ "BalanceTeams", &ACaptureTheFlagGASGameMode::execBalanceTeams },
		{ "CanRespawnPlayer", &ACaptureTheFlagGASGameMode::execCanRespawnPlayer },
		{ "CanStartMatch", &ACaptureTheFlagGASGameMode::execCanStartMatch },
		{ "CheckMatchEnd", &ACaptureTheFlagGASGameMode::execCheckMatchEnd },
		{ "GetTeamPlayerStart", &ACaptureTheFlagGASGameMode::execGetTeamPlayerStart },
		{ "InitializeFlags", &ACaptureTheFlagGASGameMode::execInitializeFlags },
		{ "ResetFlags", &ACaptureTheFlagGASGameMode::execResetFlags },
		{ "ResetMatch", &ACaptureTheFlagGASGameMode::execResetMatch },
		{ "RespawnPlayer", &ACaptureTheFlagGASGameMode::execRespawnPlayer },
		{ "SelectTeamForPlayer", &ACaptureTheFlagGASGameMode::execSelectTeamForPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode;
UClass* ACaptureTheFlagGASGameMode::GetPrivateStaticClass()
{
	using TClass = ACaptureTheFlagGASGameMode;
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureTheFlagGASGameMode"),
			Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode.InnerSingleton,
			StaticRegisterNativesACaptureTheFlagGASGameMode,
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
	return Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureTheFlagGASGameMode_NoRegister()
{
	return ACaptureTheFlagGASGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  CTF GameMode with team management and multiplayer support\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CaptureTheFlagGASGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CTF GameMode with team management and multiplayer support" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTFPlayerControllerClass_MetaData[] = {
		{ "Category", "Default Classes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default classes for component-based architecture\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default classes for component-based architecture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerJoinedTeam_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event Delegates\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchStateChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConfiguration_MetaData[] = {
		{ "Category", "Game Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPlayersToStart_MetaData[] = {
		{ "Category", "Game Configuration" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBalanceTeams_MetaData[] = {
		{ "Category", "Game Configuration" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpectators_MetaData[] = {
		{ "Category", "Game Configuration" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagClass_MetaData[] = {
		{ "Category", "Flag Configuration" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagSpawnLocation_MetaData[] = {
		{ "Category", "Flag Configuration" },
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTFGameState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached References\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached References" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFlag_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamStarts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player Start Arrays\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Start Arrays" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamStarts_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorStarts_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeutralStarts_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlagGASGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CTFPlayerControllerClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerJoinedTeam;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MatchStateChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameConfiguration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPlayersToStart;
	static void NewProp_bAutoBalanceTeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBalanceTeams;
	static void NewProp_bAllowSpectators_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpectators;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FlagClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlagSpawnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CTFGameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameFlag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RedTeamStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RedTeamStarts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueTeamStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueTeamStarts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpectatorStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpectatorStarts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NeutralStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NeutralStarts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_AssignPlayerToTeam, "AssignPlayerToTeam" }, // 317318170
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_BalanceTeams, "BalanceTeams" }, // 2219814808
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanRespawnPlayer, "CanRespawnPlayer" }, // 950706416
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CanStartMatch, "CanStartMatch" }, // 3246140776
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_CheckMatchEnd, "CheckMatchEnd" }, // 4245176183
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_GetTeamPlayerStart, "GetTeamPlayerStart" }, // 3349658865
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_InitializeFlags, "InitializeFlags" }, // 3785051840
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetFlags, "ResetFlags" }, // 3749515159
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_ResetMatch, "ResetMatch" }, // 295195516
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_RespawnPlayer, "RespawnPlayer" }, // 426205482
		{ &Z_Construct_UFunction_ACaptureTheFlagGASGameMode_SelectTeamForPlayer, "SelectTeamForPlayer" }, // 3185419468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureTheFlagGASGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_CTFPlayerControllerClass = { "CTFPlayerControllerClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, CTFPlayerControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACTFPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTFPlayerControllerClass_MetaData), NewProp_CTFPlayerControllerClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_PlayerJoinedTeam = { "PlayerJoinedTeam", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, PlayerJoinedTeam), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerJoinedTeamDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerJoinedTeam_MetaData), NewProp_PlayerJoinedTeam_MetaData) }; // 164692295
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_MatchStateChanged = { "MatchStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, MatchStateChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnMatchStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchStateChanged_MetaData), NewProp_MatchStateChanged_MetaData) }; // 4096291059
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_GameConfiguration = { "GameConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, GameConfiguration), Z_Construct_UScriptStruct_FGameConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConfiguration_MetaData), NewProp_GameConfiguration_MetaData) }; // 3624988173
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_MinPlayersToStart = { "MinPlayersToStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, MinPlayersToStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPlayersToStart_MetaData), NewProp_MinPlayersToStart_MetaData) };
void Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAutoBalanceTeams_SetBit(void* Obj)
{
	((ACaptureTheFlagGASGameMode*)Obj)->bAutoBalanceTeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAutoBalanceTeams = { "bAutoBalanceTeams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACaptureTheFlagGASGameMode), &Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAutoBalanceTeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBalanceTeams_MetaData), NewProp_bAutoBalanceTeams_MetaData) };
void Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAllowSpectators_SetBit(void* Obj)
{
	((ACaptureTheFlagGASGameMode*)Obj)->bAllowSpectators = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAllowSpectators = { "bAllowSpectators", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACaptureTheFlagGASGameMode), &Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAllowSpectators_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSpectators_MetaData), NewProp_bAllowSpectators_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_FlagClass = { "FlagClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, FlagClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagClass_MetaData), NewProp_FlagClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_FlagSpawnLocation = { "FlagSpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, FlagSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagSpawnLocation_MetaData), NewProp_FlagSpawnLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_CTFGameState = { "CTFGameState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, CTFGameState), Z_Construct_UClass_ACTFGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTFGameState_MetaData), NewProp_CTFGameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_GameFlag = { "GameFlag", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, GameFlag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFlag_MetaData), NewProp_GameFlag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_RedTeamStarts_Inner = { "RedTeamStarts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_RedTeamStarts = { "RedTeamStarts", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, RedTeamStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedTeamStarts_MetaData), NewProp_RedTeamStarts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_BlueTeamStarts_Inner = { "BlueTeamStarts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_BlueTeamStarts = { "BlueTeamStarts", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, BlueTeamStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueTeamStarts_MetaData), NewProp_BlueTeamStarts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_SpectatorStarts_Inner = { "SpectatorStarts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_SpectatorStarts = { "SpectatorStarts", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, SpectatorStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectatorStarts_MetaData), NewProp_SpectatorStarts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_NeutralStarts_Inner = { "NeutralStarts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_NeutralStarts = { "NeutralStarts", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASGameMode, NeutralStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeutralStarts_MetaData), NewProp_NeutralStarts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_CTFPlayerControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_PlayerJoinedTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_MatchStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_GameConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_MinPlayersToStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAutoBalanceTeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_bAllowSpectators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_FlagClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_FlagSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_CTFGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_GameFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_RedTeamStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_RedTeamStarts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_BlueTeamStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_BlueTeamStarts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_SpectatorStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_SpectatorStarts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_NeutralStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::NewProp_NeutralStarts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::ClassParams = {
	&ACaptureTheFlagGASGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureTheFlagGASGameMode()
{
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode.OuterSingleton, Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureTheFlagGASGameMode);
ACaptureTheFlagGASGameMode::~ACaptureTheFlagGASGameMode() {}
// ********** End Class ACaptureTheFlagGASGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureTheFlagGASGameMode, ACaptureTheFlagGASGameMode::StaticClass, TEXT("ACaptureTheFlagGASGameMode"), &Z_Registration_Info_UClass_ACaptureTheFlagGASGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureTheFlagGASGameMode), 1315014236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h__Script_CaptureTheFlagGAS_1453029926(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
