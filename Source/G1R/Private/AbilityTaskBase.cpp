#include "AbilityTaskBase.h"

//FIXME UAbilityTaskBase::UAbilityTaskBase() {
//}

void UAbilityTaskBase::MakeChildOf(UAbilityTaskBase* OtherTask) {
}

bool UAbilityTaskBase::IsDuplicateOf(const UAbilityTaskBase* Other) const {
    return false;
}

UAbilityTaskBase* UAbilityTaskBase::DuplicateTask(UGameplayAbility* ToAbility, UObject* Outer) {
    return NULL;
}

bool UAbilityTaskBase::BP_IsPaused() const {
    return false;
}

bool UAbilityTaskBase::BP_IsFinished() const {
    return false;
}

bool UAbilityTaskBase::BP_IsActive() const {
    return false;
}


