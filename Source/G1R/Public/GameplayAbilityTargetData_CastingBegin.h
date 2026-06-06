#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_CastingBegin.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_CastingBegin : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_SpellLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_TotalLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ManaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CastDuration;
    
    FGameplayAbilityTargetData_CastingBegin();
};

