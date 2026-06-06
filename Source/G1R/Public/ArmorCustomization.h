#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttributeSet.h"
#include "AlkUserWidget.h"
#include "ItemTooltipInfo.h"
#include "ArmorCustomization.generated.h"

class UArmorCustomizationSlotData;
class UDiscreteItemViewWidget;
class UPanelWidget;

UCLASS(EditInlineNew)
class G1R_API UArmorCustomization : public UAlkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionSelectSlotSection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionSelectModificationSection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SelectNextSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SelectPreviousSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UDiscreteItemViewWidget* TileView_Items;
    
    UPROPERTY()
    TArray<UArmorCustomizationSlotData*> m_ModificationSlots;
    
public:
    UArmorCustomization();

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterInputSlotSection();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInputGeneral();
    
    UFUNCTION(BlueprintCallable)
    void UnEquipSelectedModification();
    
    UFUNCTION(BlueprintCallable)
    bool TrySetCurrentWidgetIndex(int32 _Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFocusedWidget(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    FItemTooltipInfo RequestTooltip();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestedCloseWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterInputSlotSection();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInputGeneral();
    
    UFUNCTION(BlueprintCallable)
    void PreviewModification(bool _bEquip);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadDone();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemPurchased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquippedPreviewChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquippedModificationChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCurrentWidgetIndexChanged(int32 _OldIndex, int32 _NewIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonAcceptPushed();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool LoadModifications();
    
    UFUNCTION(BlueprintPure)
    bool HasPreviewAttribute(FGameplayAttribute _Attribute) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSelectSlotSection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSelectModificationSection();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFocusRight();
    
    UFUNCTION(BlueprintCallable)
    void HandleFocusLeft();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetWidgetContainer();
    
    UFUNCTION(BlueprintCallable)
    UArmorCustomizationSlotData* GetSlotDataForIndex(int32 _Index);
    
    UFUNCTION(BlueprintPure)
    float GetPreviewArmorAttribute(FGameplayAttribute _Attribute) const;
    
    UFUNCTION(BlueprintCallable)
    UArmorCustomizationSlotData* GetEquippedCustomizationSlotDataForPart(int32 _SlotIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentWidgetIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentOreAmount() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipSelectedModification();
    
    UFUNCTION(BlueprintPure)
    bool CanAffordModification(UArmorCustomizationSlotData* _Slot) const;
    
    UFUNCTION(BlueprintPure)
    bool CanAffordCurrentlyHoveredModification() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BuyEquipUnequipCurrentlySelectedModification();
    
};

