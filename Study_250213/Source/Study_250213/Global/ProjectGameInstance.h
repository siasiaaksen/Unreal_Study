// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Study_250213.h"
#include "Global/Data/GlobalDataTable.h"
#include "ProjectGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_250213_API UProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UProjectGameInstance();
	~UProjectGameInstance();

	TSubclassOf<AActor> GetActorClass(const FString& _Name);

private:
	UPROPERTY(VisibleAnywhere, Category = "Data")
	class UDataTable* DataTables = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Data")
	class UDataTable* ActorDataTable = nullptr;
};
