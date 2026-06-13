#pragma once
#include "CoreMinimal.h"
#include "EQuestState.h"
#include "InGameTime.h"
#include "SingleQuestSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FSingleQuestSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    EQuestState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<EQuestState, FInGameTime> StateReachedAtTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FInGameTime> TimeLastViewedByPlayer;
    
    G1R_API FSingleQuestSaveGameData();
};

