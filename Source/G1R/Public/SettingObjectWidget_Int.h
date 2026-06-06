#pragma once
#include "CoreMinimal.h"
#include "SettingObjectWidget.h"
#include "SettingObjectWidget_Int.generated.h"

class USettingObjectWidget_Int;
class USettingObject_Int;

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingObjectWidget_Int : public USettingObjectWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FValueChangedDelegateBP, USettingObjectWidget_Int*, _SettingWidget, int32, _NewValue);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedDelegateBP m_OnValueChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    USettingObject_Int* m_Setting;
    
public:
    USettingObjectWidget_Int();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 _NewValue, bool _Force);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(int32 _NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetValue() const;
    
};

