// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GASGameMode.generated.h"

// Code review: [Move to Core folder (with .cpp file)]

UCLASS(minimalapi)
class AGASGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGASGameMode();
};



