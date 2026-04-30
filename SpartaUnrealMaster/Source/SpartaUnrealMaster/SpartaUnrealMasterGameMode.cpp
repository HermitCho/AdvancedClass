// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpartaUnrealMasterGameMode.h"
#include "SpartaUnrealMasterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpartaUnrealMasterGameMode::ASpartaUnrealMasterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
