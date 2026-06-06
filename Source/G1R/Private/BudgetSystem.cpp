#include "BudgetSystem.h"

UBudgetSystem::UBudgetSystem() {
}

void UBudgetSystem::ReportWorkDone(FName WorkloadName, const UObject* ContextObject, double SecondsSpentOnWorkload, int32 NumInvokes) {
}

int32 UBudgetSystem::ProcessPendingWorkUntilBudgetIsReached(FName WorkloadName) {
    return 0;
}

int32 UBudgetSystem::ProcessAllPendingWorkForContext(FName WorkloadName, const UObject* ContextObject) {
    return 0;
}

int32 UBudgetSystem::ProcessAllPendingWork(const UObject* ContextObject) {
    return 0;
}

bool UBudgetSystem::IsInBudget(FName WorkloadName, double TimeLeftSecondsMin) const {
    return false;
}

bool UBudgetSystem::HasAnyPendingWork(FName WorkloadName) const {
    return false;
}

double UBudgetSystem::GetTimeSecondsLeftForWorkloadThisFrame(FName WorkloadName) const {
    return 0.0;
}

void UBudgetSystem::BP_EnqueueOrUpdateWork(FName WorkloadName, FBudgetSystemScriptWorkDelegate Fn, FName Key) {
}

void UBudgetSystem::BP_EnqueueOrUpdateHighPriorityWork(FName WorkloadName, FBudgetSystemScriptWorkDelegate Fn, FName Key) {
}


