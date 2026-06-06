#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "SlotInfo.generated.h"

class AItemVisual;
class UItemDefinition;

USTRUCT(BlueprintType)
struct FSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    AItemVisual* m_SlotVisual;
    
    UPROPERTY()
    EInventoryTypes m_SlotInvType;
    
    UPROPERTY()
    int32 m_SlotInvSlot;
    
    UPROPERTY(Instanced)
    UItemDefinition* m_SlotDef;
    
    UPROPERTY()
    int32 m_SlotMagnitude;
    
    UPROPERTY()
    UClass* m_ExtraData;
    
    G1R_API FSlotInfo();
};

