#pragma once
#include "CoreMinimal.h"
#include "SpawnLocation.h"
#include "SpawnLocationArray.generated.h"

USTRUCT(BlueprintType)
struct FSpawnLocationArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FSpawnLocation> SpawnLocations;
    
    G1R_API FSpawnLocationArray();
};

