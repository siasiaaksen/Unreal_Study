// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FirstGameMode.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_250213_API AFirstGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AFirstGameMode();

protected:
	//void BeginPlay();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "First", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AFirstMonsterActor> SpawnSubClass = 0;
};
