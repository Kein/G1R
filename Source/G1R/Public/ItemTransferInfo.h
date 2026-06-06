#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "ItemTransferInfo.generated.h"

class UInventoryMain;

USTRUCT(BlueprintType)
struct FItemTransferInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ToLootContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UInventoryMain* m_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryTypes m_InventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Amount;
    
    G1R_API FItemTransferInfo();
};

