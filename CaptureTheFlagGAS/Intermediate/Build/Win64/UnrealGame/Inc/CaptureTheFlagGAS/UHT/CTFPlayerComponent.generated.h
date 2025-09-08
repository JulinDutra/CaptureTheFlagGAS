// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CTFPlayerComponent.h"

#ifdef CAPTURETHEFLAGGAS_CTFPlayerComponent_generated_h
#error "CTFPlayerComponent.generated.h already included, missing '#pragma once' in CTFPlayerComponent.h"
#endif
#define CAPTURETHEFLAGGAS_CTFPlayerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACTFCaptureZone;
class ACTFFlag;
class ACTFPlayerState;
class UAbilitySystemComponent;
class UCTFPlayerComponent;
enum class ETeam : uint8;
struct FLinearColor;

// ********** Begin Delegate FOnPlayerFlagPickedUpDelegate *****************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_15_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnPlayerFlagPickedUpDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerFlagPickedUpDelegate, ACTFFlag* Flag);


// ********** End Delegate FOnPlayerFlagPickedUpDelegate *******************************************

// ********** Begin Delegate FOnPlayerFlagDroppedDelegate ******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_16_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnPlayerFlagDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerFlagDroppedDelegate, ACTFFlag* Flag);


// ********** End Delegate FOnPlayerFlagDroppedDelegate ********************************************

// ********** Begin Delegate FOnPlayerTeamChangedDelegate ******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_17_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnPlayerTeamChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerTeamChangedDelegate, ETeam OldTeam, ETeam NewTeam);


// ********** End Delegate FOnPlayerTeamChangedDelegate ********************************************

// ********** Begin Delegate FOnHealthChangedDelegate **********************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_18_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnHealthChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedDelegate, float OldHealth, float NewHealth);


// ********** End Delegate FOnHealthChangedDelegate ************************************************

// ********** Begin Delegate FOnEnteredCaptureZoneDelegate *****************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_19_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnEnteredCaptureZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnteredCaptureZoneDelegate, ACTFCaptureZone* Zone);


// ********** End Delegate FOnEnteredCaptureZoneDelegate *******************************************

// ********** Begin Delegate FOnExitedCaptureZoneDelegate ******************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_20_DELEGATE \
CAPTURETHEFLAGGAS_API void FOnExitedCaptureZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnExitedCaptureZoneDelegate, ACTFCaptureZone* Zone);


// ********** End Delegate FOnExitedCaptureZoneDelegate ********************************************

// ********** Begin Class UCTFPlayerComponent ******************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePlayerExitedZone); \
	DECLARE_FUNCTION(execHandlePlayerEnteredZone); \
	DECLARE_FUNCTION(execHandleFlagStatusChanged); \
	DECLARE_FUNCTION(execHandleTeamChanged); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetCTFPlayerState); \
	DECLARE_FUNCTION(execCanCaptureFlag); \
	DECLARE_FUNCTION(execGetCurrentCaptureZone); \
	DECLARE_FUNCTION(execIsInCaptureZone); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execFindNearestCaptureZone); \
	DECLARE_FUNCTION(execFindNearestInteractableFlag); \
	DECLARE_FUNCTION(execDoInteract); \
	DECLARE_FUNCTION(execTryCapture); \
	DECLARE_FUNCTION(execDropFlag); \
	DECLARE_FUNCTION(execTryPickupFlag); \
	DECLARE_FUNCTION(execGetCarriedFlag); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execIsEnemyOf); \
	DECLARE_FUNCTION(execIsOnSameTeam); \
	DECLARE_FUNCTION(execGetTeamColor); \
	DECLARE_FUNCTION(execGetTeam); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execInitializeComponent);


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_CALLBACK_WRAPPERS
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFPlayerComponent_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCTFPlayerComponent(); \
	friend struct Z_Construct_UClass_UCTFPlayerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFPlayerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCTFPlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_UCTFPlayerComponent_NoRegister) \
	DECLARE_SERIALIZER(UCTFPlayerComponent)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCTFPlayerComponent(UCTFPlayerComponent&&) = delete; \
	UCTFPlayerComponent(const UCTFPlayerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCTFPlayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCTFPlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCTFPlayerComponent) \
	NO_API virtual ~UCTFPlayerComponent();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_22_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_CALLBACK_WRAPPERS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCTFPlayerComponent;

// ********** End Class UCTFPlayerComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
