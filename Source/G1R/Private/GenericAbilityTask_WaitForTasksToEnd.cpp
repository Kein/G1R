#include "GenericAbilityTask_WaitForTasksToEnd.h"

UGenericAbilityTask_WaitForTasksToEnd::UGenericAbilityTask_WaitForTasksToEnd() {
}

UGenericAbilityTask_WaitForTasksToEnd* UGenericAbilityTask_WaitForTasksToEnd::TaskWaitForLastTaskToEnd(UGameplayAbility* OwningAbility, const TArray<UAbilityTaskGeneric*>& NewTasks) {
    return NULL;
}

UGenericAbilityTask_WaitForTasksToEnd* UGenericAbilityTask_WaitForTasksToEnd::TaskWaitForFirstTaskToEnd(UGameplayAbility* OwningAbility, const TArray<UAbilityTaskGeneric*>& NewTasks) {
    return NULL;
}

void UGenericAbilityTask_WaitForTasksToEnd::OnTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}


