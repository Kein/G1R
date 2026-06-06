#include "AudioRegionTrait.h"

UAudioRegionTrait::UAudioRegionTrait() {
    this->bRequireLocalPlayer = true;
    this->bHandleNonPlayerCharacters = false;
    this->ReactionType = EReactionType::ReactToCamera;
    this->SnapshotPriority = 1.00f;
}


