#include "GameplayAbilityCallMount.h"

UGameplayAbilityCallMount::UGameplayAbilityCallMount() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_MountClass = NULL;
    this->m_MountNavigationAreaFilter = NULL;
    this->m_FollowDailyRoutine = NULL;
    this->m_SpawningRadius = 4000.00f;
}

AGothicNPCState* UGameplayAbilityCallMount::SpawnNewMount() const {
    return NULL;
}

void UGameplayAbilityCallMount::OnMountSpawned(AGothicNPCState* NPCState, AGothicCharacter* Character) {
}


