#pragma once
#include "CoreMinimal.h"
#include "KnowledgeSet.h"
#include "SingleStorySaveGameData.h"
#include "StoryRegionTraitSaveGameData.h"
#include "Templates/SubclassOf.h"
#include "StorySaveGameData.generated.h"

class UGameStory;
class URegionTrait;

USTRUCT(BlueprintType)
struct FStorySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<TSubclassOf<UGameStory>, FSingleStorySaveGameData> SaveDataByStoryClass;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FKnowledgeSet> CharacterKnowledgeByUniqueName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<TSoftObjectPtr<URegionTrait>, FStoryRegionTraitSaveGameData> RegionTraits;
    
    G1R_API FStorySaveGameData();
};

