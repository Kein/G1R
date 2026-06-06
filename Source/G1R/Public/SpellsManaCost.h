#pragma once
#include "CoreMinimal.h"
#include "SpellsManaCost.generated.h"

USTRUCT(BlueprintType)
struct FSpellsManaCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<float> ActivationCostPerLevel;
    
    UPROPERTY(BlueprintReadOnly)
    float ContinousCost;
    
    G1R_API FSpellsManaCost();
};

