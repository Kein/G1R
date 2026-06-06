#include "GothicTrajectoryGenerator_MotionSimphony.h"
#include "Net/UnrealNetwork.h"

UGothicTrajectoryGenerator_MotionSimphony::UGothicTrajectoryGenerator_MotionSimphony(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_OriginalFlattenTrajectory = false;
    this->m_FlattenTrajectoryCrouched = false;
    this->m_MovementComponent = NULL;
    this->m_AnimationComponent = NULL;
    this->m_Camera = NULL;
    this->m_MMConfig = NULL;
    this->m_HistoryTrajectoryMode = EHistoryTrajectoryMode::ActualHistory;
    this->m_Controller = NULL;
    this->m_PathFollowing = NULL;
}

void UGothicTrajectoryGenerator_MotionSimphony::SetTrajectoryInputReplicated(float XAxisValue, float YAxisValue, float ZAxisValue) {
}

void UGothicTrajectoryGenerator_MotionSimphony::SetTrajectoryInputInterp(FVector Input, float Speed, float DeltaTime) {
}

void UGothicTrajectoryGenerator_MotionSimphony::Server_SetInputVector_Implementation(const FVector& NewInputVector) {
}

void UGothicTrajectoryGenerator_MotionSimphony::OnRepInputVector() {
}

void UGothicTrajectoryGenerator_MotionSimphony::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicTrajectoryGenerator_MotionSimphony, m_RepInputVector);
}


