#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityTargetData_Input.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_Input : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Direction;
    
    FGameplayAbilityTargetData_Input();
};

