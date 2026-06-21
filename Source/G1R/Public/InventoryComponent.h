#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EInventoryTypes.h"
#include "EVisualCarrySlot.h"
#include "Templates/SubclassOf.h"
#include "InventoryComponent.generated.h"

class UArmorDefinition;
class UArmorVisualsDefinition;
class UItemDefinition;
class URuneSpellContainer;
class UWeaponArcheryDefinition;
class UWeaponDefinition;
class UWeaponMeleeDefinition;
class UWeaponRangedDefinition;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacterState, meta=(BlueprintSpawnableComponent))
class G1R_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnequipWeapons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnEquipItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool UnequipArmor();
    
    UFUNCTION(BlueprintCallable)
    bool TakeOutTorch();
    
    UFUNCTION(BlueprintCallable)
    bool TakeOutItemOfKind(TSubclassOf<UItemDefinition> ItemKind);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveItemOfClass(TSubclassOf<UItemDefinition> ItemClass, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveAllItemsOfClass(TSubclassOf<UItemDefinition> ItemClass);
    
protected:
    UFUNCTION()
    void OnItemAddedForHUD(const UItemDefinition* _Item, int32 _Count);
    
    UFUNCTION()
    void MemorizeItem(const UItemDefinition* NewItem, int32 Count);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasTorch() const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemOfTypeInSlot(const TSubclassOf<UItemDefinition> ItemClass, EInventoryTypes InventoryType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemOfTypeInAnyGivenSlot(const TSubclassOf<UItemDefinition> ItemClass, TArray<EInventoryTypes> InventoryTypes) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemOfType(const FGameplayTag& ItemType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemOfClass(TSubclassOf<UItemDefinition> ItemClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasEquippedItemOfType(const FGameplayTag& ItemType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasEquippedItemOfClass(TSubclassOf<UItemDefinition> ItemClass) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UItemDefinition*> GetItemsWithSpec(const FGameplayTag& itemSpec) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UItemDefinition*> GetItemsOfType(const FGameplayTag& ItemType) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UItemDefinition*> GetItemsMatchingAnyTypeOf(const FGameplayTagContainer& ItemTypes) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UItemDefinition*> GetItemsMatchingAnySpecOf(const FGameplayTagContainer& ItemTypes) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UItemDefinition*> GetItemsMatchingAllSpecsOf(const FGameplayTagContainer& ItemTypes) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UItemDefinition*> GetItems() const;
    
    UFUNCTION(BlueprintPure)
    UWeaponRangedDefinition* GetFirstEquippedRangedWeapon() const;
    
    UFUNCTION(BlueprintPure)
    UWeaponMeleeDefinition* GetFirstEquippedMeleeWeapon() const;
    
    UFUNCTION(BlueprintPure)
    UItemDefinition* GetFirstEquippedItemOfClass(const TSubclassOf<UItemDefinition> ItemClass) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UItemDefinition*> GetEquippedItemsOfClass(TSubclassOf<UItemDefinition> ItemClass) const;
    
    UFUNCTION(BlueprintPure)
    UArmorVisualsDefinition* GetEquippedArmorVisualsDefinition() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetEquippedArmorType() const;
    
    UFUNCTION(BlueprintPure)
    UArmorDefinition* GetEquippedArmor() const;
    
    UFUNCTION(BlueprintPure)
    TSet<UWeaponDefinition*> GetAllWeapons() const;
    
    UFUNCTION(BlueprintPure)
    TSet<UWeaponArcheryDefinition*> GetAllRangedWeapons() const;
    
    UFUNCTION(BlueprintPure)
    TSet<UWeaponMeleeDefinition*> GetAllMeleeWeapons() const;
    
    UFUNCTION(BlueprintPure)
    URuneSpellContainer* FindSpellWithAnySpecOf(const FGameplayTagContainer& SpellSpecs) const;
    
    UFUNCTION(BlueprintPure)
    URuneSpellContainer* FindSpellWithAllSpecsOf(const FGameplayTagContainer& SpellSpecs) const;
    
    UFUNCTION(BlueprintPure)
    URuneSpellContainer* FindSpellOfType(const FGameplayTag& SpellItemType) const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipWeaponOfClass(TSubclassOf<UWeaponDefinition> Weapon);
    
    UFUNCTION(BlueprintCallable)
    bool EquipRangedWeaponOfClass(TSubclassOf<UWeaponArcheryDefinition> Weapon);
    
    UFUNCTION(BlueprintCallable)
    bool EquipRangedWeapon(UWeaponArcheryDefinition* Weapon);
    
    UFUNCTION(BlueprintCallable)
    bool EquipMeleeWeaponOfClass(TSubclassOf<UWeaponMeleeDefinition> Weapon);
    
    UFUNCTION(BlueprintCallable)
    bool EquipMeleeWeapon(UWeaponMeleeDefinition* Weapon);
    
    UFUNCTION(BlueprintCallable)
    bool EquipItem(EInventoryTypes Type, int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    bool EquipArmorOfClass(TSubclassOf<UArmorDefinition> Armor);
    
    UFUNCTION(BlueprintCallable)
    bool EquipArmor(UArmorDefinition* Armor);
    
    UFUNCTION(BlueprintCallable)
    bool DetachVisualItemOfKindWithoutAnimation(TSubclassOf<UItemDefinition> ItemKind);
    
    UFUNCTION(BlueprintPure)
    int32 CountItemsOfType(const FGameplayTag& ItemType) const;
    
    UFUNCTION(BlueprintPure)
    int32 CountItemsOfClass(TSubclassOf<UItemDefinition> ItemClass) const;
    
    UFUNCTION(BlueprintPure)
    int32 CountItemOfTypeInSlot(const TSubclassOf<UItemDefinition> ItemClass, EInventoryTypes InventoryType) const;
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeItemOfKind(TSubclassOf<UItemDefinition> ItemKind);
    
    UFUNCTION(BlueprintPure)
    bool CarryItemOfKind(TSubclassOf<UItemDefinition> ItemKind) const;
    
    UFUNCTION(BlueprintPure)
    bool CanEquipItemOfClass(TSubclassOf<UItemDefinition> ItemDefinitionClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool AttachVisualItemOfKindWithoutAnimation(TSubclassOf<UItemDefinition> ItemKind, EVisualCarrySlot AttachTo);
    
    UFUNCTION(BlueprintCallable)
    void AddItemOfClassInventory(TSubclassOf<UItemDefinition> ItemClass, int32 Count, const EInventoryTypes Inventory);
    
    UFUNCTION(BlueprintCallable)
    void AddItemOfClass(TSubclassOf<UItemDefinition> ItemClass, int32 Count);
    
};

