// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/CTFCaptureZone.h"

#ifdef CAPTURETHEFLAGGAS_CTFCaptureZone_generated_h
#error "CTFCaptureZone.generated.h already included, missing '#pragma once' in CTFCaptureZone.h"
#endif
#define CAPTURETHEFLAGGAS_CTFCaptureZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ACTFPlayerState;
class UPrimitiveComponent;
enum class ETeam : uint8;
struct FHitResult;

// ********** Begin Delegate FOnCaptureZoneFlagCapturedDelegate ************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_16_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnCaptureZoneFlagCapturedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureZoneFlagCapturedDelegate, ETeam CapturingTeam, ACTFPlayerState* Player, int32 NewScore);


// ********** End Delegate FOnCaptureZoneFlagCapturedDelegate **************************************

// ********** Begin Delegate FOnPlayerEnteredZoneDelegate ******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_17_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnPlayerEnteredZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEnteredZoneDelegate, ACTFPlayerState* Player, ETeam ZoneTeam);


// ********** End Delegate FOnPlayerEnteredZoneDelegate ********************************************

// ********** Begin Delegate FOnPlayerExitedZoneDelegate *******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_18_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnPlayerExitedZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerExitedZoneDelegate, ACTFPlayerState* Player, ETeam ZoneTeam);


// ********** End Delegate FOnPlayerExitedZoneDelegate *********************************************

// ********** Begin Class ACTFCaptureZone **********************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCaptureCollisionEndOverlap); \
	DECLARE_FUNCTION(execOnCaptureCollisionBeginOverlap); \
	DECLARE_FUNCTION(execGetPlayersInZone); \
	DECLARE_FUNCTION(execIsPlayerInZone); \
	DECLARE_FUNCTION(execGetOwningTeam); \
	DECLARE_FUNCTION(execTryCapture); \
	DECLARE_FUNCTION(execCanPlayerCapture);


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_CALLBACK_WRAPPERS
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFCaptureZone_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACTFCaptureZone(); \
	friend struct Z_Construct_UClass_ACTFCaptureZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFCaptureZone_NoRegister(); \
public: \
	DECLARE_CLASS2(ACTFCaptureZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_ACTFCaptureZone_NoRegister) \
	DECLARE_SERIALIZER(ACTFCaptureZone) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayersInZone=NETFIELD_REP_START, \
		NETFIELD_REP_END=PlayersInZone	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACTFCaptureZone(ACTFCaptureZone&&) = delete; \
	ACTFCaptureZone(const ACTFCaptureZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTFCaptureZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTFCaptureZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACTFCaptureZone) \
	NO_API virtual ~ACTFCaptureZone();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_20_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_CALLBACK_WRAPPERS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACTFCaptureZone;

// ********** End Class ACTFCaptureZone ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
