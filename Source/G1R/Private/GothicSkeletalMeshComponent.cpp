#include "GothicSkeletalMeshComponent.h"

UGothicSkeletalMeshComponent::UGothicSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableMaterialParameterCaching = true;
    this->AbilityComp = NULL;
    this->m_GenericAnimClass = NULL;
    this->m_GenericAnimationConfig = NULL;
    this->m_PhysicalBonesConfig = NULL;
    this->m_PhysicalAnimationComponent = NULL;
    this->m_prevLOD = -1;
    this->m_CutBoneInvert = false;
}

void UGothicSkeletalMeshComponent::SetFreezeMaterial(UMaterialInterface* FreezeMaterial) {
}

void UGothicSkeletalMeshComponent::ForceCacheParameterAsDirty() {
}


