#include "AnimNode_PoseMatchBase.h"

FAnimNode_PoseMatchBase::FAnimNode_PoseMatchBase() {
    this->PoseInterval = 0.00f;
    this->PosesEndTime = 0.00f;
    this->BodyVelocityWeight = 0.00f;
    this->bEnableMirroring = false;
    this->MirroringProfile = NULL;
}

