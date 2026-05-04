// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team22GameMode.h"
#include "Team22Character.h"
#include "UObject/ConstructorHelpers.h"

ATeam22GameMode::ATeam22GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
