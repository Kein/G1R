#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_EnterAimingStance.generated.h"

class UAbilityTask_EnterAimingStance;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_EnterAimingStance : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UAbilityTask_EnterAimingStance();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_EnterAimingStance* TaskEnterAimingStance(UGameplayAbility* OwningAbility);
    
};

