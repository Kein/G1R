#pragma once
#include "CoreMinimal.h"
#include "LocationMemoryCrimeDataEntry.h"
#include "GothicCrimeMemorySaveGameLocationMemoryCollection.generated.h"

USTRUCT(BlueprintType)
struct FGothicCrimeMemorySaveGameLocationMemoryCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FLocationMemoryCrimeDataEntry> LocationMemories;
    
    G1R_API FGothicCrimeMemorySaveGameLocationMemoryCollection();
};

