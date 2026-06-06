#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "TradingBalance.generated.h"

class AActor;
class UTradingBalanceInventory;

UCLASS(EditInlineNew)
class G1R_API UTradingBalance : public UAlkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTradingBalanceInventory* W_Trading_BalanceSection_Buy;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTradingBalanceInventory* W_Trading_BalanceSection_Sell;
    
private:
    UPROPERTY()
    AActor* NPCInventoryOwner;
    
public:
    UTradingBalance();

protected:
    UFUNCTION(BlueprintCallable)
    void ResetTrading();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableLists(bool _EnableBuy, bool _EnableSell);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AcceptTrading();
    
};

