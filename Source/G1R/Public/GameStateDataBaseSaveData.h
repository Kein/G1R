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
    UPROPERTY()
    TArray<FName> m_DoorsOpen;
    
    UPROPERTY()
    TArray<FName> m_DoorsClosed;
    
    UPROPERTY()
    TMap<FName, float> m_GenericData;
    
    UPROPERTY()
    TArray<FName> m_SavedDoorsMessagesName;
    
    UPROPERTY()
    TArray<FGothicBasicVerbMessage> m_SavedDoorsMessagesStruct;
    
    UPROPERTY()
    TMap<FGuid, FGenericData> m_InteractiveData;
    
    UPROPERTY()
    TMap<FString, FReplicatedInventoryMap> m_SavedInventories;
    
    UPROPERTY()
    TArray<FTraderData> m_Traders;
    
    UPROPERTY()
    TMap<FName, int32> m_CreatureKillCounterSaved;
    
    G1R_API FGameStateDataBaseSaveData();
};

