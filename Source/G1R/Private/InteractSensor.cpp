#include "InteractSensor.h"
#include "Net/UnrealNetwork.h"

UInteractSensor::UInteractSensor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SensingInterval = 0.50f;
    this->m_CarryComponent = NULL;
    this->m_FilterActor = NULL;
    this->m_CurrentInteractionActor = NULL;
    this->m_PreviousNearObject = NULL;
    this->m_AIAgentsNameDistance = 0.00f;
    this->m_SensorConfigDefinition = NULL;
}

void UInteractSensor::SetSensingUpdatesEnabled(const bool bEnabled) {
}

void UInteractSensor::Multicast_UnPossessed_Implementation() {
}

void UInteractSensor::Multicast_OnPosses_Implementation(bool IsPlayerControlled) {
}

AActor* UInteractSensor::GetNearestInteraction() {
    return NULL;
}

void UInteractSensor::CheckAndSetTicks(bool IsPlayerControlled, bool forced) {
}

bool UInteractSensor::CanInteract() {
    return false;
}

void UInteractSensor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractSensor, m_CurrentInteractionActor);
}


