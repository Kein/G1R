#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DataModule.h"
#include "EInventoryTypes.h"
#include "ItemMapWrapper.h"
#include "ItemPayload.h"
#include "ItemVirtualData.h"
#include "ReplicatedInventoryMap.h"
#include "Templates/SubclassOf.h"
#include "DataModule_Container.generated.h"

class AActor;
class UDataModule_Container;
class UItemDefinition;
class UNiagaraSystem;

UCLASS(BlueprintType)
class G1R_API UDataModule_Container : public UDataModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Replicated)
    FReplicatedInventoryMap m_Inventory;
    
    UPROPERTY(EditAnywhere)
    FReplicatedInventoryMap m_DefaultInventory;
    
    UPROPERTY()
    TMap<EInventoryTypes, FItemMapWrapper> QuickMemoryItems;
    
public:
    UDataModule_Container();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(Reliable, Server)
    void Server_RefreshInventory();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReattachIfNeeded();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickWorldItem(AActor* interactiveActor, bool destroy, UNiagaraSystem* Niagara, bool hasWater, float waterZ, bool canQuick);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_MoveItemTo(int32 FromItemId, EInventoryTypes InventoryFrom, int32 ToItemId, EInventoryTypes InventoryTo);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_MoveItemFromActorToOtherActor(const AActor* Actor, const AActor* OtherActor, int32 ItemPos, EInventoryTypes InventorySlot, int32 Amount, EInventoryTypes targetInventorySlot);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_GetItemsFromContainerInv(UDataModule_Container* ContainerToGetItems, const TArray<int32>& itemsNumListKeys, const TArray<int32>& itemsNumListValues, EInventoryTypes InventoryType, EInventoryTypes inventoryEnd);
    
    UFUNCTION(Reliable, Server)
    void Server_Debug_EmptyInventory();
    
    UFUNCTION(Reliable, Server)
    void Server_ConsumeItemOfType(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount);
    
    UFUNCTION(Reliable, Server)
    void Server_ConsumeItem(EInventoryTypes InventoryType, uint32 ID, int32 ItemAmount);
    
    UFUNCTION(Reliable, Server)
    void Server_AddNewItem(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount, FItemPayload Payload);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddAllItemsFromContainer(UDataModule_Container* ContainerToGetItems, FGameplayTagContainer TagFilter, FGameplayTagContainer tagAdd);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RefreshInventory(FReplicatedInventoryMap Inventory);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PickWorldItem(AActor* interactiveActor, bool destroy, UNiagaraSystem* Niagara, bool hasWater, float waterZ, bool canQuick);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_MoveItemTo(int32 FromItemId, EInventoryTypes InventoryFrom, int32 ToItemId, EInventoryTypes InventoryTo, bool LocalPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_GetItemsFromContainerInv(UDataModule_Container* ContainerToGetItems, const TArray<int32>& itemsNumListKeys, const TArray<int32>& itemsNumListValues, EInventoryTypes InventoryType, EInventoryTypes inventoryEnd, bool LocalPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Debug_EmptyInventory();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ConsumeItemOfType(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount, bool LocalPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ConsumeItem(EInventoryTypes InventoryType, uint32 ID, int32 ItemAmount, bool LocalPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddNewItem(EInventoryTypes InventoryType, TSubclassOf<UItemDefinition> ItemDefinition, int32 ItemAmount, FItemPayload Payload, bool LocalPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddAllItemsFromContainer(UDataModule_Container* ContainerToGetItems, FGameplayTagContainer TagFilter, FGameplayTagContainer tagAdd, bool LocalPredicted);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasItemWithUniqueName(const FName& UniqueName) const;
    
    UFUNCTION(BlueprintPure)
    EInventoryTypes HasItemOnAnyQuickInventory(const TSubclassOf<UItemDefinition>& ItemDefinition) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemOnAnyInventory(const TSubclassOf<UItemDefinition>& ItemDefinition) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemMain(const TSubclassOf<UItemDefinition>& ItemDefinition, int32 itemCount, int32& hasItemCount) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FItemVirtualData> GetItemsInConst(EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FItemVirtualData> GetItemsIn(EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintPure)
    bool GetFirstItemWithUniqueName(TSubclassOf<UItemDefinition>& ItemDefinition, const FName& UniqueName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFirstItemWithType(FGameplayTag ItemType, TSubclassOf<UItemDefinition>& ItemDefinition, EInventoryTypes& InventoryType, int32& SlotId) const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeItemOfTypeOnAnyInventory(TSubclassOf<UItemDefinition> ItemDefinition, int32 itemCount);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeItemOfType(TSubclassOf<UItemDefinition> ItemDefinition, int32 itemCount, EInventoryTypes Inventory);
    
};

