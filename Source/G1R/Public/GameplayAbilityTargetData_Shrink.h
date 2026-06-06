#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_Shrink.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_Shrink : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Duration;
    
    FGameplayAbilityTargetData_Shrink();
};

