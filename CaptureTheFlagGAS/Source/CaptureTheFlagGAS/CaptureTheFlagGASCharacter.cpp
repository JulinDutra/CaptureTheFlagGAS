// Copyright Epic Games, Inc. All Rights Reserved.

#include "CaptureTheFlagGASCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "GAS/CTFAttributeSet.h"
#include "GameFramework/CTFPlayerState.h"
#include "GameFramework/CTFGameState.h"
#include "Components/CTFPlayerComponent.h"
#include "Engine/World.h"
#include "CaptureTheFlagGAS.h"

ACaptureTheFlagGASCharacter::ACaptureTheFlagGASCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	
	// Initialize GAS components (will be set from PlayerState)
	AbilitySystemComponent = nullptr;
	AttributeSet = nullptr;
	
	// Initialize cached references
	CTFPlayerState = nullptr;
	CTFGameState = nullptr;
	
	// Create CTF Player Component
	CTFPlayerComponent = CreateDefaultSubobject<UCTFPlayerComponent>(TEXT("CTFPlayerComponent"));
	
	// Create the first person mesh that will be viewed only by this character's owner
	FirstPersonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("First Person Mesh"));

	FirstPersonMesh->SetupAttachment(GetMesh());
	FirstPersonMesh->SetOnlyOwnerSee(true);
	FirstPersonMesh->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
	FirstPersonMesh->SetCollisionProfileName(FName("NoCollision"));

	// Create the Camera Component	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCameraComponent->SetupAttachment(FirstPersonMesh, FName("head"));
	FirstPersonCameraComponent->SetRelativeLocationAndRotation(FVector(-2.8f, 5.89f, 0.0f), FRotator(0.0f, 90.0f, -90.0f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	FirstPersonCameraComponent->bEnableFirstPersonFieldOfView = true;
	FirstPersonCameraComponent->bEnableFirstPersonScale = true;
	FirstPersonCameraComponent->FirstPersonFieldOfView = 70.0f;
	FirstPersonCameraComponent->FirstPersonScale = 0.6f;

	// configure the character comps
	GetMesh()->SetOwnerNoSee(true);
	GetMesh()->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::WorldSpaceRepresentation;

	GetCapsuleComponent()->SetCapsuleSize(34.0f, 96.0f);

	// Configure character movement
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
	GetCharacterMovement()->AirControl = 0.5f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void ACaptureTheFlagGASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	// Cache game state
	CTFGameState = GetWorld()->GetGameState<ACTFGameState>();
}

void ACaptureTheFlagGASCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	// Server only
	if (IsValid(NewController))
	{
		CTFPlayerState = NewController->GetPlayerState<ACTFPlayerState>();
		InitializeAbilitySystem();
		InitializeCTFComponent();
	}
}

void ACaptureTheFlagGASCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	// Client only
	CTFPlayerState = GetPlayerState<ACTFPlayerState>();
	InitializeAbilitySystem();
	InitializeCTFComponent();
}

void ACaptureTheFlagGASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// Update movement speed based on attributes
	UpdateMovementSpeed();
	
	// Monitor health changes (simple approach)
	static float LastHealth = -1.0f;
	const float CurrentHealth = GetHealth();
	if (LastHealth != CurrentHealth && LastHealth >= 0.0f)
	{
		OnHealthAttributeChanged();
	}
	LastHealth = CurrentHealth;
}

