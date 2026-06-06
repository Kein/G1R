#include "InteractiveObjectAnchorComponent.h"

UInteractiveObjectAnchorComponent::UInteractiveObjectAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnabled = true;
    this->EntryDirection = EInteractionSpotEntryDirection::Front;
}


