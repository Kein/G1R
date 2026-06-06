#pragma once
#include "CoreMinimal.h"
#include "SettingObject.h"
#include "SettingObject_Bool.generated.h"

UCLASS(Abstract, EditInlineNew)
class USettingObject_Bool : public USettingObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueChangedDelegate, bool, NewValue);
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_DefaultValue;
    
public:
    USettingObject_Bool();

    UFUNCTION(BlueprintCallable)
    void SetValue(bool _NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetValue() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDefaultValue() const;
    
};

