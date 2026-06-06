#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlkUserWidget.h"
#include "EInventoryOpenedStates.h"
#include "EInventoryTypes.h"
#include "ItemTooltipInfo.h"
#include "TradingBalanceInventory.generated.h"

class AActor;
class UDiscreteItemViewWidget;
class UGothicTraderPayload;
class UInventoryBaseTrading;
class UInventoryMain;
class UInventorySlotData;

UCLASS(EditInlineNew)
class G1R_API UTradingBalanceInventory : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemTooltipDelegate, const FItemTooltipInfo&, ItemTooltipInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FItemTooltipDelegate m_OnItemTooltipChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UDiscreteItemViewWidget* TileView_Items;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle PreviousFilterInputActionData;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle NextFilterInputActionData;
    
private:
    UPROPERTY()
    UInventoryBaseTrading* m_InventoryBaseTrading;
    
    UPROPERTY(Instanced)
    UInventoryMain* m_LinkedInventoryMain;
    
    UPROPERTY()
    AActor* m_InventoryOwner;
    
    UPROPERTY()
    UGothicTraderPayload* m_GothicTraderPayload;
    
    UPROPERTY()
    EInventoryOpenedStates m_InventoryOpenedState;
    
public:
    UTradingBalanceInventory();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidgetBP();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<UInventorySlotData*> UpdateInventory();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void TradingInventoryClickedBP(int32 ItemId, EInventoryTypes InventoryType, int32 ItemMaxAmount);
    
    UFUNCTION()
    void TradingInventoryClicked(int32 ItemId, EInventoryTypes InventoryType, int32 ItemAmount, UInventoryMain* InventoryMain);
    
    UFUNCTION(BlueprintCallable)
    void RefreshInventory();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemIsHoveredChangedInfo(const FItemTooltipInfo ItemTooltipInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemClicked(int32 ItemId, EInventoryTypes _InventoryType, int32 ItemAmount);
    
private:
    UFUNCTION()
    void NativeOnInitialized();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Initialization_BP();
    
    UFUNCTION(BlueprintCallable)
    void HowManyItemsToTrade(int32 ItemId, EInventoryTypes eInventoryType, int32 ItemAmount, bool GettingItemsBack);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePreviousFilterAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleNextFilterAction();
    
public:
    UFUNCTION(BlueprintPure)
    FItemTooltipInfo GetSelectedItemTooltipInfo() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBalanceItemID(int32 ItemPos);
    
    UFUNCTION()
    void CleanUp();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 CalculateSectionCost();
    
};

