// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GASAbilitySystemComponent.h"

// Code review: [assign values explicitly to maintain compatibility in case of changing order / removing elements in future]
UENUM(BlueprintType)
enum class EGASAbilityInputID : uint8 {
	None, Confirm, Cancel, Punch, Sprint, Fire, Realod, Nade, Special
};