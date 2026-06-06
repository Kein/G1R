#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AttachedItem.h"
#include "EInventoryTypes.h"
#include "EVisualCarrySlot.h"
#include "EWeaponSkill.h"
#include "GothicActorComponentInterface.h"
#include "ItemVirtualData.h"
#include "OnItemEquippedDelegate.h"
#include "OnItemThrowedDelegate.h"
#include "OnItemUnEquippedDelegate.h"
#include "SlotInfo.h"
#include "CarryComponent.generated.h"

class AItemVisual;
class APouchActor;
class UDataModule_Animation;
class UDataModule_Combat;
class UDataModule_Container;
class UGothicAbilitySystemComponent;
class UItemDefinition;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UCarryComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    TArray<FSlotInfo> m_SlotsInfo;
    
    UPROPERTY(Replicated)
    AItemVisual* m_EquippedItem;
    
    UPROPERTY(Replicated, Transient)
    APouchActor* m_Pouch;
    
    UPROPERTY()
    TMap<EInventoryTypes, AItemVisual*> m_VisualAttachedItems;
    
    UPROPERTY()
    TArray<EInventoryTypes> m_InventoriesWithVisualAttach;
    
    UPROPERTY(Replicated, Transient)
    TArray<FAttachedItem> m_MapOfAttachedItems;
    
    UPROPERTY()
    bool m_bIsHidden;
    
    UPROPERTY()
    UDataModule_Combat* m_DataModule_Combat;
    
    UPROPERTY()
    UDataModule_Container* m_DataModule_Container;
    
    UPROPERTY()
    UDataModule_Animation* m_DataModule_Animation;
    
private:
    UPROPERTY(Instanced)
    TMap<EInventoryTypes, UItemDefinition*> m_SafeCheckSlotInvSlot;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemEquipped OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemThrowed OnItemThrowed;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemUnEquipped OnItemUnEquipped;
    
    UCarryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void UnAttachVisualItemIfOtherEquipped(EInventoryTypes invType, int32 SlotId, EVisualCarrySlot carrySlot, bool HasAuthority);
    
protected:
    UFUNCTION(Reliable, Server)
    void UnAttachedItem(EInventoryTypes invType, EVisualCarrySlot carrySlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHiddenInGameByInventoryType(bool NewHidden, EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenInGame(bool NewHidden);
    
    UFUNCTION(Reliable, Server)
    void Server_UI_Attach(EInventoryTypes invType, EInventoryTypes OriginType, bool locallyPredicted);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_ThrowItemB(FItemVirtualData itemToSpawn, const FVector& Origin, const FQuat& rot, const FVector& Impulse);
    
    UFUNCTION(Reliable, Server)
    void Server_ThrowItem(FItemVirtualData itemToSpawn, const FVector& StartPosition, const FQuat& rot, bool isDrop, const FVector& Impulse);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnBasicInventoryItem(FItemVirtualData itemToSpawn, bool mustDrop, const FVector& Origin, const FQuat& rot, const FVector& Impulse, bool isGeneric);
    
    UFUNCTION(Reliable, Server)
    void Server_SetHiddenInGameByInventoryType(bool NewHidden, EInventoryTypes InventoryType);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_SetHiddenInGame(bool NewHidden);
    
public:
    UFUNCTION(BlueprintCallable)
    void RecalculateCurrentWeight();
    
    UFUNCTION()
    void ReAttachIfNeeded(bool locallyPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UnAttachVisual(EVisualCarrySlot carrySlot, EInventoryTypes invType, int32 SlotId, bool locallyPredicted, bool forced);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetHiddenInGameByInventoryType(bool NewHidden, EInventoryTypes InventoryType);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetHiddenInGame(bool NewHidden);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ForceUnequip(UGothicAbilitySystemComponent* gothicAbComp) const;
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DetachAmmo(bool locallyPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AttachVisualItem(EInventoryTypes invType, int32 SlotId, EVisualCarrySlot carrySlot, bool locallyPredicted, UClass* extraData, int32 Magnitude, bool throwing);
    
    UFUNCTION(BlueprintCallable)
    void Local_SetHiddenInGameByInventoryType(bool NewHidden, EInventoryTypes InventoryType);
    
private:
    UFUNCTION()
    void ItemUnequipped();
    
    UFUNCTION()
    void ItemEquipped(AItemVisual* equippedItem);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHidden() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEquippedWeaponLeft();
    
    UFUNCTION(BlueprintCallable)
    bool IsEquippedWeaponAThreat();
    
    UFUNCTION(BlueprintCallable)
    bool IsEquippedWeaponAllowedTraverse();
    
    UFUNCTION()
    void IfEquippedUnAttach(EInventoryTypes invType, int32 SlotId, bool HasAuthority);
    
    UFUNCTION(BlueprintPure)
    EWeaponSkill GetWeaponSkillByType(FGameplayTag ItemTag) const;
    
    UFUNCTION(BlueprintPure)
    EWeaponSkill GetWeaponSkillByDefinition(const UItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintPure)
    AItemVisual* GetItemVisual() const;
    
    UFUNCTION(BlueprintPure)
    UItemDefinition* GetItemDefinition(EVisualCarrySlot Slot) const;
    
    UFUNCTION(BlueprintCallable)
    AItemVisual* GetInventoryItemVisual(EInventoryTypes Inventory);
    
    UFUNCTION(BlueprintPure)
    UItemDefinition* GetEquippedItemDefinition() const;
    
    UFUNCTION(BlueprintPure)
    EWeaponSkill GetCurrentWeaponSkill() const;
    
    UFUNCTION()
    void AttachVisualItemIfNeeded(EInventoryTypes invType, int32 SlotId, EVisualCarrySlot carrySlot, bool HasAuthority, bool throwing);
    
protected:
    UFUNCTION(Reliable, Server)
    void AddAttachedItem(EInventoryTypes invType, int32 Slot, EVisualCarrySlot carrySlot);
    

    // Fix for true pure virtual functions not being implemented
};

