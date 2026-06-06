#include "GothicAudioComponent.h"

UGothicAudioComponent::UGothicAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->bIgnoreEnvironment = false;
    this->bShouldPlayWhenInRange = true;
    this->bShouldAlwaysPlay = false;
    this->bDestroyWhenOutOfRange = false;
}

void UGothicAudioComponent::SetShouldPlayWhenInRange(bool bValue) {
}

void UGothicAudioComponent::SetShouldAlwaysPlay(bool bValue) {
}

void UGothicAudioComponent::SetDestroyWhenOutOfRange(bool Value) {
}

void UGothicAudioComponent::SetAutoDestroy(bool bValue) {
}

bool UGothicAudioComponent::IsInRange() const {
    return false;
}

bool UGothicAudioComponent::GetShouldPlayWhenInRange() const {
    return false;
}

bool UGothicAudioComponent::GetShouldAlwaysPlay() const {
    return false;
}


