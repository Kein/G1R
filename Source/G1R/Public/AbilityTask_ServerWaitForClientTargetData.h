#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/Tasks/AbilityTask_WaitTargetData.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_ServerWaitForClientTargetData.generated.h"

class UAbilityTask_ServerWaitForClientTargetData;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_ServerWaitForClientTargetData : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitTargetDataDelegate ValidData;
    
    UAbilityTask_ServerWaitForClientTargetData();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ServerWaitForClientTargetData* ServerWaitForClientTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, bool TriggerOnce);
    
    UFUNCTION()
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    
};

