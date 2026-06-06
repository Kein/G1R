#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemInShop.h"
#include "TradeListSellItemNew.h"
#include "GothicTraderPayload.generated.h"

UCLASS(Const, NotPlaceable, Transient)
class G1R_API UGothicTraderPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 m_Trader_TotalItems;
    
    UPROPERTY(Transient)
    int32 m_TotalOreCostTrader;
    
    UPROPERTY(Transient)
    int32 m_Trader_Ore;
    
    UPROPERTY(Transient)
    TArray<FItemInShop> m_TraderItems;
    
    UPROPERTY(Transient)
    int32 m_Player_TotalItems;
    
    UPROPERTY(Transient)
    int32 m_TotalOreCostPlayer;
    
    UPROPERTY(Transient)
    int32 m_Player_Ore;
    
    UPROPERTY()
    TArray<FTradeListSellItemNew> m_SellTraderItNew;
    
    UPROPERTY()
    TArray<FTradeListSellItemNew> m_SellPlayerItNew;
    
    UGothicTraderPayload();

};

