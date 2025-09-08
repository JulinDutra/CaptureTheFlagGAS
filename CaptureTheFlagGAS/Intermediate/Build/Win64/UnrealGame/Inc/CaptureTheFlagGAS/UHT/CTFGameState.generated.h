// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CTFGameState.h"

#ifdef CAPTURETHEFLAGGAS_CTFGameState_generated_h
#error "CTFGameState.generated.h already included, missing '#pragma once' in CTFGameState.h"
#endif
#define CAPTURETHEFLAGGAS_CTFGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACTFFlag;
class ACTFPlayerState;
enum class EGamePhase : uint8;
enum class ETeam : uint8;
struct FGameConfig;
struct FTeamInfo;

// ********** Begin Delegate FOnScoreChangedDelegate ***********************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_13_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnScoreChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnScoreChangedDelegate, ETeam Team, int32 NewScore);


// ********** End Delegate FOnScoreChangedDelegate *************************************************

// ********** Begin Delegate FOnGamePhaseChangedDelegate *******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_14_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnGamePhaseChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGamePhaseChangedDelegate, EGamePhase NewPhase);


// ********** End Delegate FOnGamePhaseChangedDelegate *********************************************

// ********** Begin Delegate FOnFlagCapturedDelegate ***********************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_15_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnFlagCapturedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagCapturedDelegate, ETeam CapturingTeam, ACTFPlayerState* CapturingPlayer, int32 NewScore);


// ********** End Delegate FOnFlagCapturedDelegate *************************************************

// ********** Begin Delegate FOnFlagDroppedDelegate ************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_16_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnFlagDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagDroppedDelegate, ACTFPlayerState* DroppingPlayer, FVector DropLocation);


// ********** End Delegate FOnFlagDroppedDelegate **************************************************

// ********** Begin Delegate FOnFlagReturnedDelegate ***********************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_17_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnFlagReturnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagReturnedDelegate, ETeam Team);


// ********** End Delegate FOnFlagReturnedDelegate *************************************************

// ********** Begin Class ACTFGameState ************************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_GamePhase); \
	DECLARE_FUNCTION(execOnRep_BlueTeamInfo); \
	DECLARE_FUNCTION(execOnRep_RedTeamInfo); \
	DECLARE_FUNCTION(execOnPlayerDisconnected); \
	DECLARE_FUNCTION(execIsTeamWinning); \
	DECLARE_FUNCTION(execGetWinningTeam); \
	DECLARE_FUNCTION(execResetMatch); \
	DECLARE_FUNCTION(execCheckForMatchEnd); \
	DECLARE_FUNCTION(execOnFlagReturned); \
	DECLARE_FUNCTION(execOnFlagDropped); \
	DECLARE_FUNCTION(execOnFlagCaptured); \
	DECLARE_FUNCTION(execGetAllFlags); \
	DECLARE_FUNCTION(execGetTeamFlag); \
	DECLARE_FUNCTION(execGetFlag); \
	DECLARE_FUNCTION(execRegisterFlag); \
	DECLARE_FUNCTION(execSetGameConfig); \
	DECLARE_FUNCTION(execGetGameConfig); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execIsMatchInProgress); \
	DECLARE_FUNCTION(execGetGamePhase); \
	DECLARE_FUNCTION(execSetGamePhase); \
	DECLARE_FUNCTION(execCanJoinTeam); \
	DECLARE_FUNCTION(execGetSmallestTeam); \
	DECLARE_FUNCTION(execGetPlayersOnTeam); \
	DECLARE_FUNCTION(execGetTeamPlayerCount); \
	DECLARE_FUNCTION(execGetTeamScore); \
	DECLARE_FUNCTION(execAddTeamScore); \
	DECLARE_FUNCTION(execSetTeamScore); \
	DECLARE_FUNCTION(execGetTeamInfo);


CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACTFGameState(); \
	friend struct Z_Construct_UClass_ACTFGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACTFGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_ACTFGameState_NoRegister) \
	DECLARE_SERIALIZER(ACTFGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RedTeamInfo=NETFIELD_REP_START, \
		BlueTeamInfo, \
		CurrentGamePhase, \
		MatchStartTime, \
		GameConfig, \
		NETFIELD_REP_END=GameConfig	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACTFGameState(ACTFGameState&&) = delete; \
	ACTFGameState(const ACTFGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTFGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTFGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACTFGameState) \
	NO_API virtual ~ACTFGameState();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_19_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_22_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACTFGameState;

// ********** End Class ACTFGameState **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
