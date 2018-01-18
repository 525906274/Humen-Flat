// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "WzjFallFlatGameMode.h"
#include "WzjFallFlatCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWzjFallFlatGameMode::AWzjFallFlatGameMode()
{
	// set default pawn class to our Blueprinted character
	DefaultPawnClass = NULL;

	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
