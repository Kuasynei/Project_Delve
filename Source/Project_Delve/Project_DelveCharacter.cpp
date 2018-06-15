// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_DelveCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Engine.h"

AProject_DelveCharacter::AProject_DelveCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

}

void AProject_DelveCharacter::BeginPlay()
{
	
}

void AProject_DelveCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void AProject_DelveCharacter::YMovement(float val)
{
	// find out which way is forward
	FRotator Rotation = GetControlRotation();

	// Limit pitch when walking or falling
	if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
	{
		Rotation.Pitch = 0.0f;
	}

	// add movement in that direction
	const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, val);
}

void AProject_DelveCharacter::XMovement(float val)
{
	if (val != 0.0f)
	{
		// find out which way is right
		const FRotator Rotation = GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, val);
	}
}