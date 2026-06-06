#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_LeaveBlockingStance.generated.h"

class UAbilityTask_LeaveBlockingStance;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_LeaveBlockingStance : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UAbilityTask_LeaveBlockingStance();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_LeaveBlockingStance* TaskLeaveBlockingStance(UGameplayAbility* OwningAbility);
    
};

