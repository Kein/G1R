#include "GothicBaseMovementComponent.h"
#include "Net/UnrealNetwork.h"

UGothicBaseMovementComponent::UGothicBaseMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateNavAgentWithOwnersCollision = false;
    this->bProjectNavMeshWalking = true;
    this->bProjectNavMeshOnBothWorldChannels = true;
    this->bHadRootMotion = false;
    this->bWantsSweepWhileNavWalking = true;
}

void UGothicBaseMovementComponent::Client_NavAgentPropsUpdated_Implementation(const FNavAgentProperties& NewNavAgentProps) {
}

void UGothicBaseMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicBaseMovementComponent, bHadRootMotion);
    DOREPLIFETIME(UGothicBaseMovementComponent, bWantsSweepWhileNavWalking);
}


