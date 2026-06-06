#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "WaitAbilityEndDelegateDelegate.h"
#include "AbilityTask_WaitAbilityEnd.generated.h"

class UAbilityTask_WaitAbilityEnd;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitAbilityEnd : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitAbilityEndDelegate OnEnd;
    
    UAbilityTask_WaitAbilityEnd();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityEnd* WaitForAbilityEnd(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool TriggerOnce);
    
    UFUNCTION()
    void OnAbilityEnd(UGameplayAbility* EndAbility);
    
};

