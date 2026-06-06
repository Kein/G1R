#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PursuedCrimeSet.h"
#include "PursuedCrimeSetup.generated.h"

USTRUCT(BlueprintType)
struct FPursuedCrimeSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer AffectedLocations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FPursuedCrimeSet> ByGuild;
    
    G1R_API FPursuedCrimeSetup();
};

