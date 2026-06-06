#include "GothicFootstepsTrackerActor.h"

AGothicFootstepsTrackerActor::AGothicFootstepsTrackerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicMaterialsColor = NULL;
    this->DecalMaterial = NULL;
    this->DecalSizeFactor = 1.00f;
    this->DecalLifetime = 5.00f;
    this->MaxFeetTracking = 4;
    this->DetectionRadius = 1280.00f;
    this->PlayerController = NULL;
}


