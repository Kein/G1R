#pragma once
#include "CoreMinimal.h"
#include "StoryRegionTraitSaveGameData.generated.h"

USTRUCT()
struct FStoryRegionTraitSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 NumTimesToTrigger;
    
    G1R_API FStoryRegionTraitSaveGameData();
};

