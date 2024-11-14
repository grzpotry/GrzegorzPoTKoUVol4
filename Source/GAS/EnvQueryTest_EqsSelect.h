// Copyright The Knights of Unity. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_EqsSelect.generated.h"


// Code review: [fix formatting as mentioned in GAS.Build.cs].
// Code review: [Move to EQS folder (with .cpp file)]
UCLASS()
class GAS_API UEnvQueryTest_EqsSelect : public UEnvQueryTest
{
	GENERATED_UCLASS_BODY()

	// Code review: [can be private].
	/** context */
	UPROPERTY(EditDefaultsOnly, Category=TestAttributes)
	FName Value;
	UPROPERTY(EditDefaultsOnly, Category=TestAttributes)
	FAIDataProviderFloatValue DefaultValue;
	UPROPERTY(EditDefaultsOnly, Category=TestAttributes)
	FAIDataProviderFloatValue ReferencePoint;

	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;

	virtual FText GetDescriptionTitle() const override;
	virtual FText GetDescriptionDetails() const override;
};


