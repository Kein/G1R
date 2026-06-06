#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_EnterBlockingStance.generated.h"

class UAbilityTask_EnterBlockingStance;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_EnterBlockingStance : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UAbilityTask_EnterBlockingStance();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_EnterBlockingStance* TaskEnterBlockingStance(UGameplayAbility* OwningAbility);
    
};

