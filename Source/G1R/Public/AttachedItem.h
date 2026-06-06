#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "EVisualCarrySlot.h"
#include "AttachedItem.generated.h"

USTRUCT(BlueprintType)
struct FAttachedItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    EInventoryTypes m_ItemInvType;
    
    UPROPERTY()
    int32 m_ItemInvSlot;
    
    UPROPERTY()
    EVisualCarrySlot m_ItemCarrySlot;
    
    G1R_API FAttachedItem();
};

