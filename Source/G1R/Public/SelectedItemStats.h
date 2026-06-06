#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SelectedItemStats.generated.h"

USTRUCT(BlueprintType)
struct FSelectedItemStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag StatTag;
    
    UPROPERTY(BlueprintReadOnly)
    float StatValue;
    
    G1R_API FSelectedItemStats();
};

