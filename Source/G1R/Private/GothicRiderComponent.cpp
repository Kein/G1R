#include "GothicRiderComponent.h"
#include "Net/UnrealNetwork.h"

UGothicRiderComponent::UGothicRiderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGothicRiderComponent::SetMountCharacter(AGothicCharacter* Character) {
}

AGothicCharacter* UGothicRiderComponent::GetRiderCharacter() const {
    return NULL;
}

AGothicCharacter* UGothicRiderComponent::GetMountCharacter() const {
    return NULL;
}

void UGothicRiderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicRiderComponent, m_Character);
    DOREPLIFETIME(UGothicRiderComponent, m_mountCharacter);
}


