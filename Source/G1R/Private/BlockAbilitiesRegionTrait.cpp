#include "BlockAbilitiesRegionTrait.h"

UBlockAbilitiesRegionTrait::UBlockAbilitiesRegionTrait() {
    this->HandleCharacterUniqueNames.AddDefaulted(1);
    this->bCancelBlockedAbilitiesIfActive = false;
}


