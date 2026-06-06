#pragma once
#include "CoreMinimal.h"
#include "EQuestState.h"
#include "InGameTime.h"
#include "SingleQuestSaveGameData.generated.h"

USTRUCT()
struct FSingleQuestSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    EQuestState CurrentState;
    
    UPROPERTY(SaveGame)
    TMap<EQuestState, FInGameTime> StateReachedAtTime;
    
    UPROPERTY(SaveGame)
    TMap<FName, FInGameTime> TimeLastViewedByPlayer;
    
    G1R_API FSingleQuestSaveGameData();
};

