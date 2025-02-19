// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GlobalDataTable.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FDataTableRow : public FTableRowBase
{
	GENERATED_BODY()

	FDataTableRow() {}
	~FDataTableRow() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	UDataTable* Resources;
};

USTRUCT(BlueprintType)
struct FActorClassTableRow : public FTableRowBase
{
	GENERATED_BODY()

	FActorClassTableRow() {}
	~FActorClassTableRow() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TSubclassOf<class AActor> SpawnClass;
};
