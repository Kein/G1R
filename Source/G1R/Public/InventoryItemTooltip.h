#pragma once
#include "CoreMinimal.h"
#include "GenericItemViewWidget.h"
#include "ItemTooltipInfo.h"
#include "InventoryItemTooltip.generated.h"

class UInputHintWidget_CommonUI;

UCLASS(EditInlineNew)
class G1R_API UInventoryItemTooltip : public UGenericItemViewWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget_CommonUI* m_Input_Equip;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget_CommonUI* m_Input_Unequip;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget_CommonUI* m_Input_Drop;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget_CommonUI* m_Input_Utilize;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget_CommonUI* m_Input_ShowWearableComparisonTooltip;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UnequipTimeThreshold;
    
public:
    UInventoryItemTooltip();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTooltip(FItemTooltipInfo _ItemTooltipInfo, int32 _NumberOfItems, bool _Hide);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SendInputActionUtilize();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SendInputActionUnequip();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SendInputActionRead();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SendInputActionDrop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SendActionToggleWearableComparisonTooltip(bool _bStart);
    
private:
    UFUNCTION()
    void OnUnequipTimerEnds();
    
    UFUNCTION()
    void OnUnequipActionTriggered();
    
    UFUNCTION()
    void OnUnequipActionReleased();
    
    UFUNCTION()
    void OnToggleWearableComparisonTooltipStart();
    
    UFUNCTION()
    void OnToggleWearableComparisonTooltipEnds();
    
};

