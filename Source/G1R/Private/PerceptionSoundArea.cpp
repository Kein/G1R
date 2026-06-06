#include "PerceptionSoundArea.h"

FPerceptionSoundArea::FPerceptionSoundArea() {
    this->Loudness = EPerceptionNoiseLoudness::Silent;
    this->LifeUntilTime = 0.00f;
    this->StartedAtTime = 0.00f;
    this->SoundDuration = 0.00f;
    this->bIsInstantSound = false;
    this->IsBoundToOriginActor = false;
}

