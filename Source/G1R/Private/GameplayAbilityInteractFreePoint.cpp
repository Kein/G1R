#include "GameplayAbilityInteractFreePoint.h"

UGameplayAbilityInteractFreePoint::UGameplayAbilityInteractFreePoint() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->RootInteractionTask = NULL;
    this->RotateTask = NULL;
    this->bEndRequested = false;
}

void UGameplayAbilityInteractFreePoint::OnRequestEndQuick() {
}

void UGameplayAbilityInteractFreePoint::OnRequestEndNormal() {
}

void UGameplayAbilityInteractFreePoint::OnInteractionTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UGameplayAbilityInteractFreePoint::EndAbilityFromTaskEnd(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}


