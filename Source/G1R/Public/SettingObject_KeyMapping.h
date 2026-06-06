#pragma once
#include "CoreMinimal.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "InputCoreTypes.h"
#include "SettingObject.h"
#include "SettingObject_KeyMapping.generated.h"

class UEnhancedInputUserSettings;
class UInputAction;
class UInputMappingContext;
class UPlayerMappableKeySettings;

UCLASS(EditInlineNew)
class USettingObject_KeyMapping : public USettingObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FValueChangedDelegate, EPlayerMappableKeySlot, Slot, FKey, NewValue);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInputMappingContext* m_InputMappingContext;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInputAction* m_InputAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UInputAction*> m_AdditionalInputActions;
    
    UPROPERTY(Transient)
    UEnhancedInputUserSettings* m_UserSettings;
    
    UPROPERTY(Instanced, Transient)
    UPlayerMappableKeySettings* m_KeySettings;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPlayerMappableKeySettings*> m_AdditionalKeySettings;
    
public:
    USettingObject_KeyMapping();

    UFUNCTION(BlueprintCallable)
    void SetValue(EPlayerMappableKeySlot _Slot, FKey _NewValue, bool _CheckCollisions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FKey GetValue(EPlayerMappableKeySlot _Slot) const;
    
    UFUNCTION(BlueprintPure)
    FKey GetDefaultValue(EPlayerMappableKeySlot _Slot) const;
    
};

