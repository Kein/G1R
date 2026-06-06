#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "BudgetSystemScriptWorkDelegateDelegate.h"
#include "BudgetSystem.generated.h"

class UObject;

UCLASS(BlueprintType)
class G1R_API UBudgetSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UBudgetSystem();

    UFUNCTION(BlueprintCallable)
    void ReportWorkDone(FName WorkloadName, const UObject* ContextObject, double SecondsSpentOnWorkload, int32 NumInvokes);
    
    UFUNCTION(BlueprintCallable)
    int32 ProcessPendingWorkUntilBudgetIsReached(FName WorkloadName);
    
    UFUNCTION(BlueprintCallable)
    int32 ProcessAllPendingWorkForContext(FName WorkloadName, const UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    int32 ProcessAllPendingWork(const UObject* ContextObject);
    
    UFUNCTION(BlueprintPure)
    bool IsInBudget(FName WorkloadName, double TimeLeftSecondsMin) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyPendingWork(FName WorkloadName) const;
    
    UFUNCTION(BlueprintPure)
    double GetTimeSecondsLeftForWorkloadThisFrame(FName WorkloadName) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EnqueueOrUpdateWork(FName WorkloadName, FBudgetSystemScriptWorkDelegate Fn, FName Key);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnqueueOrUpdateHighPriorityWork(FName WorkloadName, FBudgetSystemScriptWorkDelegate Fn, FName Key);
    
};

