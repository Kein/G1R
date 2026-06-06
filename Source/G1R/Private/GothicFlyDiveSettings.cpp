#include "GothicFlyDiveSettings.h"

FGothicFlyDiveSettings::FGothicFlyDiveSettings() {
    this->UseFlyDiveMinDistance = 0.00f;
    this->GroundedMoveBeforeGoalDistance = 0.00f;
    this->CharacterZDivergeOffset = 0.00f;
    this->AdaptToCollisionSampleZDistance = 0.00f;
    this->MinFocusSampleDistance = 0.00f;
    this->AdaptToNavLinkEndZInterpDistance = 0.00f;
    this->FlyDiveMode = EFlyDiveMode::DivergeHybrid;
    this->AdaptZDivergeMode = EAdaptZDivergeMode::AsTheCrowFlies;
}

