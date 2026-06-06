#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "WaitDelayDelegateExtendedDelegate.h"
#include "AbilityTask_WaitDelay_Extended.generated.h"

class UAbilityTask_WaitDelay_Extended;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitDelay_Extended : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitDelayDelegateExtended OnFinish;
    
    UAbilityTask_WaitDelay_Extended();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitDelay_Extended* WaitDelay(UGameplayAbility* OwningAbility, float Time);
    
    UFUNCTION()
    float GetCompletionPercentage();
    
};

