#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlkUserWidget.h"
#include "EIntegerPickerWidget_Layout.h"
#include "IntegerPickerWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UIntegerPickerWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FValueChangedEventBP, int32, OldValue, int32, NewValue);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedEventBP m_OnValueChangedBP;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 m_Value;
    
    UPROPERTY(EditAnywhere)
    int32 m_MinValue;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxValue;
    
    UPROPERTY(EditAnywhere)
    int32 m_StepSize;
    
    UPROPERTY(EditAnywhere)
    bool m_StartWithInputEnabled;
    
    UPROPERTY(EditAnywhere)
    float m_InitialRepeatDelay;
    
    UPROPERTY(EditAnywhere)
    float m_RepeatDelay;
    
    UPROPERTY(EditAnywhere)
    EIntegerPickerWidget_Layout m_Layout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_IncrementRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_DecrementRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SetToMaxRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SetToMinRowHandle;
    
public:
    UIntegerPickerWidget();

    UFUNCTION(BlueprintCallable)
    void StopRepetition();
    
    UFUNCTION(BlueprintCallable)
    void StopIncrement();
    
    UFUNCTION(BlueprintCallable)
    void StopDecrement();
    
    UFUNCTION(BlueprintCallable)
    void StartIncrement();
    
    UFUNCTION(BlueprintCallable)
    void StartDecrement();
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool _Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetValueToMin();
    
    UFUNCTION(BlueprintCallable)
    void SetValueToMax();
    
    UFUNCTION(BlueprintCallable)
    void SetValueRounded(double _Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueByRatio(double _Ratio);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(int32 _Value, bool _Force);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(int32 _StepSize);
    
    UFUNCTION(BlueprintCallable)
    void SetRange(int32 _MinValue, int32 _MaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(int32 _MinValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(int32 _MaxValue);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(int32 _OldValue, int32 _NewValue, bool _IsInitial);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStepSizeChanged(int32 _OldStepSize, int32 _NewStepSize, bool _IsInitial);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRangeChanged(int32 _OldMinValue, int32 _OldMaxValue, int32 _NewMinValue, int32 _NewMaxValue, bool _IsInitial);
    
public:
    UFUNCTION(BlueprintCallable)
    void Increment();
    
    UFUNCTION(BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStepSize() const;
    
    UFUNCTION(BlueprintPure)
    void GetRange(int32& _MinValue, int32& _MaxValue) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxValue() const;
    
    UFUNCTION(BlueprintPure)
    EIntegerPickerWidget_Layout GetLayout() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAdditionalInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableAdditionalInput();
    
    UFUNCTION(BlueprintCallable)
    void Decrement();
    
};

