#include "MixinAbilitySystemComponent.h"

UMixinAbilitySystemComponent::UMixinAbilitySystemComponent() {
}

FGameplayTagContainer UMixinAbilitySystemComponent::FindMatchingOwnedTags(const UAbilitySystemComponent* This, const FGameplayTag& Tag) {
    return FGameplayTagContainer{};
}

FGameplayTag UMixinAbilitySystemComponent::FindMatchingOwnedTag(const UAbilitySystemComponent* This, const FGameplayTag& Tag) {
    return FGameplayTag{};
}


