#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "ContainerVirtualData.h"
#include "EInventoryTypes.h"
#include "InteractOpenContainerDelegateCMWDelegate.h"
#include "ItemVirtualData.h"
#include "ContainerManagerWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API UContainerManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<FItemVirtualData> m_LocalPlayerInventory;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FItemVirtualData> m_LocalPlayerInventoryFiltered;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<int32> m_LocalPlayerInventoryFilteredEquipped;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> InventoryFilter;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGuid, int32> OldItems;
    
    UPROPERTY(BlueprintAssignable)
    FInteractOpenContainerDelegateCMW InteractOpenContainerDelegateVariable;
    
public:
    UContainerManagerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateQuickWheel_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInventoryItemsInteractiveComponent_Implementation(FContainerVirtualData newItemMainContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartQuickAction(const EInventoryTypes invType, const int32 ID) const;
    
    UFUNCTION(BlueprintCallable)
    void ItemRemoveNewByPos(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    bool ItemIsNewByPos(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    bool IsRangedWeapon(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    bool IsMeleeWeapon(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    float GetStrDeltaEquippedVsInventoryByPos_Implementation(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfDifferentItems_Implementation();
    
    UFUNCTION(BlueprintCallable)
    FItemVirtualData GetItemVirtualDataByPos_Implementation(int32 Pos);
    
    UFUNCTION(BlueprintPure)
    FText GetItemValueByPos_Implementation(int32 Pos) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetItemTypeByPos_Implementation(int32 Pos) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, int32> GetItemStatsByPos_Implementation(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemPosByGuid_Implementation(FGuid Guid);
    
    UFUNCTION(BlueprintPure)
    FText GetItemNameByPos_Implementation(int32 Pos) const;
    
    UFUNCTION(BlueprintCallable)
    FGuid GetItemGuidByPos_Implementation(int32 Pos);
    
    UFUNCTION(BlueprintPure)
    FText GetItemDescriptionByPos_Implementation(int32 Pos) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemAmountByPos_Implementation(int32 Pos);
    
    UFUNCTION(BlueprintPure)
    EInventoryTypes GetInventoryTypeByPos(UPARAM(Ref) int32& Pos) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetInventorySize_Implementation(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEquippedPosition(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    bool EquipItem_Implementation(int32 Pos, int32 DestinationEquipPos);
    
    UFUNCTION(BlueprintCallable)
    void EnableDisableInput(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void DisableCrosshair();
    
};

