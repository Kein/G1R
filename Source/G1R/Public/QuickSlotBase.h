#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EHUDQuickSlotOpenedFromPriorityState.h"
#include "EInventoryFilterTypes.h"
#include "EInventoryTypes.h"
#include "ItemTooltipInfo.h"
#include "QuickSlotBase.generated.h"

class UInventoryBase;
class UInventorySlotData;

UCLASS(EditInlineNew)
class G1R_API UQuickSlotBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<UInventorySlotData*> m_SlotsData;
    
    UPROPERTY()
    UInventoryBase* m_InventoryBase;
    
    UPROPERTY(BlueprintReadOnly)
    EInventoryFilterTypes m_ItemType;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag m_ItemTypeGameplayTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_OnScreenTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_CloseQuickslotHandle;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsControlBarVisible;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsBindingPressed;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EHUDQuickSlotOpenedFromPriorityState> m_OpenedFromState;
    
public:
    UPROPERTY(BlueprintReadOnly)
    ECommonInputType m_CurrentInputType;
    
    UQuickSlotBase();

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateToolTipToAssignTo(int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    FItemTooltipInfo UpdateToolTipItemComparison(FItemTooltipInfo ItemBase, FItemTooltipInfo ItemComparedTo);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateToolTipBaseItem(int32 ItemPos, EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintCallable)
    void StartAutohideTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetInWearablesEditMode(bool _Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshInventoryBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInventoryItemClickedBP(int32 SlotId);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReceiveInventoryItemClicked(int32 ItemId, EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowUpdateBaseTooltip(const FItemTooltipInfo ItemTooltipInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowSlotTooltip(const FItemTooltipInfo ItemTooltipInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSlotActive(int32 SlotIndex);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInWearablesEditMode() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Initialization_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialization(TEnumAsByte<EHUDQuickSlotOpenedFromPriorityState> _openedFrom, EInventoryTypes _Type);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HotkeyPressedBP(int32 SlotId);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleInputTypeChangedBP(ECommonInputType _InputType);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EHUDQuickSlotOpenedFromPriorityState> GetOpenedFromState() const;
    
    UFUNCTION(BlueprintPure)
    ECommonInputType GetCurrentInputType() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EquipItem(int32 ItemPos);
    
    UFUNCTION(BlueprintCallable)
    void EquipInSlot(int32 SlotId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseWidgetHandling();
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget_Internal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWidget();
    
};

