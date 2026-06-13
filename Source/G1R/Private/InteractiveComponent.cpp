#include "InteractiveComponent.h"
#include "Net/UnrealNetwork.h"

UInteractiveComponent::UInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateUsingRegisteredSubObjectList = true;
    this->m_InteractItem = NULL;
    this->m_ObjectPeripheralVisionCosine = 0.00f;
    this->m_PlayerPeripheralVisionCosine = 0.00f;
    this->m_IsBeingUsed = false;
    this->m_NumUses = 0;
    this->m_CanBeUsed = true;
    this->m_DontPlayNotification = true;
    this->m_ForceDisableInteraction = false;
    this->m_ForceDisableUI = false;
    this->m_FireVisualComponent = NULL;
    this->m_DoorComponent = NULL;
    this->bCreateInteractionSpots = true;
    this->bAddToWaynet = true;
}

void UInteractiveComponent::SetUsed(bool Value) {
}

void UInteractiveComponent::SetIsBeingUsed(bool Value) {
}

void UInteractiveComponent::SetForceDisableUI(bool Value) {
}

void UInteractiveComponent::SetForceDisableInteraction(bool Value) {
}

void UInteractiveComponent::SetCanBeUsed(bool Value, bool save, bool withNotification) {
}

void UInteractiveComponent::RemoveForever() {
}

bool UInteractiveComponent::MustShowDontUseNotif() const {
    return false;
}

bool UInteractiveComponent::IsUsable() const {
    return false;
}

bool UInteractiveComponent::IsSelectedToInteract() {
    return false;
}

bool UInteractiveComponent::IsBeingUsed() const {
    return false;
}

bool UInteractiveComponent::IsAssociatedToAnActor() {
    return false;
}

float UInteractiveComponent::GetPlayerInteractDistance() const {
    return 0.0f;
}

float UInteractiveComponent::GetPlayerFarInteractDistance() const {
    return 0.0f;
}

float UInteractiveComponent::GetPlayerCloseInteractDistance() const {
    return 0.0f;
}

bool UInteractiveComponent::GetIsBeingUsed() {
    return false;
}

bool UInteractiveComponent::GetForceDisableUI() const {
    return false;
}

bool UInteractiveComponent::GetForceDisableInteraction() const {
    return false;
}

AActor* UInteractiveComponent::GetActorToInteract() {
    return NULL;
}

FText UInteractiveComponent::DisplayName() const {
    return FText::GetEmpty();
}

void UInteractiveComponent::DebugIsUsable() const {
}

void UInteractiveComponent::ClearAssociatedActorToInteract() {
}

bool UInteractiveComponent::CanAnyInteractionSpotBeClaimed(const AGothicCharacterState* UserActor) const {
    return false;
}

bool UInteractiveComponent::BP_TryGetInteractTransform(bool bMustBeVisual, FTransform& OutTransform) {
    return false;
}

void UInteractiveComponent::AssociateActorToInteract(AActor* Actor) {
}

void UInteractiveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractiveComponent, m_InteractItem);
    DOREPLIFETIME(UInteractiveComponent, m_CurrentInteractionConfigs);
    DOREPLIFETIME(UInteractiveComponent, m_ObjectPeripheralVisionCosine);
    DOREPLIFETIME(UInteractiveComponent, m_PlayerPeripheralVisionCosine);
    DOREPLIFETIME(UInteractiveComponent, m_IsBeingUsed);
    DOREPLIFETIME(UInteractiveComponent, m_NumUses);
    DOREPLIFETIME(UInteractiveComponent, m_CanBeUsed);
    DOREPLIFETIME(UInteractiveComponent, m_DontPlayNotification);
    DOREPLIFETIME(UInteractiveComponent, m_ForceDisableInteraction);
    DOREPLIFETIME(UInteractiveComponent, m_ForceDisableUI);
    DOREPLIFETIME(UInteractiveComponent, m_ActorToInteract);
}


