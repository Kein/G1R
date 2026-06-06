#include "AbilityTask_InteractWith.h"

UAbilityTask_InteractWith::UAbilityTask_InteractWith() {
    this->ActionDuration = 340282346638528859811704183484516925440.00f;
    this->GotoSpotTask = NULL;
    this->bRequireSpot = false;
    this->bVerifyActionStillPossibleInTick = false;
}

UAbilityTask_InteractWith* UAbilityTask_InteractWith::TaskInteractWithSpotRandomAction(UGameplayAbility* OwningAbility, FInteractionSpotHandle NewInteractionSpot, FGameplayTagContainer NewPossibleActions, float NewActionDuration) {
    return NULL;
}

UAbilityTask_InteractWith* UAbilityTask_InteractWith::TaskInteractWithSpot(UGameplayAbility* OwningAbility, FInteractionSpotHandle NewInteractionSpot, FGameplayTag NewAction, float NewActionDuration) {
    return NULL;
}

UAbilityTask_InteractWith* UAbilityTask_InteractWith::TaskInteractWithActorRandomAction(UGameplayAbility* OwningAbility, AActor* ActorToInteractWith, FGameplayTagContainer NewPossibleActions, float NewActionDuration) {
    return NULL;
}

UAbilityTask_InteractWith* UAbilityTask_InteractWith::TaskInteractWithActor(UGameplayAbility* OwningAbility, AActor* ActorToInteractWith, FGameplayTag NewAction, float NewActionDuration) {
    return NULL;
}

UAbilityTask_InteractWith* UAbilityTask_InteractWith::TaskInteractHereWithoutSpot(UGameplayAbility* OwningAbility, FGameplayTag NewAction, float NewActionDuration) {
    return NULL;
}

UAbilityTask_InteractWith* UAbilityTask_InteractWith::TaskFindAndInteractWithSpotRandomAction(UGameplayAbility* OwningAbility, const FVector& SearchAt, float SearchRadius, FGameplayTagContainer NewPossibleActions, float NewActionDuration) {
    return NULL;
}

UAbilityTask_InteractWith* UAbilityTask_InteractWith::TaskFindAndInteractWithSpot(UGameplayAbility* OwningAbility, const FVector& SearchAt, float SearchRadius, FGameplayTag ActionToDo, float NewActionDuration) {
    return NULL;
}

void UAbilityTask_InteractWith::HandleGotoTaskFinished(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}


