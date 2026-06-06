#include "AbilityTask_Taunt.h"

UAbilityTask_Taunt::UAbilityTask_Taunt() {
    this->bCanEndEarly = false;
}

UAbilityTask_Taunt* UAbilityTask_Taunt::TaskTauntMatchingAny(UGameplayAbility* OwningAbility, FGameplayTagContainer OneTagRequired, FGameplayTagContainer NewBlockedTags) {
    return NULL;
}

UAbilityTask_Taunt* UAbilityTask_Taunt::TaskTauntMatchingAllAndOne(UGameplayAbility* OwningAbility, FGameplayTagContainer AllTagsRequired, FGameplayTagContainer OneTagRequired, FGameplayTagContainer NewBlockedTags) {
    return NULL;
}

UAbilityTask_Taunt* UAbilityTask_Taunt::TaskTauntMatchingAll(UGameplayAbility* OwningAbility, FGameplayTagContainer AllTagsRequired, FGameplayTagContainer NewBlockedTags) {
    return NULL;
}

UAbilityTask_Taunt* UAbilityTask_Taunt::TaskTaunt(UGameplayAbility* OwningAbility, FGameplayTag TauntTag) {
    return NULL;
}


