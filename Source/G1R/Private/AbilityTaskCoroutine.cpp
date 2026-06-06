#include "AbilityTaskCoroutine.h"

UAbilityTaskCoroutine::UAbilityTaskCoroutine() {
    this->bIsHighPriorityBudget = false;
}

void UAbilityTaskCoroutine::WaitUntil(float WorldTimeSeconds) {
}

void UAbilityTaskCoroutine::WaitSeconds(float Seconds) {
}

void UAbilityTaskCoroutine::WaitOneTick() {
}

EGenericTaskResult UAbilityTaskCoroutine::WaitForTaskTimeLimited(float CancelAfterSeconds, UAbilityTaskGeneric* Task) {
    return EGenericTaskResult::Success;
}

EGenericTaskResult UAbilityTaskCoroutine::WaitForTask(UAbilityTaskGeneric* Task) {
    return EGenericTaskResult::Success;
}

void UAbilityTaskCoroutine::WaitForEvent(UObject* Object, FName MulticastDelegateName) {
}

void UAbilityTaskCoroutine::StopWaitingAndContinueTask() {
}

void UAbilityTaskCoroutine::PerformAutoTimeskip() {
}

void UAbilityTaskCoroutine::OnKeepRunningConditionUpdate() {
}

void UAbilityTaskCoroutine::OnAwaitedTaskEndedAfterCancelRequest(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAbilityTaskCoroutine::OnAwaitedTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAbilityTaskCoroutine::OnActivate_Implementation() {
}

void UAbilityTaskCoroutine::HandleAwaitedEventRaised() {
}

void UAbilityTaskCoroutine::DoTask_Implementation() {
}

void UAbilityTaskCoroutine::CancelAwaitedTaskAndEndAfterwards() {
}


