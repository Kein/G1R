#include "GothicCharacterSubCapsuleComponent.h"

UGothicCharacterSubCapsuleComponent::UGothicCharacterSubCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bUseSystemDefaultObstacleAreaClass = false;
    this->m_UsedForMovementSweep = false;
    this->m_UsedForDeformation = false;
    this->m_ActivatedDuringAttacks = true;
}


