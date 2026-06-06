#include "AbilityTask_Eat.h"

UAbilityTask_Eat::UAbilityTask_Eat() {
    this->bEndWhenEnteredState = true;
}

UAbilityTask_Eat* UAbilityTask_Eat::TaskEatSpecificItem(UGameplayAbility* OwningAbility, AItemVisualWorld* Item) {
    return NULL;
}


