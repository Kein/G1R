#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESpellManaUsage.h"
#include "ESpellTargetType.h"
#include "RuneStats.generated.h"

USTRUCT(BlueprintType)
struct FRuneStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 SpellLevels;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> ManaCostScByLevel;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> ManaCostByLevel;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> CastTimeByLevel;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> DamageByLevel;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    ESpellTargetType SpellTargetType;
    
    UPROPERTY(BlueprintReadOnly)
    ESpellManaUsage SpellManaUsage;
    
    G1R_API FRuneStats();
};

