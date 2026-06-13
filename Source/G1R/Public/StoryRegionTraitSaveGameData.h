#pragma once
#include "CoreMinimal.h"
#include "StoryRegionTraitSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FStoryRegionTraitSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 NumTimesToTrigger;
    
    G1R_API FStoryRegionTraitSaveGameData();
};

