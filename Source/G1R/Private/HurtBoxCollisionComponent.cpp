#include "HurtBoxCollisionComponent.h"

UHurtBoxCollisionComponent::UHurtBoxCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->m_Priority = -1;
    this->m_ForcePitchAtZero = false;
    this->GothicBloodComponent = NULL;
}


