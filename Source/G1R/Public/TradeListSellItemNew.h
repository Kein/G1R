#pragma once
#include "CoreMinimal.h"
#include "TradeListSellItemNew.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FTradeListSellItemNew {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_ItemIndexInItemList;
    
    UPROPERTY()
    int32 m_Price;
    
    UPROPERTY()
    int32 m_Num;
    
    UPROPERTY(Instanced)
    UItemDefinition* m_ItemDef;
    
    G1R_API FTradeListSellItemNew();
};

