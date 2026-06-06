#include "AbilityTask_TaskSequence.h"

UAbilityTask_TaskSequence::UAbilityTask_TaskSequence() {
    this->CurrentTask = NULL;
}

UAbilityTask_TaskSequence* UAbilityTask_TaskSequence::TaskSequence(UGameplayAbility* OwningAbility, const TArray<UAbilityTaskGeneric*> Tasks) {
    return NULL;
}

void UAbilityTask_TaskSequence::HandleTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAbilityTask_TaskSequence::ExecuteNextTask() {
}

void UAbilityTask_TaskSequence::AddTaskToQueueFront(UAbilityTaskGeneric* Task) {
}

void UAbilityTask_TaskSequence::AddTaskToQueueEnd(UAbilityTaskGeneric* Task) {
}


