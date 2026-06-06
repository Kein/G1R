#include "InteractionSpot.h"

FInteractionSpot::FInteractionSpot() {
    this->bAllowAnyOrientationWhenUsing = false;
    this->bAllowChainingActions = false;
    this->EntryDirection = EInteractionSpotEntryDirection::None;
    this->AreaRadius = 0.00f;
    this->NumAllowedUsers = 0;
    this->Priority = 0.00f;
    this->CooldownDuration = 0.00f;
    this->LastTimeUsed = 0.00f;
}

