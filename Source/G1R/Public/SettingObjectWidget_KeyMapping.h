#pragma once
#include "CoreMinimal.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "InputCoreTypes.h"
#include "SettingObjectWidget.h"
#include "SettingObjectWidget_KeyMapping.generated.h"

class USettingObjectWidget_KeyMapping;
class USettingObject_KeyMapping;

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingObjectWidget_KeyMapping : public USettingObjectWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FValueChangedDelegateBP, USettingObjectWidget_KeyMapping*, _SettingWidget, EPlayerMappableKeySlot, _Slot, FKey, _NewValue);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedDelegateBP m_OnValueChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    USettingObject_KeyMapping* m_Setting;
    
    UPROPERTY(Transient)
    TMap<EPlayerMappableKeySlot, FKey> m_Values;
    
public:
    USettingObjectWidget_KeyMapping();

    UFUNCTION(BlueprintCallable)
    void SetValue(EPlayerMappableKeySlot _Slot, FKey _NewValue, bool _Force);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(EPlayerMappableKeySlot _Slot, FKey _NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    FKey GetValue(EPlayerMappableKeySlot _Slot) const;
    
};

