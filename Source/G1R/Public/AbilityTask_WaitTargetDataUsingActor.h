#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "WaitTargetDataUsingActorDelegateDelegate.h"
#include "AbilityTask_WaitTargetDataUsingActor.generated.h"

class AGameplayAbilityTargetActor;
class UAbilityTask_WaitTargetDataUsingActor;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WaitTargetDataUsingActor : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitTargetDataUsingActorDelegate ValidData;
    
    UPROPERTY(BlueprintAssignable)
    FWaitTargetDataUsingActorDelegate Cancelled;
    
protected:
    UPROPERTY()
    AGameplayAbilityTargetActor* TargetActor;
    
public:
    UAbilityTask_WaitTargetDataUsingActor();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitTargetDataUsingActor* WaitTargetDataWithReusableActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, AGameplayAbilityTargetActor* InTargetActor, bool bCreateKeyIfNotValidForMorePredicting);
    
    UFUNCTION()
    void OnTargetDataReplicatedCancelledCallback();
    
    UFUNCTION()
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    
    UFUNCTION()
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION()
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    
};

