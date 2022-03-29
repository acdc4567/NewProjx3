// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewProjx3GameMode.h"
#include "NewProjx3Character.h"
#include "UObject/ConstructorHelpers.h"

ANewProjx3GameMode::ANewProjx3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
