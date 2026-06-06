#include "TrajectoryGenerator.h"

UTrajectoryGenerator::UTrajectoryGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpeed = 400.00f;
    this->MoveResponse = 15.00f;
    this->TurnResponse = 15.00f;
    this->bResetDirectionOnIdle = true;
    this->TrajectoryBehaviour = ETrajectoryMoveMode::Standard;
    this->TrajectoryControlMode = ETrajectoryControlMode::PlayerControlled;
}

void UTrajectoryGenerator::SetStrafeDirectionFromCamera(UCameraComponent* Camera) {
}


