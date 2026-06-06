#include "DataModuleComponent.h"
#include "Net/UnrealNetwork.h"

UDataModuleComponent::UDataModuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDataModuleComponent::OnRep_DataModules() {
}

void UDataModuleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataModuleComponent, m_DataModules);
}


