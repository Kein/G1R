#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GlobalCrimeDataEntry.h"
#include "GothicCrimeMemorySaveGameLocationMemoryCollection.h"
#include "GothicCrimeMemorySaveGameRelativeCrimeCollection.h"
#include "GothicCrimeMemorySaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FGothicCrimeMemorySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FGlobalCrimeDataEntry> GlobalCrimeDataEntries;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FGothicCrimeMemorySaveGameRelativeCrimeCollection> RelativeCrimeDataEntries;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FGameplayTag, FGothicCrimeMemorySaveGameLocationMemoryCollection> LocationCrimeDataEntries;
    
    G1R_API FGothicCrimeMemorySaveGameData();
};

