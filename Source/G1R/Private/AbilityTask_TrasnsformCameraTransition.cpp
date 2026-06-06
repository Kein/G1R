#include "AbilityTask_TrasnsformCameraTransition.h"

UAbilityTask_TrasnsformCameraTransition::UAbilityTask_TrasnsformCameraTransition() {
    this->m_NewCameraConfig = NULL;
}

UAbilityTask_TrasnsformCameraTransition* UAbilityTask_TrasnsformCameraTransition::TransformCameraTransition(UGameplayAbility* OwningAbility, FName TaskInstanceName, AGothicCharacter* newCharacter, AGothicCharacter* oldCharacter, APlayerController* PlayerController, bool isReverse, float taskDuration) {
    return NULL;
}

void UAbilityTask_TrasnsformCameraTransition::OnPlayerControllerPosses(APawn* OldPawn, APawn* NewPawn) {
}


