#include "GameplayEffect_AbilitySet.h"
#include "GameplayEffect.h"
#include "Templates/SubclassOf.h"

UGameplayEffect_AbilitySet::UGameplayEffect_AbilitySet() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    //FIXME this->GEComponents.AddDefaulted(6);
}

void UGameplayEffect_AbilitySet::RemoveAbility(const TSubclassOf<UGameplayAbility>& Ability) {
}

void UGameplayEffect_AbilitySet::AddAbility(const TSubclassOf<UGameplayAbility>& Ability, const EAbilityInputID InputID, const TEnumAsByte<EInputEvent> InputEvent, EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy) {
}


