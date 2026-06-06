#include "GothicFootstepsDataComponent.h"

UGothicFootstepsDataComponent::UGothicFootstepsDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FootstepTag = NULL;
    this->DisappearFeetEffectTime = 10.00f;
    this->AppearFeetEffectTime = 2.00f;
    this->PhysicMaterialsColor = NULL;
}

void UGothicFootstepsDataComponent::NotifyStepOnMaterial(UPhysicalMaterial* PhysicalMaterial) {
}

FVector UGothicFootstepsDataComponent::GetFootStepTextureSize(FName BoneName) const {
    return FVector{};
}

UMaterialInterface* UGothicFootstepsDataComponent::CreateDynamicFootstepMaterialInstance(UPhysicalMaterial* PhysicalMaterial) const {
    return NULL;
}


