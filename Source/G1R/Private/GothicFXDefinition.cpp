#include "GothicFXDefinition.h"

UGothicFXDefinition::UGothicFXDefinition() {
    this->bIsInstantEffect = true;
    this->PreferenceLayer = 0;
    this->CoolDownTime = 0.00f;
}

void UGothicFXDefinition::PrepareFX_Implementation(AActor* Instigator, const FHitResult& HitResult) {
}


