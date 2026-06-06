#include "AnimNode_MotionRecorder.h"

FAnimNode_MotionRecorder::FAnimNode_MotionRecorder() {
    this->BodyVelocityRecordMethod = EBodyVelocityMethod::None;
    this->bRetargetPose = false;
}

