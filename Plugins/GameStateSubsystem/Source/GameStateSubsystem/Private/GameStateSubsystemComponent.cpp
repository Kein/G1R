#include "GameStateSubsystemComponent.h"

UGameStateSubsystemComponent::UGameStateSubsystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateUsingRegisteredSubObjectList = true;
}


