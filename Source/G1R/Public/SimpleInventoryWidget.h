#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "CommonUserWidget.h"
#include "Engine/DataTable.h"
#include "EInventoryFilterVisibility.h"
#include "EInventoryOpenedStates.h"
#include "EInventoryTypes.h"
#include "OnActionClickedDelegate.h"
#include "SimpleInventoryItemConfiguration.h"
#include "SimpleInventoryWidget.generated.h"

class AActor;
class UButtonWidget;
class UGothicTraderPayload;
class UInventoryMain;
class UTabSelectorWidget;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class G1R_API USimpleInventoryWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTabAddedEventBP, int32, _Index, UInventoryMain*, _Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemCloseEventBP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemClickedEventBP, int32, _ItemID, EInventoryTypes, _InventoryType, UInventoryMain*, _Inventory);
    
    UPROPERTY(BlueprintAssignable)
    FTabAddedEventBP m_OnTabAddedEventBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemClickedEventBP m_OnItemClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemCloseEventBP m_OnClosedClickedBP;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTabSelectorWidget* m_WidgetTabSelector;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UWidgetSwitcher* m_WidgetTabs;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UButtonWidget* Button_Action;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UButtonWidget* Button_Close;
    
    UPROPERTY(EditAnywhere)
    TArray<FSimpleInventoryItemConfiguration> m_TabConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShowCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShowActionButton;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_ActionButtonDataHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_CloseButtonDataHandle;
    
    UPROPERTY(BlueprintReadOnly)
    ECommonInputType m_CurrentInputType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnActionClicked m_OnActionClicked;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EInventoryFilterVisibility m_FilterVisibility;
    
public:
    USimpleInventoryWidget();

    UFUNCTION(BlueprintCallable)
    void ShowWidget(bool _bShow);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChanged(ECommonInputType _InputType);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnActionbuttonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsShown();
    
private:
    UFUNCTION()
    void InventoryItemClicked(int32 ItemId, EInventoryTypes InventoryType, int32 ItemAmount, UInventoryMain* _Inventory);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeTab(int32 _Index, UInventoryMain* _Inventory, AActor* _Owner, EInventoryOpenedStates _State, const UGothicTraderPayload* _Payload);
    
    UFUNCTION(BlueprintCallable)
    UInventoryMain* GetCurrentInventory();
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableChildsBP(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION(BlueprintCallable)
    void CreateTabs();
    
    UFUNCTION(BlueprintCallable)
    void ClickCurrentItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AnimateShowWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AnimateHideWidget();
    
};

