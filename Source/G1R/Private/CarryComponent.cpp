#include "CarryComponent.h"
#include "Net/UnrealNetwork.h"

UCarryComponent::UCarryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SlotsInfo.AddDefaulted(4);
    this->m_EquippedItem = NULL;
    this->m_Pouch = NULL;
    this->m_InventoriesWithVisualAttach.AddDefaulted(2);
    this->m_bIsHidden = false;
    this->m_DataModule_Combat = NULL;
    this->m_DataModule_Container = NULL;
    this->m_DataModule_Animation = NULL;
}

void UCarryComponent::UnAttachVisualItemIfOtherEquipped(EInventoryTypes invType, int32 SlotId, EVisualCarrySlot carrySlot, bool HasAuthority) {
}

void UCarryComponent::UnAttachedItem_Implementation(EInventoryTypes invType, EVisualCarrySlot carrySlot) {
}

void UCarryComponent::SetHiddenInGameByInventoryType(bool NewHidden, EInventoryTypes InventoryType) {
}

void UCarryComponent::SetHiddenInGame(bool NewHidden) {
}

void UCarryComponent::Server_UI_Attach_Implementation(EInventoryTypes invType, EInventoryTypes OriginType, bool locallyPredicted) {
}

void UCarryComponent::Server_ThrowItemB_Implementation(FItemVirtualData itemToSpawn, const FVector& Origin, const FQuat& rot, const FVector& Impulse) {
}

void UCarryComponent::Server_ThrowItem_Implementation(FItemVirtualData itemToSpawn, const FVector& StartPosition, const FQuat& rot, bool isDrop, const FVector& Impulse) {
}

void UCarryComponent::Server_SpawnBasicInventoryItem_Implementation(FItemVirtualData itemToSpawn, bool mustDrop, const FVector& Origin, const FQuat& rot, const FVector& Impulse, bool isGeneric) {
}
bool UCarryComponent::Server_SpawnBasicInventoryItem_Validate(FItemVirtualData itemToSpawn, bool mustDrop, const FVector& Origin, const FQuat& rot, const FVector& Impulse, bool isGeneric) {
    return true;
}

void UCarryComponent::Server_SetHiddenInGameByInventoryType_Implementation(bool NewHidden, EInventoryTypes InventoryType) {
}

void UCarryComponent::Server_SetHiddenInGame_Implementation(bool NewHidden) {
}

void UCarryComponent::RecalculateCurrentWeight() {
}

void UCarryComponent::ReAttachIfNeeded(bool locallyPredicted) {
}

void UCarryComponent::Multicast_UnAttachVisual_Implementation(EVisualCarrySlot carrySlot, EInventoryTypes invType, int32 SlotId, bool locallyPredicted, bool forced) {
}

void UCarryComponent::Multicast_SetHiddenInGameByInventoryType_Implementation(bool NewHidden, EInventoryTypes InventoryType) {
}

void UCarryComponent::Multicast_SetHiddenInGame_Implementation(bool NewHidden) {
}

void UCarryComponent::Multicast_ForceUnequip_Implementation(UGothicAbilitySystemComponent* gothicAbComp) const {
}

void UCarryComponent::Multicast_DetachAmmo_Implementation(bool locallyPredicted) {
}

void UCarryComponent::Multicast_AttachVisualItem_Implementation(EInventoryTypes invType, int32 SlotId, EVisualCarrySlot carrySlot, bool locallyPredicted, UClass* extraData, int32 Magnitude, bool throwing) {
}

void UCarryComponent::Local_SetHiddenInGameByInventoryType(bool NewHidden, EInventoryTypes InventoryType) {
}

void UCarryComponent::ItemUnequipped() {
}

void UCarryComponent::ItemEquipped(AItemVisual* equippedItem) {
}

bool UCarryComponent::IsHidden() const {
    return false;
}

bool UCarryComponent::IsEquippedWeaponLeft() {
    return false;
}

bool UCarryComponent::IsEquippedWeaponAThreat() {
    return false;
}

bool UCarryComponent::IsEquippedWeaponAllowedTraverse() {
    return false;
}

void UCarryComponent::IfEquippedUnAttach(EInventoryTypes invType, int32 SlotId, bool HasAuthority) {
}

EWeaponSkill UCarryComponent::GetWeaponSkillByType(FGameplayTag ItemTag) const {
    return EWeaponSkill::None;
}

EWeaponSkill UCarryComponent::GetWeaponSkillByDefinition(const UItemDefinition* ItemDefinition) const {
    return EWeaponSkill::None;
}

AItemVisual* UCarryComponent::GetItemVisual() const {
    return NULL;
}

UItemDefinition* UCarryComponent::GetItemDefinition(EVisualCarrySlot Slot) const {
    return NULL;
}

AItemVisual* UCarryComponent::GetInventoryItemVisual(EInventoryTypes Inventory) {
    return NULL;
}

UItemDefinition* UCarryComponent::GetEquippedItemDefinition() const {
    return NULL;
}

EWeaponSkill UCarryComponent::GetCurrentWeaponSkill() const {
    return EWeaponSkill::None;
}

void UCarryComponent::AttachVisualItemIfNeeded(EInventoryTypes invType, int32 SlotId, EVisualCarrySlot carrySlot, bool HasAuthority, bool throwing) {
}

void UCarryComponent::AddAttachedItem_Implementation(EInventoryTypes invType, int32 Slot, EVisualCarrySlot carrySlot) {
}

void UCarryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCarryComponent, m_SlotsInfo);
    DOREPLIFETIME(UCarryComponent, m_EquippedItem);
    DOREPLIFETIME(UCarryComponent, m_Pouch);
    DOREPLIFETIME(UCarryComponent, m_MapOfAttachedItems);
}


