// Copyright The Knights of Unity. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_Attributes.generated.h"

UENUM()
namespace EEnvTestAttribute
{

	// Code review: [Rename to AttributeType]
	enum AttributeEnum
	{
		Health,
		HealthMax,
		
		Stamina,
		StaminaMax,
		StaminaRegen,
		
		Ammo,
		AmmoMax,
		
		Special,
		SpecialMax,
		
		AttackPower,
		WalkingSpeed
	};
}

// Code review: [Move to EQS folder (with .cpp file)]
UCLASS()
class GAS_API UEnvQueryTest_Attributes : public UEnvQueryTest
{
	GENERATED_UCLASS_BODY()

	// Code review: [can be private]
	/** testing mode */
	UPROPERTY(EditDefaultsOnly, Category=Attribute)
	TEnumAsByte<EEnvTestAttribute::AttributeEnum> AttributeEnumValue;

	// Code review: [can be private]
	UPROPERTY(EditDefaultsOnly, Category=Attribute)
	float ReferencePoint;
	
	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;

	virtual FText GetDescriptionTitle() const override;
	virtual FText GetDescriptionDetails() const override;
};
