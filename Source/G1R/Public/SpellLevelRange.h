#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpellLevelRange.generated.h"

class UScriptGameplayAbility;
class USpellConfigLevelData;

USTRUCT(BlueprintType)
struct FSpellLevelRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CastTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CastManaCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ManaCostSc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UScriptGameplayAbility> m_SpellClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USpellConfigLevelData> m_SpellConfigLevelData;
    
    G1R_API FSpellLevelRange();
};

