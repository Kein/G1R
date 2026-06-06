#pragma once
#include "CoreMinimal.h"
#include "LocationMemoryCrimeDataEntry.h"
#include "GothicCrimeMemorySaveGameLocationMemoryCollection.generated.h"

USTRUCT()
struct FGothicCrimeMemorySaveGameLocationMemoryCollection {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FLocationMemoryCrimeDataEntry> LocationMemories;
    
    G1R_API FGothicCrimeMemorySaveGameLocationMemoryCollection();
};

