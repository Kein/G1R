#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IgnoredCrimeSetup.generated.h"

USTRUCT(BlueprintType)
struct FIgnoredCrimeSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer AffectedLocations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FGameplayTagContainer> ByGuild;
    
    G1R_API FIgnoredCrimeSetup();
};

