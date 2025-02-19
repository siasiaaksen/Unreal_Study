// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/ProjectGameInstance.h"
#include <Global/Data/GlobalDataTable.h>


UProjectGameInstance::UProjectGameInstance()
{
	UE_LOG(JAYLOG, Log, TEXT("%S(%u)> DataTableLoading Start"), __FUNCTION__, __LINE__);

	{
		FString DataPath = TEXT("/Script/Engine.DataTable'/Game/BP/Global/Data/DT_GlobalDataTable.DT_GlobalDataTable'");
		ConstructorHelpers::FObjectFinder<UDataTable> FinderDataTables(*DataPath);
		if (true == FinderDataTables.Succeeded())
		{
			DataTables = FinderDataTables.Object;
		}

		if (nullptr != DataTables)
		{
			ActorDataTable = DataTables->FindRow<FDataTableRow>("DT_GlobalActorTable", nullptr)->Resources;
			if (nullptr == ActorDataTable)
			{
				UE_LOG(JAYLOG, Fatal, TEXT("%S(%u)> if (nullptr == ActorDataTable)"), __FUNCTION__, __LINE__);
			}
		}
	}

	UE_LOG(JAYLOG, Log, TEXT("%S(%u)> DataTableLoading End"), __FUNCTION__, __LINE__);
}

UProjectGameInstance::~UProjectGameInstance()
{
}

TSubclassOf<AActor> UProjectGameInstance::GetActorClass(const FString& _Name)
{
	if (nullptr == ActorDataTable)
	{
		UE_LOG(JAYLOG, Error, TEXT("%S(%u)> if (nullptr == ActorDataTable)"), __FUNCTION__, __LINE__);
	}

	FActorClassTableRow* Data = ActorDataTable->FindRow<FActorClassTableRow>(*_Name, nullptr);

	if (nullptr == Data)
	{
		return nullptr;
	}

	return Data->SpawnClass;
}