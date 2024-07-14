// Copyright Epic Games, Inc. All Rights Reserved.

#include "HomeworkThirdPersonGameMode.h"
#include "HomeworkThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomeworkThirdPersonGameMode::AHomeworkThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
