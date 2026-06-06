#pragma once
#include "CoreMinimal.h"
#include "SettingObjectWidget.h"
#include "SettingObjectWidget_Bool.generated.h"

class USettingObjectWidget_Bool;
class USettingObject_Bool;

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingObjectWidget_Bool : public USettingObjectWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FValueChangedDelegateBP, USettingObjectWidget_Bool*, _SettingWidget, bool, _NewValue);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedDelegateBP m_OnValueChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    USettingObject_Bool* m_Setting;
    
public:
    USettingObjectWidget_Bool();

    UFUNCTION(BlueprintCallable)
    void ToggleValue();
    
    UFUNCTION(BlueprintCallable)
    void SetValue(bool _NewValue, bool _Force);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(bool _NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetValue() const;
    
};

