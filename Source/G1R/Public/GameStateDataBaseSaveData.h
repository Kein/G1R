#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericData.h"
#include "GothicBasicVerbMessage.h"
#include "ReplicatedInventoryMap.h"
#include "TraderData.h"
#include "GameStateDataBaseSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameStateDataBaseSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> m_DoorsOpen;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> m_DoorsClosed;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, float> m_GenericData;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> m_SavedDoorsMessagesName;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FGothicBasicVerbMessage> m_SavedDoorsMessagesStruct;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGuid, FGenericData> m_InteractiveData;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FString, FReplicatedInventoryMap> m_SavedInventories;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FTraderData> m_Traders;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, int32> m_CreatureKillCounterSaved;
    
    G1R_API FGameStateDataBaseSaveData();
};

