#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_SingleTarget.generated.h"

class AActor;

USTRUCT()
struct G1R_API FGameplayAbilityTargetData_SingleTarget : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Target;
    
    FGameplayAbilityTargetData_SingleTarget();
};

