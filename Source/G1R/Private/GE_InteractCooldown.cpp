#include "GE_InteractCooldown.h"
#include "GameplayEffect.h"

UGE_InteractCooldown::UGE_InteractCooldown() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    //FIXME this->GEComponents.AddDefaulted(1);
}


