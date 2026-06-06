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
    UPROPERTY(SaveGame)
    TArray<FGlobalCrimeDataEntry> GlobalCrimeDataEntries;
    
    UPROPERTY(SaveGame)
    TMap<FName, FGothicCrimeMemorySaveGameRelativeCrimeCollection> RelativeCrimeDataEntries;
    
    UPROPERTY(SaveGame)
    TMap<FGameplayTag, FGothicCrimeMemorySaveGameLocationMemoryCollection> LocationCrimeDataEntries;
    
    G1R_API FGothicCrimeMemorySaveGameData();
};

