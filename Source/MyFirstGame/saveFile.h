// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "saveFile.generated.h"

UCLASS()
class MYFIRSTGAME_API AsaveFile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AsaveFile();

	//Test messages
	UFUNCTION(BlueprintCallable, Category = "TestingFunctions")
	void testfunction();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
