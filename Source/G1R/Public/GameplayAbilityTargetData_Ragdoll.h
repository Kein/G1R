#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_Ragdoll.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_Ragdoll : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    FGameplayAbilityTargetData_Ragdoll();
};

