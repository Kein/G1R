#include "GameplayAbility_MountCheckUnrideableZone.h"

UGameplayAbility_MountCheckUnrideableZone::UGameplayAbility_MountCheckUnrideableZone() {
    this->m_ActivateAbilityOnGranted = true;
    this->m_ExitZoneRoutine = NULL;
}

void UGameplayAbility_MountCheckUnrideableZone::OnTagAdded(const FGameplayTag InTag, int32 NewCount) {
}


