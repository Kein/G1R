#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayTargetDataFilter_GothicCharacter.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayTargetDataFilter_GothicCharacter : public FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    FGameplayTargetDataFilter_GothicCharacter();
};

