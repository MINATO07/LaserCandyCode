// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LaserCandyCode.h"
#include "LaserCandyCodeGameMode.h"
#include "LaserCandyCodePlayerController.h"
#include "LaserCandyCodePawn.h"

ALaserCandyCodeGameMode::ALaserCandyCodeGameMode()
{
	// no pawn by default
	DefaultPawnClass = ALaserCandyCodePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ALaserCandyCodePlayerController::StaticClass();
}
