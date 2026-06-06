#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "Engine/DataTable.h"
#include "GothicCommonActivatableWidget.h"
#include "TradingMain.generated.h"

class AActor;
class UGothicTraderPayload;
class UInventoryMain;
class UTradingBalance;

UCLASS(EditInlineNew)
class G1R_API UTradingMain : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTradingBalance* W_Trading_Balance;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInventoryMain* W_TradingInventory_Buy;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInventoryMain* W_TradingInventory_Sell;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionShiftRightHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionShiftLeftHandle;
    
    UPROPERTY(BlueprintReadOnly)
    ECommonInputType m_CurrentInputType;
    
public:
    UTradingMain();

    UFUNCTION()
    void UpdatePayload(const UGothicTraderPayload* GothicTraderPayload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnabledStateOfWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShiftFocusRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShiftFocusLeft();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SellerInventoryIsEmpty(bool IsEmpty);
    
public:
    UFUNCTION()
    void RegisterInputActions();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChanged(ECommonInputType _InputType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCloseButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NewInventoryOre(int32 TraderOre, int32 PlayerOre);
    
public:
    UFUNCTION()
    bool Initialization(const AActor* NPCToTrade, const UGothicTraderPayload* GothicTraderPayload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableWidgetBP();
    
    UFUNCTION()
    void CleanUp();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BuyerInventoryIsEmpty(bool IsEmpty);
    
};

