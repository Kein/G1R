#include "AbilityTask_AlignCharacterAtLocation.h"

UAbilityTask_AlignCharacterAtLocation::UAbilityTask_AlignCharacterAtLocation() {
    this->bOnFloor = true;
    this->Duration = 0.00f;
    this->SecondsMoved = 0.00f;
    this->EasingFunction = EEasingFunc::EaseInOut;
}

UAbilityTask_AlignCharacterAtLocation* UAbilityTask_AlignCharacterAtLocation::TaskAlignCharacterAtLocation(UGameplayAbility* OwningAbility, const FVector& NewTargetLocation, FRotator NewTargetRotation, float IntendedDuration, bool NewBOnFloor) {
    return NULL;
}


