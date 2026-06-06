#include "DoorInteractiveComponent.h"

UDoorInteractiveComponent::UDoorInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CollisionComp = NULL;
    this->m_NavMeshBlockComponent = NULL;
    this->m_InteractiveComponent = NULL;
    this->m_InteractiveActor = NULL;
    this->m_Model = EDoorModel::Normal;
    this->m_DoorExtraData = NULL;
}

void UDoorInteractiveComponent::SetPLayerCollision(bool Enable, AActor* moveIgnoreActor) const {
}

int32 UDoorInteractiveComponent::GetCurrentStep() const {
    return 0;
}


