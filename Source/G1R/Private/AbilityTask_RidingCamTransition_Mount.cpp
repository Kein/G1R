#include "AbilityTask_RidingCamTransition_Mount.h"

UAbilityTask_RidingCamTransition_Mount::UAbilityTask_RidingCamTransition_Mount() {
    this->m_NewCameraConfig = NULL;
    this->m_OldCameraConfig = NULL;
    this->m_InitialFov = 75.00f;
}

void UAbilityTask_RidingCamTransition_Mount::SetCameraConfigWithLerp(UGothicCameraSpringArmComponent* SpringArmComponent, const UCameraDefinition* cameraConfig, float Alpha) {
}

UAbilityTask_RidingCamTransition_Mount* UAbilityTask_RidingCamTransition_Mount::RidingCamTransition(UGameplayAbility* OwningAbility, FName TaskInstanceName, AGothicCharacter* newCharacter, AGothicCharacter* oldCharacter, APlayerController* PlayerController, float taskDuration) {
    return NULL;
}

void UAbilityTask_RidingCamTransition_Mount::OnPlayerControllerPossesScavenger(APawn* OldPawn, APawn* NewPawn) {
}


