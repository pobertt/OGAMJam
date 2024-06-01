// Copyright Epic Games, Inc. All Rights Reserved.

#include "OGAMProjectGameMode.h"
#include "OGAMProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOGAMProjectGameMode::AOGAMProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
