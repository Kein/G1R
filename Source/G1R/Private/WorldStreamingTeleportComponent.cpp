#include "WorldStreamingTeleportComponent.h"
#include "Net/UnrealNetwork.h"

UWorldStreamingTeleportComponent::UWorldStreamingTeleportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TeleportLocationActor = NULL;
    this->m_WorldPartitionStreamingComponent = NULL;
}

void UWorldStreamingTeleportComponent::ServerNotifyStreamingCompleted_Implementation() {
}

void UWorldStreamingTeleportComponent::OnRep_TeleportLocationActor() {
}

void UWorldStreamingTeleportComponent::ClientNotifyStopTeleport_Implementation() {
}

void UWorldStreamingTeleportComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWorldStreamingTeleportComponent, m_TeleportLocationActor);
}


