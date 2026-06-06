#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "SingleQuestSaveGameData.h"
#include "Templates/SubclassOf.h"
#include "SingleStorySaveGameData.generated.h"

class UQuest;

USTRUCT()
struct FSingleStorySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FName, int32> StoryPropertyValues;
    
    UPROPERTY(SaveGame)
    TMap<FName, EDataLayerRuntimeState> StoryDataLayers;
    
    UPROPERTY(SaveGame)
    TMap<TSubclassOf<UQuest>, FSingleQuestSaveGameData> QuestDataByClass;
    
    G1R_API FSingleStorySaveGameData();
};

