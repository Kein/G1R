#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "Engine/DataTable.h"
#include "EAlkMouseButton.h"
#include "EInventoryTypes.h"
#include "GothicCommonActivatableWidget.h"
#include "ItemTooltipInfo.h"
#include "InventoryLootContainer.generated.h"

class AActor;
class UDiscreteItemViewWidget;
class UInventoryMain;
class UObject;
class USimpleInventoryWidget;
class UUInventoryBaseLoot;

UCLASS(EditInlineNew)
class G1R_API UInventoryLootContainer : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFocusLootContainerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFocusInventoryDelegate);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UDiscreteItemViewWidget* TileView_Items;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USimpleInventoryWidget* InventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanStoreItems;
    
    UPROPERTY()
    AActor* ContainerActor;
    
    UPROPERTY()
    UUInventoryBaseLoot* InventoryWorkContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionSelectInventoryHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionSelectLootContainerHandle;
    
    UPROPERTY(BlueprintReadOnly)
    ECommonInputType m_CurrentInputType;
    
public:
    UInventoryLootContainer();

    UFUNCTION(BlueprintCallable)
    void TransferItems(float _Amount);
    
    UFUNCTION(BlueprintCallable)
    bool ToggleInventory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TakeAllItems();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchFocusToLootContainer();
    
    UFUNCTION(BlueprintCallable)
    void SwitchFocusToInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestClose();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAmount(bool _bForLootContainer, int32 _MaxAmount);
    
    UFUNCTION()
    bool RefreshInventory();
    
protected:
    UFUNCTION()
    void OnSelectionChanged(int32 OldIndex, UObject* OldItem, int32 NewIndex, UObject* NewItem);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLootContainerFocused();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemIsHoveredChangedInfo(const FItemTooltipInfo ItemTooltipInfo);
    
    UFUNCTION()
    void OnItemIsHoveredChanged(int32 Index, UObject* Item, bool bIsHovered);
    
public:
    UFUNCTION()
    void OnItemClickedOnInventoryWidget(int32 _ItemID, EInventoryTypes _InventoryType, UInventoryMain* _Inventory);
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked(EAlkMouseButton _MouseButton, int32 Index, UObject* ItemClicked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInventoryFocused();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChanged(ECommonInputType _InputType);
    
protected:
    UFUNCTION()
    void NativeOnInitialized();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void InitializationBP();
    
protected:
    UFUNCTION(BlueprintCallable)
    FText GetActorName();
    
};

