#include "GothicTimeDilationComponent.h"

UGothicTimeDilationComponent::UGothicTimeDilationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_GothicCharacter = NULL;
}

void UGothicTimeDilationComponent::SetDelayedCustomTimerDilatation(float CustomTime, float FreezeDuration, float BlendOutDuration) {
}

void UGothicTimeDilationComponent::SetCustomTimerDilatation(float CustomTime, float Duration) {
}

void UGothicTimeDilationComponent::SetCustomTimeDilation(float CustomTime) {
}

void UGothicTimeDilationComponent::ResetTimeDilatation() {
}

void UGothicTimeDilationComponent::Multicast_SetCustomTimeDilatation_Implementation(float CustomTime) {
}

void UGothicTimeDilationComponent::DeactivatePreviousTimeHandle() {
}

void UGothicTimeDilationComponent::ActiveFreezeFrame(float CustomTime, float FreezeDuration, float BlendOutDuration) {
}


