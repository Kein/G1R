#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "EGenericTaskResult.h"
#include "AbilityTask_TaskSequence.generated.h"

class UAbilityTask_TaskSequence;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_TaskSequence : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UAbilityTaskGeneric*> TasksToExecuteInReverse;
    
    UPROPERTY()
    UAbilityTaskGeneric* CurrentTask;
    
public:
    UAbilityTask_TaskSequence();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TaskSequence* TaskSequence(UGameplayAbility* OwningAbility, const TArray<UAbilityTaskGeneric*> Tasks);
    
protected:
    UFUNCTION()
    void HandleTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void ExecuteNextTask();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTaskToQueueFront(UAbilityTaskGeneric* Task);
    
    UFUNCTION(BlueprintCallable)
    void AddTaskToQueueEnd(UAbilityTaskGeneric* Task);
    
};

