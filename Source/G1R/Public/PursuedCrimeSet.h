#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PursuedCrimeSet.generated.h"

USTRUCT(BlueprintType)
struct FPursuedCrimeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, float> CrimeAndSeverity;
    
    G1R_API FPursuedCrimeSet();
};

