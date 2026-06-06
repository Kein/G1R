#include "AbilityTask_GotoPreferredLocation.h"

UAbilityTask_GotoPreferredLocation::UAbilityTask_GotoPreferredLocation() {
}

UAbilityTask_GotoPreferredLocation* UAbilityTask_GotoPreferredLocation::TaskGotoPreferredLocation(UGameplayAbility* OwningAbility) {
    return NULL;
}

void UAbilityTask_GotoPreferredLocation::HandlePreferredLocationChanged() {
}

bool UAbilityTask_GotoPreferredLocation::CanGotoPreferredLocation(const AGothicCharacter* Character) {
    return false;
}


