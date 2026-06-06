#include "RagdollComponent.h"
#include "Net/UnrealNetwork.h"

URagdollComponent::URagdollComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_IsRagdollActive = false;
}

void URagdollComponent::Server_SetMeshLocation_Implementation(FVector TargetRagdollLocation) {
}

void URagdollComponent::OnRep_IsRagdollActive() {
}

void URagdollComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URagdollComponent, m_TargetRagdollLocation);
    DOREPLIFETIME(URagdollComponent, m_IsRagdollActive);
}


