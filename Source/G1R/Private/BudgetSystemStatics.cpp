#include "BudgetSystemStatics.h"

UBudgetSystemStatics::UBudgetSystemStatics() {
}

void UBudgetSystemStatics::UnregisterBudgetedTickingForObject(FName WorkloadName, UObject* Object) {
}

void UBudgetSystemStatics::UnregisterBudgetedTickingForComponent(FName WorkloadName, UActorComponent* Component) {
}

void UBudgetSystemStatics::UnregisterBudgetedTickingForActor(FName WorkloadName, AActor* Actor) {
}

void UBudgetSystemStatics::RegisterBudgetedTickingForComponent(FName WorkloadName, UActorComponent* Component, float TickRateSeconds, FBudgetSystemDynamicTickDelegate OnTick) {
}

void UBudgetSystemStatics::RegisterBudgetedTickingForActor(FName WorkloadName, AActor* Actor, float TickRateSeconds, FBudgetSystemDynamicTickDelegate OnTick) {
}

void UBudgetSystemStatics::EndTickRequest() {
}

void UBudgetSystemStatics::EndHighPriorityTickRequest() {
}

void UBudgetSystemStatics::BumpTickRequestToHighPriority(const UObject* Context, FName WorkloadName, FName Key) {
}

bool UBudgetSystemStatics::BeginTickRequest(const UObject* Context, FName WorkloadName, FName Key, bool bHighPriority) {
    return false;
}

bool UBudgetSystemStatics::BeginHighPriorityTickRequest(const UObject* Context, FName WorkloadName, FName Key) {
    return false;
}


