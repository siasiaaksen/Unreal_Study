// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FirstDataTable.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FFirstMonsterDataRow : public FTableRowBase
{
	GENERATED_BODY()

	FFirstMonsterDataRow() {}
	~FFirstMonsterDataRow() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TSubclassOf<class AFirstMonsterActor> SpawnMonsterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int Hp = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int Att = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float Speed = 10;
};


UCLASS()
class STUDY_250213_API UFirstDataTable : public UObject
{
	GENERATED_BODY()
};
