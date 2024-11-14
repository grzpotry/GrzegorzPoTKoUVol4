// Copyright The Knights of Unity. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_EQS_SELECT.generated.h"

UCLASS()
class GAS_API A_EQS_SELECT : public AActor
{
	GENERATED_BODY()

	// Code review: [Move to EQS folder (with .cpp file)]
	// Code review: [Formatting issue - add new line between each declared property and constructor according to ue formatting guidelines (in all files)].
public:	
	// Sets default values for this actor's properties
	A_EQS_SELECT();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EQS_Select")
	FName Option;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EQS_Select")
	TMap<FName, float> FloatMap;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
