// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LaserCandyCode.h"
#include "LaserCandyCodePlayerController.h"

ALaserCandyCodePlayerController::ALaserCandyCodePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
