#pragma once
#include "CoreMinimal.h"
#include "InventoryBase.h"
#include "ItemInShop.h"
#include "InventoryBaseTrading.generated.h"

UCLASS()
class G1R_API UInventoryBaseTrading : public UInventoryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FItemInShop> FilteredInventoryTrading;
    
public:
    UInventoryBaseTrading();

};

