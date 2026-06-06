#pragma once
#include "CoreMinimal.h"
#include "SettingObjectWidget.h"
#include "SettingObjectWidget_Enum.generated.h"

class USettingObjectWidget_Enum;
class USettingObject_Enum;

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingObjectWidget_Enum : public USettingObjectWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FValueChangedDelegateBP, USettingObjectWidget_Enum*, _SettingWidget, int32, _NewValue);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedDelegateBP m_OnValueChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    USettingObject_Enum* m_Setting;
    
public:
    USettingObjectWidget_Enum();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 _NewValue, bool _Force);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(int32 _NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetValue() const;
    
};

