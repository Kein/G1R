#include "AbilityTask_StateBasedAnimation.h"

UAbilityTask_StateBasedAnimation::UAbilityTask_StateBasedAnimation() {
}

TSet<FName> UAbilityTask_StateBasedAnimation::GetPossibleTransitionsFromState(FName FromState) const {
    return TSet<FName>();
}

TSet<FName> UAbilityTask_StateBasedAnimation::GetAvailableStates() const {
    return TSet<FName>();
}


