#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityTargetData_Posture.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_Posture : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Posture;
    
    FGameplayAbilityTargetData_Posture();
};

