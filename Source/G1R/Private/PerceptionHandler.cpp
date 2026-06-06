#include "PerceptionHandler.h"

FPerceptionHandler::FPerceptionHandler() {
    this->bOriginHasToBeACharacter = false;
    this->bTargetHasToBeACharacter = false;
    this->bAffectedHasToBeACharacter = false;
    this->bInstigatorHasToBeACharacter = false;
    this->TickRateSeconds = 0.00f;
    this->MaxDistanceToOther = 0.00f;
    this->MinDistanceToOther = 0.00f;
    this->EntryAwareness = 0.00f;
    this->ExitAwareness = 0.00f;
    this->MaximalPathLength = 0.00f;
    this->MinimalPathLength = 0.00f;
    this->bFilterForCharactersLookingAtSensor = false;
    this->bFilterForCharactersLookingAtAllys = false;
    this->bFilterForCharactersLookingAtSensorOrAllys = false;
    this->bFilterForSensorLookingAtSomeone = false;
    this->bRequireFreeLineOfSight = false;
    this->bRequireInteractiveObject = false;
    this->HandleSensorObjectOwnership = EOwnershipRelationFlags::None;
    this->IgnoreSensorObjectOwnership = EOwnershipRelationFlags::None;
    this->HandleOriginObjectOwnership = EOwnershipRelationFlags::None;
    this->IgnoreOriginObjectOwnership = EOwnershipRelationFlags::None;
    this->HandleItemValue = 0.00f;
    this->DelaySeconds = 0.00f;
    this->DelayVariance = 0.00f;
    this->PerceptionGainedCooldownSeconds = 0.00f;
    this->PerceptionLostCooldownSeconds = 0.00f;
    this->bRequiresSensing = false;
    this->bRequiresOriginToBeInSensorArea = false;
    this->bRequiresOriginToBeInSensorGuildArea = false;
    this->bRequiresOriginToBeInSensorPersonalArea = false;
}

