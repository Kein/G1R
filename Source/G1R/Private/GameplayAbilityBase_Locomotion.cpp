#include "GameplayAbilityBase_Locomotion.h"

UGameplayAbilityBase_Locomotion::UGameplayAbilityBase_Locomotion() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_LocomotionConfig = NULL;
    this->m_CharacterMovementComponent = NULL;
    this->movementModeChangeTask = NULL;
    this->m_Character = NULL;
}

void UGameplayAbilityBase_Locomotion::MovementModeChanged(TEnumAsByte<EMovementMode> NewMovementMode) {
}


