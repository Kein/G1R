#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputHintWidget.h"
#include "InputHintWidget.h"
#include "InputHintWidget_CommonUI.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UInputHintWidget_CommonUI : public UInputHintWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoldActionrogressEventBP, float, Progress);
    
    UPROPERTY(BlueprintAssignable)
    UInputHintWidget::FActionEventBP m_OnInputActionReleasedBP;
    
    UPROPERTY(BlueprintAssignable)
    FHoldActionrogressEventBP m_OnHoldActionProgressBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_DataTableRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsPersistent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ConsumeInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_HoldDelay;
    
public:
    UInputHintWidget_CommonUI();

    UFUNCTION(BlueprintCallable)
    void SetHoldDelay(float _HoldDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTableRow(const FDataTableRowHandle& _DataTableRow);
    
    UFUNCTION(BlueprintCallable)
    void OverrideHoldProgress(float _Progress);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDisplayText(FText _Text);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTextOverrideChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputActionReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHoldActionProgress(float _Progress);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCurrentlyHoldAction() const;
    
};

