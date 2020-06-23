// Fill out your copyright notice in the Description page of Project Settings.


#include "saveFile.h"

// Sets default values
AsaveFile::AsaveFile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AsaveFile::testfunction()
{
	UE_LOG(LogTemp, Warning, TEXT("Your message"));
}

// Called when the game starts or when spawned
void AsaveFile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AsaveFile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

