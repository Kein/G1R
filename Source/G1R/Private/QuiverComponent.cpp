#include "QuiverComponent.h"

UQuiverComponent::UQuiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_QuiverVisual = NULL;
    this->m_QuiverBoltVisual = NULL;
    this->m_QuiverVisualClass = NULL;
    this->m_BoltHolderVisualClass = NULL;
    this->m_HUDAmmoLeftController = NULL;
}

void UQuiverComponent::UpdateBolts(int32 totalAmount, bool bBoltAlreadyOnHand) {
}

void UQuiverComponent::UpdateArrows(int32 totalAmount, bool bArrowAlreadyOnHand) {
}

void UQuiverComponent::ToggleQuiverVisibility(bool ShouldBeHidden) {
}

void UQuiverComponent::ToggleBoltHolderVisibility(bool ShouldBeHidden) {
}

void UQuiverComponent::OnPreItemRemovedInPlayerMainContainer(const FItemVirtualData& RemovedItem, int32 Count) {
}

void UQuiverComponent::OnPostItemRemovedInPlayerMainContainer() {
}

void UQuiverComponent::OnItemAddedInPlayerMainContainer(const UItemDefinition* NewItem, int32 Count) {
}

void UQuiverComponent::OnInventoryQuickItemHasBowOrCrossbow(EInventoryTypes slotType) {
}

int32 UQuiverComponent::GetNumBoltsAvailable() const {
    return 0;
}

int32 UQuiverComponent::GetNumArrowsAvailable() const {
    return 0;
}

TArray<UInstancedStaticMeshComponent*> UQuiverComponent::GetAllInstancedMeshes() {
    return TArray<UInstancedStaticMeshComponent*>();
}

void UQuiverComponent::DisableQuiver() {
}

void UQuiverComponent::DisableBoltHolder() {
}


