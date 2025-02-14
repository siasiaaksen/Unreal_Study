// Fill out your copyright notice in the Description page of Project Settings.


#include "First/FirstPawn.h"

// Sets default values
AFirstPawn::AFirstPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;  

}

// Called when the game starts or when spawned
void AFirstPawn::BeginPlay()
{
#ifdef WITH_EDITOR
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "CPP BeginPlay Prev");
#endif

	Super::BeginPlay();

#ifdef WITH_EDITOR
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "CPP BeginPlay Next");
#endif
}

// Called every frame
void AFirstPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFirstPawn::FirstPawnFunction(int _Value)
{
	int a = 0;
}

