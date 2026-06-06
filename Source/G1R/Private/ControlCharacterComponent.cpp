#include "ControlCharacterComponent.h"
#include "Net/UnrealNetwork.h"

UControlCharacterComponent::UControlCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CameraModifier = NULL;
}

void UControlCharacterComponent::ServerDoPossessUnPossess_Implementation() {
}

void UControlCharacterComponent::ServerDoFinishControl_Implementation() {
}

void UControlCharacterComponent::MulticastControlStarted_Implementation(float areaRange) {
}

void UControlCharacterComponent::ClientStartCameraTravel_Implementation(float cameraTravelInitialDelay, float cameraTravelDuration, bool isReverse, float warningLevel) {
}

void UControlCharacterComponent::ClientDeactivateControlSpellAbility_Implementation(const AGothicCharacter* controlledCharacter, const FGameplayTag& EventTag, const FGameplayEventData EventData) const {
}

void UControlCharacterComponent::ClientContinueAfterWork_Implementation() {
}

void UControlCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UControlCharacterComponent, m_InstigatorControllerCharacter);
    DOREPLIFETIME(UControlCharacterComponent, m_ControlledAICharacter);
}


