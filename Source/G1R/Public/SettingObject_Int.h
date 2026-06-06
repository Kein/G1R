#pragma once
#include "CoreMinimal.h"
#include "SettingObject.h"
#include "SettingObject_Int.generated.h"

UCLASS(Abstract, EditInlineNew)
class USettingObject_Int : public USettingObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueChangedDelegate, int32, NewValue);
    
protected:
    UPROPERTY(EditAnywhere)
    int32 m_DefaultValue;
    
    UPROPERTY(EditAnywhere)
    int32 m_MinValue;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxValue;
    
public:
    USettingObject_Int();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 _NewValue);
    
    UFUNCTION(BlueprintPure)
    int32 SanitizeValue(float _Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefaultValue() const;
    
};

