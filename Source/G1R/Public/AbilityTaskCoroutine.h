#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "EGenericTaskResult.h"
#include "AbilityTaskCoroutine.generated.h"

class UObject;

UCLASS(Abstract)
class G1R_API UAbilityTaskCoroutine : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BudgetWorkload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHighPriorityBudget;
    
public:
    UAbilityTaskCoroutine();

    UFUNCTION(BlueprintCallable)
    void WaitUntil(float WorldTimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void WaitSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void WaitOneTick();
    
    UFUNCTION(BlueprintCallable)
    EGenericTaskResult WaitForTaskTimeLimited(float CancelAfterSeconds, UAbilityTaskGeneric* Task);
    
    UFUNCTION(BlueprintCallable)
    EGenericTaskResult WaitForTask(UAbilityTaskGeneric* Task);
    
    UFUNCTION(BlueprintCallable)
    void WaitForEvent(UObject* Object, FName MulticastDelegateName);
    
    UFUNCTION(BlueprintCallable)
    void StopWaitingAndContinueTask();
    
    UFUNCTION(BlueprintCallable)
    void PerformAutoTimeskip();
    
private:
    UFUNCTION()
    void OnKeepRunningConditionUpdate();
    
    UFUNCTION()
    void OnAwaitedTaskEndedAfterCancelRequest(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void OnAwaitedTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnActivate();
    
private:
    UFUNCTION()
    void HandleAwaitedEventRaised();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void DoTask();
    
    UFUNCTION(BlueprintCallable)
    void CancelAwaitedTaskAndEndAfterwards();
    
};

