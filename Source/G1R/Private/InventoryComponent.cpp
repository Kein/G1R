#include "InventoryComponent.h"
#include "Templates/SubclassOf.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UInventoryComponent::UnequipWeapons() {
    return false;
}

void UInventoryComponent::UnEquipItem() const {
}

bool UInventoryComponent::UnequipArmor() {
    return false;
}

bool UInventoryComponent::TakeOutTorch() {
    return false;
}

bool UInventoryComponent::TakeOutItemOfKind(TSubclassOf<UItemDefinition> ItemKind) {
    return false;
}

int32 UInventoryComponent::RemoveItemOfClass(TSubclassOf<UItemDefinition> ItemClass, int32 Count) {
    return 0;
}

int32 UInventoryComponent::RemoveAllItemsOfClass(TSubclassOf<UItemDefinition> ItemClass) {
    return 0;
}

void UInventoryComponent::OnItemAddedForHUD(const UItemDefinition* _Item, int32 _Count) {
}

void UInventoryComponent::MemorizeItem(const UItemDefinition* NewItem, int32 Count) {
}

bool UInventoryComponent::HasTorch() const {
    return false;
}

bool UInventoryComponent::HasItemOfTypeInSlot(const TSubclassOf<UItemDefinition> ItemClass, EInventoryTypes InventoryType) const {
    return false;
}

bool UInventoryComponent::HasItemOfTypeInAnyGivenSlot(const TSubclassOf<UItemDefinition> ItemClass, TArray<EInventoryTypes> InventoryTypes) const {
    return false;
}

bool UInventoryComponent::HasItemOfType(const FGameplayTag& ItemType) const {
    return false;
}

bool UInventoryComponent::HasItemOfClass(TSubclassOf<UItemDefinition> ItemClass) const {
    return false;
}

bool UInventoryComponent::HasEquippedItemOfType(const FGameplayTag& ItemType) const {
    return false;
}

bool UInventoryComponent::HasEquippedItemOfClass(TSubclassOf<UItemDefinition> ItemClass) const {
    return false;
}

TSet<UItemDefinition*> UInventoryComponent::GetItemsWithSpec(const FGameplayTag& itemSpec) const {
    return TSet<UItemDefinition*>();
}

TSet<UItemDefinition*> UInventoryComponent::GetItemsOfType(const FGameplayTag& ItemType) const {
    return TSet<UItemDefinition*>();
}

TSet<UItemDefinition*> UInventoryComponent::GetItemsMatchingAnyTypeOf(const FGameplayTagContainer& ItemTypes) const {
    return TSet<UItemDefinition*>();
}

TSet<UItemDefinition*> UInventoryComponent::GetItemsMatchingAnySpecOf(const FGameplayTagContainer& ItemTypes) const {
    return TSet<UItemDefinition*>();
}

TSet<UItemDefinition*> UInventoryComponent::GetItemsMatchingAllSpecsOf(const FGameplayTagContainer& ItemTypes) const {
    return TSet<UItemDefinition*>();
}

TSet<UItemDefinition*> UInventoryComponent::GetItems() const {
    return TSet<UItemDefinition*>();
}

UWeaponRangedDefinition* UInventoryComponent::GetFirstEquippedRangedWeapon() const {
    return NULL;
}

UWeaponMeleeDefinition* UInventoryComponent::GetFirstEquippedMeleeWeapon() const {
    return NULL;
}

UItemDefinition* UInventoryComponent::GetFirstEquippedItemOfClass(const TSubclassOf<UItemDefinition> ItemClass) const {
    return NULL;
}

TSet<UItemDefinition*> UInventoryComponent::GetEquippedItemsOfClass(TSubclassOf<UItemDefinition> ItemClass) const {
    return TSet<UItemDefinition*>();
}

UArmorVisualsDefinition* UInventoryComponent::GetEquippedArmorVisualsDefinition() const {
    return NULL;
}

FGameplayTag UInventoryComponent::GetEquippedArmorType() const {
    return FGameplayTag{};
}

UArmorDefinition* UInventoryComponent::GetEquippedArmor() const {
    return NULL;
}

TSet<UWeaponDefinition*> UInventoryComponent::GetAllWeapons() const {
    return TSet<UWeaponDefinition*>();
}

TSet<UWeaponArcheryDefinition*> UInventoryComponent::GetAllRangedWeapons() const {
    return TSet<UWeaponArcheryDefinition*>();
}

TSet<UWeaponMeleeDefinition*> UInventoryComponent::GetAllMeleeWeapons() const {
    return TSet<UWeaponMeleeDefinition*>();
}

URuneSpellContainer* UInventoryComponent::FindSpellWithAnySpecOf(const FGameplayTagContainer& SpellSpecs) const {
    return NULL;
}

URuneSpellContainer* UInventoryComponent::FindSpellWithAllSpecsOf(const FGameplayTagContainer& SpellSpecs) const {
    return NULL;
}

URuneSpellContainer* UInventoryComponent::FindSpellOfType(const FGameplayTag& SpellItemType) const {
    return NULL;
}

bool UInventoryComponent::EquipWeaponOfClass(TSubclassOf<UWeaponDefinition> Weapon) {
    return false;
}

bool UInventoryComponent::EquipRangedWeaponOfClass(TSubclassOf<UWeaponArcheryDefinition> Weapon) {
    return false;
}

bool UInventoryComponent::EquipRangedWeapon(UWeaponArcheryDefinition* Weapon) {
    return false;
}

bool UInventoryComponent::EquipMeleeWeaponOfClass(TSubclassOf<UWeaponMeleeDefinition> Weapon) {
    return false;
}

bool UInventoryComponent::EquipMeleeWeapon(UWeaponMeleeDefinition* Weapon) {
    return false;
}

bool UInventoryComponent::EquipItem(EInventoryTypes Type, int32 Slot) {
    return false;
}

bool UInventoryComponent::EquipArmorOfClass(TSubclassOf<UArmorDefinition> Armor) {
    return false;
}

bool UInventoryComponent::EquipArmor(UArmorDefinition* Armor) {
    return false;
}

bool UInventoryComponent::DetachVisualItemOfKindWithoutAnimation(TSubclassOf<UItemDefinition> ItemKind) {
    return false;
}

int32 UInventoryComponent::CountItemsOfType(const FGameplayTag& ItemType) const {
    return 0;
}

int32 UInventoryComponent::CountItemsOfClass(TSubclassOf<UItemDefinition> ItemClass) const {
    return 0;
}

int32 UInventoryComponent::CountItemOfTypeInSlot(const TSubclassOf<UItemDefinition> ItemClass, EInventoryTypes InventoryType) const {
    return 0;
}

bool UInventoryComponent::ConsumeItemOfKind(TSubclassOf<UItemDefinition> ItemKind) {
    return false;
}

bool UInventoryComponent::CarryItemOfKind(TSubclassOf<UItemDefinition> ItemKind) const {
    return false;
}

bool UInventoryComponent::CanEquipItemOfClass(TSubclassOf<UItemDefinition> ItemDefinitionClass) const {
    return false;
}

bool UInventoryComponent::AttachVisualItemOfKindWithoutAnimation(TSubclassOf<UItemDefinition> ItemKind, EVisualCarrySlot AttachTo) {
    return false;
}

void UInventoryComponent::AddItemOfClassInventory(TSubclassOf<UItemDefinition> ItemClass, int32 Count, const EInventoryTypes Inventory) {
}

void UInventoryComponent::AddItemOfClass(TSubclassOf<UItemDefinition> ItemClass, int32 Count) {
}


