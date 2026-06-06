#include "AbilityTask_Parkour.h"

UAbilityTask_Parkour::UAbilityTask_Parkour() {
    this->bIsUsingNavLink = true;
}

UAbilityTask_Parkour* UAbilityTask_Parkour::TaskJumpThenFall(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink) {
    return NULL;
}

UAbilityTask_Parkour* UAbilityTask_Parkour::TaskJumpHorizontal(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink) {
    return NULL;
}

UAbilityTask_Parkour* UAbilityTask_Parkour::TaskDropDown(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink) {
    return NULL;
}

UAbilityTask_Parkour* UAbilityTask_Parkour::TaskClimbUp(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink) {
    return NULL;
}

void UAbilityTask_Parkour::OnFinishedParkour(const FGameplayTag InTag, int32 NewCount) {
}

void UAbilityTask_Parkour::HandleCharacterLanded(const FHitResult& Hit) {
}


