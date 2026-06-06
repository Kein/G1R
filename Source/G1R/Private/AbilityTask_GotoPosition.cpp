#include "AbilityTask_GotoPosition.h"

UAbilityTask_GotoPosition::UAbilityTask_GotoPosition() {
}

UAbilityTask_GotoPosition* UAbilityTask_GotoPosition::TaskGotoPosition(UGameplayAbility* OwningAbility, const FVector& TargetPosition, float ReachDistance, bool bCanStrafe) {
    return NULL;
}

bool UAbilityTask_GotoPosition::CanGotoPosition(const AGothicCharacter* Character, FVector TargetPosition, float ReachDistance, bool bCanStrafe) {
    return false;
}


