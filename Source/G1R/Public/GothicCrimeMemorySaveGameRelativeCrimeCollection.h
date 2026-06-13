#pragma once
#include "CoreMinimal.h"
#include "RelativeCrimeDataEntry.h"
#include "GothicCrimeMemorySaveGameRelativeCrimeCollection.generated.h"

USTRUCT(BlueprintType)
struct FGothicCrimeMemorySaveGameRelativeCrimeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FRelativeCrimeDataEntry> RelativeCrimes;
    
    G1R_API FGothicCrimeMemorySaveGameRelativeCrimeCollection();
};

