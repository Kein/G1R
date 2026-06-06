#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "QuickSlotBase.h"
#include "QuickSlotWheel.generated.h"

class UCommonButtonBase;

UCLASS(EditInlineNew)
class G1R_API UQuickSlotWheel : public UQuickSlotBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 SelectedItemPos;
    
    UPROPERTY(BlueprintReadOnly)
    float RightStickXValue;
    
    UPROPERTY(BlueprintReadOnly)
    float RightStickYValue;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonButtonBase* Button_EquipClick;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle CloseWheelData;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle UnequipItemData;
    
public:
    UQuickSlotWheel();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UnequipItemBP();
    
    UFUNCTION()
    void UnEquipItem();
    
    UFUNCTION()
    void GetRightStickYAxisValue(const FKey& Key, float Delta);
    
    UFUNCTION()
    void GetRightStickXAxisValue(const FKey& Key, float Delta);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetRightStickValueBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void GamepadAccept();
    
};

