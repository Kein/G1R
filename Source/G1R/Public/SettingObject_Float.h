#pragma once
#include "CoreMinimal.h"
#include "SettingObject.h"
#include "SettingObject_Float.generated.h"

UCLASS(Abstract, EditInlineNew)
class USettingObject_Float : public USettingObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueChangedDelegate, float, NewValue);
    
protected:
    UPROPERTY(EditAnywhere)
    float m_DefaultValue;
    
    UPROPERTY(EditAnywhere)
    float m_MinValue;
    
    UPROPERTY(EditAnywhere)
    float m_MaxValue;
    
    UPROPERTY(EditAnywhere)
    float m_StepSize;
    
    UPROPERTY(EditAnywhere)
    bool m_AlwaysShowSign;
    
public:
    USettingObject_Float();

    UFUNCTION(BlueprintPure)
    FText ValueToText(float _Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float _NewValue);
    
    UFUNCTION(BlueprintPure)
    float SanitizeValue(float _Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetStepSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDecimalPlaces() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAlwaysShowSign() const;
    
};

