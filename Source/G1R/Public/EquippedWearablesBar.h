#pragma once
#include "CoreMinimal.h"
#include "QuickSlotBase.h"
#include "EquippedWearablesBar.generated.h"

class UInventoryItemTooltip;
class UPanelWidget;

UCLASS(EditInlineNew)
class G1R_API UEquippedWearablesBar : public UQuickSlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UInventoryItemTooltip* m_ToolTipEquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UInventoryItemTooltip* m_ToolTipNewItem;
    
    UEquippedWearablesBar();

    UFUNCTION(BlueprintCallable)
    void UnregisterInput();
    
    UFUNCTION(BlueprintCallable)
    bool TrySetCurrentWidgetIndex(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UInventoryItemTooltip* _ToolTipEquippedItem, UInventoryItemTooltip* _ToolTipNewItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFocusedWidget(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInput();
    
    UFUNCTION(BlueprintCallable)
    void HandleFocusRight();
    
    UFUNCTION(BlueprintCallable)
    void HandleFocusLeft();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetWidgetContainer();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable)
    int32 FindNextValidFocus(int32 _StartIndex, int32 _Direction);
    
};

