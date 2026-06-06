#include "GothicNiagaraAudioComponent.h"

UGothicNiagaraAudioComponent::UGothicNiagaraAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldPlayWhenInRange = false;
    this->AudioCooldown = 3.00f;
}


