#include "TeleportActionRegionTrait.h"

UTeleportActionRegionTrait::UTeleportActionRegionTrait() {
    this->HandleCharacterUniqueNames.AddDefaulted(1);
    this->DailyRoutineAfterTeleport = NULL;
    this->bKeepDefeatedStateAfterTeleport = false;
}


