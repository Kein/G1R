#pragma once
#include "CoreMinimal.h"
#include "SettingObjectWidget.h"
#include "SettingObjectWidget_Float.generated.h"

class USettingObjectWidget_Float;
class USettingObject_Float;

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingObjectWidget_Float : public USettingObjectWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FValueChangedDelegateBP, USettingObjectWidget_Float*, _SettingWidget, float, _NewValue);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedDelegateBP m_OnValueChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    USettingObject_Float* m_Setting;
    
public:
    USettingObjectWidget_Float();

    UFUNCTION(BlueprintCallable)
    void SetValue(float _NewValue, bool _Force);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(float _NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetValueAsText() const;
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
};

