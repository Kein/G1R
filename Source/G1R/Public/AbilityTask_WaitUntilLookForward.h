#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "InputWaitYawSimpleDelegateDelegate.h"
#include "AbilityTask_WaitUntilLookForward.generated.h"

class UAbilityTask_WaitUntilLookForward;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitUntilLookForward : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInputWaitYawSimpleDelegate OnAligned;
    
    UAbilityTask_WaitUntilLookForward();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitUntilLookForward* CreateWaitUntilLookForward(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