UAbilitySystemComponent* ACaptureTheFlagGASCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ACaptureTheFlagGASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	UE_LOG(LogTemp, Error, TEXT("SetupPlayerInputComponent called - SETTING UP INPUT"));
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACaptureTheFlagGASCharacter::DoJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACaptureTheFlagGASCharacter::DoJumpEnd);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACaptureTheFlagGASCharacter::MoveInput);

		// Looking/Aiming
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACaptureTheFlagGASCharacter::LookInput);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &ACaptureTheFlagGASCharacter::LookInput);
		
		// Interaction
		if (IsValid(InteractAction))
		{
			EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ACaptureTheFlagGASCharacter::InteractInput);
		}
	}
	else
	{
		UE_LOG(LogCaptureTheFlagGAS, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void ACaptureTheFlagGASCharacter::MoveInput(const FInputActionValue& Value)
{
	// get the Vector2D move axis
	FVector2D MovementVector = Value.Get<FVector2D>();

	// pass the axis values to the move input
	DoMove(MovementVector.X, MovementVector.Y);
}

void ACaptureTheFlagGASCharacter::LookInput(const FInputActionValue& Value)
{
	// get the Vector2D look axis
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// pass the axis values to the aim input
	DoAim(LookAxisVector.X, LookAxisVector.Y);

}

void ACaptureTheFlagGASCharacter::DoAim(float Yaw, float Pitch)
{
	if (GetController())
	{
		// pass the rotation inputs
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void ACaptureTheFlagGASCharacter::DoMove(float Right, float Forward)
{
	if (GetController())
	{
		// pass the move inputs
		AddMovementInput(GetActorRightVector(), Right);
		AddMovementInput(GetActorForwardVector(), Forward);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("DoMove: No Controller!"));
	}
}

void ACaptureTheFlagGASCharacter::DoJumpStart()
{
	// pass Jump to the character
	Jump();
}

void ACaptureTheFlagGASCharacter::DoJumpEnd()
{
	// pass StopJumping to the character
	StopJumping();
}

void ACaptureTheFlagGASCharacter::InteractInput(const FInputActionValue& Value)
{
	DoInteract();
}

void ACaptureTheFlagGASCharacter::DoInteract()
{
	// Delegate to CTF Player Component
	if (IsValid(CTFPlayerComponent))
	{
		CTFPlayerComponent->DoInteract();
	}
}

// Component Access
UCTFPlayerComponent* ACaptureTheFlagGASCharacter::GetCTFPlayerComponent() const
{
	return CTFPlayerComponent;
}

// Combat
void ACaptureTheFlagGASCharacter::OnKilled(ACaptureTheFlagGASCharacter* Killer)
{
	if (IsValid(CTFPlayerState))
	{
		CTFPlayerState->OnPlayerKilled();
	}
	
	// Disable input
	EnableInput(nullptr);
	
	// Hide character
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void ACaptureTheFlagGASCharacter::OnRespawn()
{
	if (IsValid(CTFPlayerState))
	{
		CTFPlayerState->OnPlayerRespawned();
	}
	
	// Re-enable input
	if (IsValid(GetController()))
	{
		EnableInput(Cast<APlayerController>(GetController()));
	}
	
	// Show character
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}

// Attribute Access
float ACaptureTheFlagGASCharacter::GetHealth() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetHealth();
	}
	return 0.0f;
}

float ACaptureTheFlagGASCharacter::GetMaxHealth() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxHealth();
	}
	return 0.0f;
}

float ACaptureTheFlagGASCharacter::GetHealthPercentage() const
{
	const float MaxHealth = GetMaxHealth();
	if (MaxHealth > 0.0f)
	{
		return GetHealth() / MaxHealth;
	}
	return 0.0f;
}

bool ACaptureTheFlagGASCharacter::IsAlive() const
{
	return GetHealth() > 0.0f;
}

// Internal Functions
void ACaptureTheFlagGASCharacter::InitializeAbilitySystem()
{
	if (IsValid(CTFPlayerState))
	{
		AbilitySystemComponent = CTFPlayerState->GetAbilitySystemComponent();
		AttributeSet = Cast<UCTFAttributeSet>(CTFPlayerState->GetAbilitySystemComponent()->GetAttributeSet(UCTFAttributeSet::StaticClass()));
		
		if (IsValid(AbilitySystemComponent))
		{
			AbilitySystemComponent->InitAbilityActorInfo(CTFPlayerState, this);
			SetupAttributeChangeCallbacks();
		}
		
		// GAS initialization complete
	}
}

void ACaptureTheFlagGASCharacter::InitializeCTFComponent()
{
	if (IsValid(CTFPlayerComponent))
	{
		CTFPlayerComponent->InitializeComponent();
	}
}

void ACaptureTheFlagGASCharacter::UpdateMovementSpeed()
{
	if (IsValid(AttributeSet) && IsValid(GetCharacterMovement()) && IsValid(CTFPlayerComponent))
	{
		const float BaseSpeed = AttributeSet->GetMovementSpeed();
		const float SpeedMultiplier = AttributeSet->GetMovementSpeedMultiplier();
		const float FlagMultiplier = CTFPlayerComponent->HasFlag() ? AttributeSet->GetFlagSpeedMultiplier() : 1.0f;
		
		const float FinalSpeed = BaseSpeed * SpeedMultiplier * FlagMultiplier;
		GetCharacterMovement()->MaxWalkSpeed = FinalSpeed;
	}
}

void ACaptureTheFlagGASCharacter::SetupAttributeChangeCallbacks()
{
	// Simplified callback setup - will monitor attributes via Tick instead
	// This avoids complex delegate binding issues during compilation
}

void ACaptureTheFlagGASCharacter::OnHealthAttributeChanged()
{
	const float CurrentHealth = GetHealth();
	const float MaxHealth = GetMaxHealth();
	OnHealthChanged(CurrentHealth, MaxHealth);
	
	// Check for death
	if (CurrentHealth <= 0.0f)
	{
		OnKilled(nullptr);
	}
}

void ACaptureTheFlagGASCharacter::OnMovementSpeedAttributeChanged()
{
	UpdateMovementSpeed();
}
