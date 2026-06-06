#include "InteractiveObjectCenterAnchorComponent.h"
#include "EInteractionSpotEntryDirection.h"

UInteractiveObjectCenterAnchorComponent::UInteractiveObjectCenterAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntryDirection = EInteractionSpotEntryDirection::None;
}


