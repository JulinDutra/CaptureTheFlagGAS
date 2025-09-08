// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CTFPlayerState.h"

#ifdef CAPTURETHEFLAGGAS_CTFPlayerState_generated_h
#error "CTFPlayerState.generated.h already included, missing '#pragma once' in CTFPlayerState.h"
#endif
#define CAPTURETHEFLAGGAS_CTFPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACTFFlag;
class ACTFPlayerState;
enum class ETeam : uint8;
struct FLinearColor;
struct FPlayerStats;

// ********** Begin Delegate FOnTeamChangedDelegate ************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_15_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnTeamChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTeamChangedDelegate, ETeam OldTeam, ETeam NewTeam);


// ********** End Delegate FOnTeamChangedDelegate **************************************************

// ********** Begin Delegate FOnStatsChangedDelegate ***********************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_16_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnStatsChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStatsChangedDelegate, FPlayerStats const& NewStats);


// ********** End Delegate FOnStatsChangedDelegate *************************************************

// ********** Begin Delegate FOnFlagStatusChangedDelegate ******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_17_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnFlagStatusChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFlagStatusChangedDelegate, bool bHasFlag);


// ********** End Delegate FOnFlagStatusChangedDelegate ********************************************

// ********** Begin Class ACTFPlayerState **********************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_RespawnTime); \
	DECLARE_FUNCTION(execOnRep_CarriedFlag); \
	DECLARE_FUNCTION(execOnRep_Stats); \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execHandlePlayerDeath); \
	DECLARE_FUNCTION(execOnPlayerRespawned); \
	DECLARE_FUNCTION(execOnPlayerKilled); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetTotalScore); \
	DECLARE_FUNCTION(execGetKillDeathRatio); \
	DECLARE_FUNCTION(execGetRespawnCountdown); \
	DECLARE_FUNCTION(execCanRespawn); \
	DECLARE_FUNCTION(execGetRespawnTime); \
	DECLARE_FUNCTION(execSetRespawnTime); \
	DECLARE_FUNCTION(execDropFlag); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execGetCarriedFlag); \
	DECLARE_FUNCTION(execSetCarriedFlag); \
	DECLARE_FUNCTION(execResetStats); \
	DECLARE_FUNCTION(execAddFlagTime); \
	DECLARE_FUNCTION(execAddDeath); \
	DECLARE_FUNCTION(execAddKill); \
	DECLARE_FUNCTION(execAddReturn); \
	DECLARE_FUNCTION(execAddCapture); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execGetTeamColor); \
	DECLARE_FUNCTION(execIsEnemyOf); \
	DECLARE_FUNCTION(execIsOnSameTeam); \
	DECLARE_FUNCTION(execIsOnTeam); \
	DECLARE_FUNCTION(execGetTeam); \
	DECLARE_FUNCTION(execSetTeam);


CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACTFPlayerState(); \
	friend struct Z_Construct_UClass_ACTFPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACTFPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_ACTFPlayerState_NoRegister) \
	DECLARE_SERIALIZER(ACTFPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ACTFPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentTeam=NETFIELD_REP_START, \
		PlayerStats, \
		CarriedFlag, \
		RespawnTime, \
		NETFIELD_REP_END=RespawnTime	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACTFPlayerState(ACTFPlayerState&&) = delete; \
	ACTFPlayerState(const ACTFPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTFPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTFPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACTFPlayerState) \
	NO_API virtual ~ACTFPlayerState();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_19_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_22_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACTFPlayerState;

// ********** End Class ACTFPlayerState ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
