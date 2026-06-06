#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInventoryTypes.h"
#include "GothicObjectDefinition.h"
#include "ItemPayload.h"
#include "ReplicatedInventoryMap.h"
#include "Templates/SubclassOf.h"
#include "InventoryDefinition.generated.h"

class UItemDefinition;

UCLASS(Abstract, EditInlineNew)
class UInventoryDefinition : public UGothicObjectDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FReplicatedInventoryMap m_Inventory;
    
public:
    UInventoryDefinition();

    UFUNCTION(BlueprintCallable)
    void CreateInventory(EInventoryTypes InventoryType, const FGameplayTagContainer& ItemCategories, int32 Capacity, bool IsInfinite);
    
    UFUNCTION(BlueprintCallable)
    void AddToInventoryWithPayload(TSubclassOf<UItemDefinition> Item, FItemPayload Payload, int32 Amount, EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintCallable)
    void AddToInventory(TSubclassOf<UItemDefinition> Item, int32 Amount, EInventoryTypes InventoryType);
    
};

