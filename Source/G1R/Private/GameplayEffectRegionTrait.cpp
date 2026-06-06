#include "GameplayEffectRegionTrait.h"
#include "GothicAbilitySystemComponent.h"

UGameplayEffectRegionTrait::UGameplayEffectRegionTrait() {
    this->AbilitySystem = CreateDefaultSubobject<UGothicAbilitySystemComponent>(TEXT("AbilitySystem"));
}


