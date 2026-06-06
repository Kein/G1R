#include "ItemVisual.h"
#include "Net/UnrealNetwork.h"

AItemVisual::AItemVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_IsInMeleeSlot = false;
    this->Item = NULL;
    this->m_IsEquipped = false;
    this->m_ShouldHide = false;
}

void AItemVisual::SetVisibility(bool ShouldBeHidden) {
}

void AItemVisual::Multicast_ItemBeingEquipped_Implementation() {
}

bool AItemVisual::IsEquipped() const {
    return false;
}

bool AItemVisual::HasActionKeyword(FGameplayTag ActionKeyword) {
    return false;
}

TMap<FGameplayTag, UActionKeywords*> AItemVisual::GetAllActionKeywords() const {
    return TMap<FGameplayTag, UActionKeywords*>();
}

UActionKeywords* AItemVisual::GetActionKeywords(FGameplayTag ActionKeyword) {
    return NULL;
}

void AItemVisual::DeactivateAttackKeywordEffect() {
}

void AItemVisual::ActivateAttackKeywordEffect(FGameplayTag AttackKeywordTag) {
}

void AItemVisual::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItemVisual, Item);
    DOREPLIFETIME(AItemVisual, m_IsEquipped);
    DOREPLIFETIME(AItemVisual, m_ShouldHide);
}


