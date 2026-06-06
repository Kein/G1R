#include "MotionDataAsset.h"

UMotionDataAsset::UMotionDataAsset() {
    this->PoseInterval = 0.10f;
    this->MotionMatchConfig = NULL;
    this->JointVelocityCalculationMethod = EJointVelocityCalculationMethod::BodyDependent;
    this->NotifyTriggerMode = ENotifyTriggerMode::HighestWeightedAnimation;
    this->bOptimize = true;
    this->OptimisationModule = NULL;
    this->PreprocessCalibration = NULL;
    this->MirroringProfile = NULL;
    this->bIsProcessed = false;
    this->bIsOptimised = false;
    this->MotionMetaWrapper = NULL;
}


