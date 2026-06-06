#include "GothicMagicComponent.h"
#include "Net/UnrealNetwork.h"

UGothicMagicComponent::UGothicMagicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_HandHeldItemLastSlotId = -1;
}

void UGothicMagicComponent::UnAttachRightHandScroll() {
}

void UGothicMagicComponent::SetSpawnedActor(AActor* Actor) {
}

void UGothicMagicComponent::ServerThrowInterruptKnockback_Implementation() {
}

void UGothicMagicComponent::ServerThrowInterruptDeath_Implementation() {
}

void UGothicMagicComponent::ServerThrowInterruptAttack_Implementation() {
}

void UGothicMagicComponent::MulticastToggleSpellVisualRuneScrollVisibility_Implementation(bool IsVisible) {
}

void UGothicMagicComponent::InvalidateLastHandHeldItemSlotId() {
}

void UGothicMagicComponent::InterruptByMenuInteraction(FGameplayTag GameplayTag, int32 I) {
}

AActor* UGothicMagicComponent::GetSpawnedActor() {
    return NULL;
}

void UGothicMagicComponent::EquipRightHandScroll() {
}

void UGothicMagicComponent::ConsumeScroll() {
}

void UGothicMagicComponent::ClientThrowInterruptKnockback_Implementation() {
}

void UGothicMagicComponent::ClientThrowInterruptDeath_Implementation() {
}

void UGothicMagicComponent::ClientThrowInterruptAttack_Implementation() {
}

void UGothicMagicComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicMagicComponent, m_HandHeldItemLastSlotId);
}


