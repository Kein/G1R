#include "DoorAnimInstance.h"

UDoorAnimInstance::UDoorAnimInstance() {
    this->m_State = 0;
    this->m_CurrentState = -100;
    this->m_ForceState = -1;
    this->m_Direction = EInteractionSpotEntryDirection::None;
    this->m_Type = 0;
    this->m_ReceiveImpact = false;
    this->OwningPawn = NULL;
}

void UDoorAnimInstance::SetNavMeshCollision(bool newCollision) {
}

void UDoorAnimInstance::SetDisableDoorChange(bool IsEnabled) {
}

void UDoorAnimInstance::CallDisableTick() {
}


