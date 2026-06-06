#include "TrajectoryGenerator_Base.h"

UTrajectoryGenerator_Base::UTrajectoryGenerator_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionMatchConfig = NULL;
    this->RecordingFrequency = 0.00f;
    this->SampleRate = 20.00f;
    this->bFlattenTrajectory = false;
    this->ActorToModelRotationOffset = 0.00f;
    this->bDebugRandomInput = false;
}

void UTrajectoryGenerator_Base::SetTrajectoryInputZ(float ZAxisValue) {
}

void UTrajectoryGenerator_Base::SetTrajectoryInputY(float YAxisValue) {
}

void UTrajectoryGenerator_Base::SetTrajectoryInputX(float XAxisValue) {
}

void UTrajectoryGenerator_Base::SetTrajectoryInputVector(FVector TrajectoryInput) {
}

void UTrajectoryGenerator_Base::SetTrajectoryInput(float XAxisValue, float YAxisValue, float ZAxisValue) {
}

void UTrajectoryGenerator_Base::SetInputProfile(FInputProfile& InInputProfile) {
}

void UTrajectoryGenerator_Base::SetCharacterSkeletalMeshComponent(USkeletalMeshComponent* InSkelMesh) {
}

bool UTrajectoryGenerator_Base::IsIdle() {
    return false;
}

bool UTrajectoryGenerator_Base::HasMoveInput() {
    return false;
}

FTrajectory UTrajectoryGenerator_Base::GetCurrentTrajectory() {
    return FTrajectory{};
}

void UTrajectoryGenerator_Base::DrawTrajectoryDebug(FVector DrawOffset) {
}

void UTrajectoryGenerator_Base::ClearPastTrajectoryMotion() {
}

void UTrajectoryGenerator_Base::ClearInputProfile() {
}

void UTrajectoryGenerator_Base::ClearFutureTrajectoryMotion() {
}

void UTrajectoryGenerator_Base::ClearAllTrajectoryMotion() {
}


