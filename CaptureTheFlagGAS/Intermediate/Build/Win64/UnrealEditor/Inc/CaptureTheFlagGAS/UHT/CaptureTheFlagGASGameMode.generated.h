// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureTheFlagGASGameMode.h"

#ifdef CAPTURETHEFLAGGAS_CaptureTheFlagGASGameMode_generated_h
#error "CaptureTheFlagGASGameMode.generated.h already included, missing '#pragma once' in CaptureTheFlagGASGameMode.h"
#endif
#define CAPTURETHEFLAGGAS_CaptureTheFlagGASGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AController;
class ACTFPlayerState;
class APlayerStart;
enum class EGamePhase : uint8;
enum class ETeam : uint8;

// ********** Begin Delegate FOnPlayerJoinedTeamDelegate *******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_15_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnPlayerJoinedTeamDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerJoinedTeamDelegate, ACTFPlayerState* Player, ETeam Team);


// ********** End Delegate FOnPlayerJoinedTeamDelegate *********************************************

// ********** Begin Delegate FOnMatchStateChangedDelegate ******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_16_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnMatchStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMatchStateChangedDelegate, EGamePhase NewPhase);


// ********** End Delegate FOnMatchStateChangedDelegate ********************************************

// ********** Begin Class ACaptureTheFlagGASGameMode ***********************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetFlags); \
	DECLARE_FUNCTION(execInitializeFlags); \
	DECLARE_FUNCTION(execCanRespawnPlayer); \
	DECLARE_FUNCTION(execRespawnPlayer); \
	DECLARE_FUNCTION(execGetTeamPlayerStart); \
	DECLARE_FUNCTION(execCheckMatchEnd); \
	DECLARE_FUNCTION(execResetMatch); \
	DECLARE_FUNCTION(execBalanceTeams); \
	DECLARE_FUNCTION(execCanStartMatch); \
	DECLARE_FUNCTION(execSelectTeamForPlayer); \
	DECLARE_FUNCTION(execAssignPlayerToTeam);


CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASGameMode_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureTheFlagGASGameMode(); \
	friend struct Z_Construct_UClass_ACaptureTheFlagGASGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACaptureTheFlagGASGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_ACaptureTheFlagGASGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACaptureTheFlagGASGameMode)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACaptureTheFlagGASGameMode(ACaptureTheFlagGASGameMode&&) = delete; \
	ACaptureTheFlagGASGameMode(const ACaptureTheFlagGASGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureTheFlagGASGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureTheFlagGASGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptureTheFlagGASGameMode) \
	NO_API virtual ~ACaptureTheFlagGASGameMode();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_21_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_24_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACaptureTheFlagGASGameMode;

// ********** End Class ACaptureTheFlagGASGameMode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
