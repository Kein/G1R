#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EInventoryFilterTypes.h"
#include "EInventoryFilterVisibility.h"
#include "EInventoryOpenedStates.h"
#include "EInventoryTypes.h"
#include "GothicCommonActivatableWidget.h"
#include "InterfaceManagementContentChild.h"
#include "ItemTooltipInfo.h"
#include "OnItemClickedInventoryDelegate.h"
#include "InventoryMain.generated.h"

class AActor;
class UAlkFilterWidget;
class UDiscreteItemViewWidget;
class UGothicTraderPayload;
class UInventoryBase;
class UInventoryBaseTrading;
class UInventoryMain;
class UItemDefinition;

UCLASS(EditInlineNew)
class G1R_API UInventoryMain : public UGothicCommonActivatableWidget, public IInterfaceManagementContentChild {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnseenStateChangedDelegate, UInventoryMain*, _InventoryWidget, bool, _HasUnseenChanges);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIsTabChangeAllowedChangedDelegateBP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonRelevanceChangedDelegateBP);
    
    UPROPERTY()
    FOnItemClickedInventory OnItemClickedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FIsTabChangeAllowedChangedDelegateBP m_OnIsTabChangeAllowedChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FButtonRelevanceChangedDelegateBP m_OnButtonRelevanceChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FUnseenStateChangedDelegate m_OnUnseenStateChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UDiscreteItemViewWidget* TileView_Items;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UAlkFilterWidget* GenericFilter;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool ActivateStats;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool ActivateEquip;
    
    UPROPERTY(EditInstanceOnly)
    bool ActivateTooltip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EInventoryFilterVisibility m_FilterVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    float Health;
    
    UPROPERTY(BlueprintReadOnly)
    float Mana;
    
    UPROPERTY(BlueprintReadOnly)
    float Strength;
    
    UPROPERTY(BlueprintReadOnly)
    float Dexterity;
    
    UPROPERTY(BlueprintReadOnly)
    float Toughness;
    
    UPROPERTY(BlueprintReadOnly)
    float SkillPoints;
    
    UPROPERTY(BlueprintReadOnly)
    float MagicCircle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionSelectWearablesSection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionSelectInventorySection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ToggleQuickSlotData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ToggleWearablesCompareTooltipData;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LastItemClicked;
    
    UPROPERTY(BlueprintReadWrite)
    EInventoryFilterTypes ActivatedFilter;
    
    UPROPERTY()
    AActor* InventoryOwner;
    
    UPROPERTY(BlueprintReadOnly)
    EInventoryOpenedStates InventoryOpenedState;
    
    UPROPERTY(BlueprintReadOnly)
    ECommonInputType m_CurrentInputType;
    
private:
    UPROPERTY(Transient)
    UInventoryBase* InventoryBase;
    
    UPROPERTY(Transient)
    UInventoryBaseTrading* InventoryBaseTrading;
    
    UPROPERTY()
    AActor* TargetActor;
    
    UPROPERTY()
    AActor* Instigator;
    
    UPROPERTY()
    int32 m_ItemIdToEquip;
    
    UPROPERTY()
    int32 m_LastHoveredIndex;
    
    UPROPERTY()
    UGothicTraderPayload* m_GothicTraderPayload;
    
public:
    UInventoryMain();

    UFUNCTION()
    void UpdatePayload(const UGothicTraderPayload* GothicTraderPayload);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleWearablesCompareTooltip();
    
    UFUNCTION()
    void ToggleQuickSlotAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopWearableEquipMode(int32 _ItemID, EInventoryTypes _InventoryType, bool _bEquip);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StopWearableEquip_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartWearableEquip_BP(int32 _ItemID, EInventoryTypes _InventoryType);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowQuantityWidget(int32 MaxQuantity);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectFirstItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectFilterForItem(FGameplayTag _FilterTag, const UItemDefinition* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectedItemIsNotEquippable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshInventoryBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshInventory(bool _PreserveScrollOffset);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateWearableItemTooltips(const TArray<FItemTooltipInfo>& ItemTooltipInfo);
    
public:
    UFUNCTION()
    void OnReceivedItemClicked(int32 ItemPos, EInventoryTypes InventoryType);
    
private:
    UFUNCTION()
    void OnItemRemoved();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemIsHoveredChangedInfo(const FItemTooltipInfo ItemTooltipInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemClicked(int32 ItemPos);
    
private:
    UFUNCTION()
    void OnItemAdded(const UItemDefinition* NewItem, int32 Count);
    
    UFUNCTION()
    void NativeOnInitialized();
    
    UFUNCTION()
    void NativeDestruct();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 LastSelectedItemIndex();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsWearableEquipmentMode() const;
    
    UFUNCTION(BlueprintCallable)
    void InputReceivedUse();
    
    UFUNCTION(BlueprintCallable)
    void InputReceivedUnequip();
    
    UFUNCTION(BlueprintCallable)
    void InputReceivedDrop(int32 Index);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void Initialization_BP();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleSelectWearableSection();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleSelectInventorySection();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleInputTypeChangedBP(ECommonInputType _InputType);
    
private:
    UFUNCTION()
    void HandleInputTypeChanged(ECommonInputType _InputType);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetOreCount();
    
protected:
    UFUNCTION(BlueprintCallable)
    EInventoryTypes GetItemInventoryTypeByPos(int32 Pos);
    
public:
    UFUNCTION()
    AActor* GetInventoryOwner() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    EInventoryOpenedStates GetInventoryOpenedState();
    
public:
    UFUNCTION()
    UInventoryBase* GetInventoryBase();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDropItem(int32 NumItemsDropped);
    
    UFUNCTION()
    void EnableList();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableInputBP();
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION()
    void DisableList();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisableInputBP();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION(BlueprintCallable)
    void ClickCurrentItem();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearItemTooltip();
    

    // Fix for true pure virtual functions not being implemented
};

