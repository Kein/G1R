#include "LinkAnchorComponent.h"

ULinkAnchorComponent::ULinkAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->AnchorType = ELinkAnchorType::Start;
}


