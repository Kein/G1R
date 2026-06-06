#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayTargetDataFilter_WorldItem.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayTargetDataFilter_WorldItem : public FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    FGameplayTargetDataFilter_WorldItem();
};

