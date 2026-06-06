#pragma once
#include "CoreMinimal.h"
#include "KnowledgeSet.h"
#include "SingleStorySaveGameData.h"
#include "StoryRegionTraitSaveGameData.h"
#include "Templates/SubclassOf.h"
#include "StorySaveGameData.generated.h"

class UGameStory;
class URegionTrait;

USTRUCT()
struct FStorySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<TSubclassOf<UGameStory>, FSingleStorySaveGameData> SaveDataByStoryClass;
    
    UPROPERTY(SaveGame)
    TMap<FName, FKnowledgeSet> CharacterKnowledgeByUniqueName;
    
    UPROPERTY(SaveGame)
    TMap<TSoftObjectPtr<URegionTrait>, FStoryRegionTraitSaveGameData> RegionTraits;
    
    G1R_API FStorySaveGameData();
};

