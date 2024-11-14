// Copyright The Knights of Unity. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GASAIController.generated.h"

/**
 * 
 */
UCLASS()
class GAS_API AGASAIController : public AAIController
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void SetTeamId(uint8 TeamId);
};
