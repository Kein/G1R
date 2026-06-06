#include "InteractionSpotRequirements.h"

FInteractionSpotRequirements::FInteractionSpotRequirements() {
    this->bAlwaysAllowPlayerUse = false;
    this->AllowWhenConditionsAre = EInteractionSpotRequirementsMode::Fulfilled;
}

