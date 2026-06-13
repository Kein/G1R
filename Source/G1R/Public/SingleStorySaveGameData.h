#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "SingleQuestSaveGameData.h"
#include "Templates/SubclassOf.h"
#include "SingleStorySaveGameData.generated.h"

class UQuest;

USTRUCT(BlueprintType)
struct FSingleStorySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, int32> StoryPropertyValues;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, EDataLayerRuntimeState> StoryDataLayers;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<TSubclassOf<UQuest>, FSingleQuestSaveGameData> QuestDataByClass;
    
    G1R_API FSingleStorySaveGameData();
};

