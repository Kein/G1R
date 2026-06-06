#include "GameplayAbilitySmashMeatBug.h"

UGameplayAbilitySmashMeatBug::UGameplayAbilitySmashMeatBug() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_UseCameraTarget = false;
    this->m_MoveToLocation = false;
    this->m_UnEquipBefore = false;
    this->m_Distance = 0.00f;
    this->m_DistanceToReposition = 0.00f;
    this->m_CharMontageTask = NULL;
    this->m_AlignTask = NULL;
}


void UGameplayAbilitySmashMeatBug::OnMeatBugSmashed(const FGameplayEventData Payload) {
}


