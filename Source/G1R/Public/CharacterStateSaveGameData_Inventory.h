#pragma once
#include "CoreMinimal.h"
#include "ReplicatedInventoryMap.h"
#include "CharacterStateSaveGameData_Inventory.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_Inventory {
    GENERATED_BODY()
public:
    UPROPERTY()
    FReplicatedInventoryMap InventoryItems;
    
    UPROPERTY()
    FReplicatedInventoryMap DefaultInventoryItems;
    
    G1R_API FCharacterStateSaveGameData_Inventory();
};

