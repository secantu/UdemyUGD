// Copyright Epic Games, Inc. All Rights Reserved.

#include "UdemyUGDGameMode.h"
#include "UdemyUGDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyUGDGameMode::AUdemyUGDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TemplateContent/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
