#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "EGenericTaskResult.h"
#include "GenericAbilityTask_WaitForTasksToEnd.generated.h"

class UGameplayAbility;
class UGenericAbilityTask_WaitForTasksToEnd;

UCLASS()
class G1R_API UGenericAbilityTask_WaitForTasksToEnd : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UAbilityTaskGeneric*> Tasks;
    
public:
    UGenericAbilityTask_WaitForTasksToEnd();

    UFUNCTION(BlueprintCallable)
    static UGenericAbilityTask_WaitForTasksToEnd* TaskWaitForLastTaskToEnd(UGameplayAbility* OwningAbility, const TArray<UAbilityTaskGeneric*>& NewTasks);
    
    UFUNCTION(BlueprintCallable)
    static UGenericAbilityTask_WaitForTasksToEnd* TaskWaitForFirstTaskToEnd(UGameplayAbility* OwningAbility, const TArray<UAbilityTaskGeneric*>& NewTasks);
    
protected:
    UFUNCTION()
    void OnTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
};

