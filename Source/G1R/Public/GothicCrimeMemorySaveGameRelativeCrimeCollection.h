#pragma once
#include "CoreMinimal.h"
#include "RelativeCrimeDataEntry.h"
#include "GothicCrimeMemorySaveGameRelativeCrimeCollection.generated.h"

USTRUCT()
struct FGothicCrimeMemorySaveGameRelativeCrimeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FRelativeCrimeDataEntry> RelativeCrimes;
    
    G1R_API FGothicCrimeMemorySaveGameRelativeCrimeCollection();
};

