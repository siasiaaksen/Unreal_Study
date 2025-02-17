// Fill out your copyright notice in the Description page of Project Settings.


#include "First/FirstMonsterActor.h"

// Sets default values
AFirstMonsterActor::AFirstMonsterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstMonsterActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstMonsterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

