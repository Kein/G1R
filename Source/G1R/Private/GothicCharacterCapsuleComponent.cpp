#include "GothicCharacterCapsuleComponent.h"

UGothicCharacterCapsuleComponent::UGothicCharacterCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bReturnMaterialOnMove = true;
}


