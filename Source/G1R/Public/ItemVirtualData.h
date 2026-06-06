#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "ItemPayload.h"
#include "ItemSlot.h"
#include "ItemVirtualData.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FItemVirtualData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryTypes m_InventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemSlot m_SlotData;
    
    UPROPERTY()
    FItemPayload m_Payload;
    
public:
    FItemVirtualData();
};

