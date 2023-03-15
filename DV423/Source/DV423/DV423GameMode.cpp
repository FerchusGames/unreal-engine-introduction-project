// Copyright Epic Games, Inc. All Rights Reserved.

#include "DV423GameMode.h"
#include "DV423Character.h"
#include "UObject/ConstructorHelpers.h"

ADV423GameMode::ADV423GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
