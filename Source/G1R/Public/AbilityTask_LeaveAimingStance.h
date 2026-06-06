#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_LeaveAimingStance.generated.h"

class UAbilityTask_LeaveAimingStance;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_LeaveAimingStance : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UAbilityTask_LeaveAimingStance();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_LeaveAimingStance* TaskLeaveAimingStance(UGameplayAbility* OwningAbility);
    
};

