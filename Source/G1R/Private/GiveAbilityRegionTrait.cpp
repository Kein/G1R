#include "GiveAbilityRegionTrait.h"

UGiveAbilityRegionTrait::UGiveAbilityRegionTrait() {
    this->HandleCharacterUniqueNames.AddDefaulted(1);
    this->AbilityToGive = NULL;
    this->AbilityLevel = 1;
    this->bActivateOnGive = true;
    this->bRemoveOnLeave = true;
}


