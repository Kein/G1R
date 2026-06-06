#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_RainCoverHead.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_RainCoverHead : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TriggerOnRainLevel;
    
    FGameplayAbilityTargetData_RainCoverHead();
};

