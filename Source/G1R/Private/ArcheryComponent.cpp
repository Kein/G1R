#include "ArcheryComponent.h"
#include "Net/UnrealNetwork.h"

UArcheryComponent::UArcheryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ArrowInHand = NULL;
    this->m_CurrentArcheryState = EArcheryState::UnEquipped;
    this->m_AbilitySystemComponent = NULL;
    this->m_AbilityTaskPlayMontage = NULL;
    this->m_AnimInstance = NULL;
}

void UArcheryComponent::ServerSetWantContinueQuickRelease_Implementation(bool wantContinue) {
}

void UArcheryComponent::ServerSetHiddenInGame_Implementation(bool IsHidden) {
}

void UArcheryComponent::ServerReleaseBowString_Implementation(UAnimMontage* AnimMontage, bool isQuickRelease) {
}

void UArcheryComponent::ServerDrawBowString_Implementation() {
}

void UArcheryComponent::OnRep_ChangeState(EArcheryState oldState) {
}

void UArcheryComponent::OnRep_ArrowInHand() {
}

void UArcheryComponent::OnReleaseBowStringOrCrossbow() {
}

void UArcheryComponent::OnQuickReleaseBowString() {
}

void UArcheryComponent::OnNotchInterrupted() {
}

void UArcheryComponent::OnNotchCompleted() {
}

void UArcheryComponent::MulticastSetHiddenInGame_Implementation(bool IsHidden) {
}

void UArcheryComponent::MulticastAttachArrowToHand_Implementation() {
}

bool UArcheryComponent::IsWaitingToFinishRelease() const {
    return false;
}

bool UArcheryComponent::IsSecureToFire() const {
    return false;
}

bool UArcheryComponent::IsNotchingArrowOntoBow() const {
    return false;
}

bool UArcheryComponent::IsAiming() const {
    return false;
}

AArrowVisual* UArcheryComponent::GetCurrentArrow() const {
    return NULL;
}

AArcheryWeaponVisual* UArcheryComponent::GetBowOrCrossbowWeapon() const {
    return NULL;
}

void UArcheryComponent::ChangeState(EArcheryState NewState) {
}

bool UArcheryComponent::CanDoAiming() const {
    return false;
}

void UArcheryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArcheryComponent, m_ArrowInHand);
    DOREPLIFETIME(UArcheryComponent, m_CurrentArcheryState);
}


