#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"
#include "AlkUserWidget.h"
#include "CheckBoxWidget.generated.h"

class UInputHintWidget_CommonUI;

UCLASS(Abstract, EditInlineNew)
class G1R_API UCheckBoxWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCheckedStateChangedEventBP, ECheckBoxState, OldCheckedState, ECheckBoxState, NewCheckedState);
    
    UPROPERTY(BlueprintAssignable)
    FCheckedStateChangedEventBP m_OnCheckedStateChangedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget_CommonUI* InputHint;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState m_CheckedState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_ToggleStateRowHandle;
    
public:
    UCheckBoxWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleCheckedState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLabelText(const FText& _NewLabelText);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState _CheckedState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCheckedStateChanged(ECheckBoxState _OldCheckedState, ECheckBoxState _NewCheckedState, bool _IsInitial);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUndetermined() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnchecked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
};

