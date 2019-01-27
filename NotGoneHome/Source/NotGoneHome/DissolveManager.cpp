// Fill out your copyright notice in the Description page of Project Settings.

#include "DissolveManager.h"

// Sets default values
ADissolveManager::ADissolveManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADissolveManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADissolveManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADissolveManager::SetDissolve(bool dissolving)
{

}

