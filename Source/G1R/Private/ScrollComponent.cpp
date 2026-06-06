#include "ScrollComponent.h"

UScrollComponent::UScrollComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ScrollVisual = NULL;
    this->m_AnimMontage = NULL;
}

void UScrollComponent::SetIsCastFail() {
}

void UScrollComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UScrollComponent::MulticastPlayScrollAnimationSyncWith_Implementation(UAnimMontage* followerAnimMontage, const UAnimMontage* targetAnimMontage) {
}

void UScrollComponent::MulticastPlayScrollAnimation_Implementation(UAnimMontage* AnimMontage) {
}


