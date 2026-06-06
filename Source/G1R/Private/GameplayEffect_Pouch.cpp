#include "GameplayEffect_Pouch.h"
#include "GameplayEffect.h"

UGameplayEffect_Pouch::UGameplayEffect_Pouch() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    //FIXME this->GEComponents.AddDefaulted(6);
}


