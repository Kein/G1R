#include "AlkimiaBodyInstance.h"

FAlkimiaBodyInstance::FAlkimiaBodyInstance() {
    this->ObjectType = ECC_WorldStatic;
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
    this->WalkableSlopeAngle = 0.00f;
    this->WalkableSlopeBehavior = WalkableSlope_Default;
    this->PhysMaterialOverride = NULL;
    this->SimplePhysicsMaterial = NULL;
    this->BodySetupOf = NULL;
}

