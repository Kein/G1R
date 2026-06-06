#pragma once
#include "CoreMinimal.h"
#include "ESettingObject_Enum_WidgetType.h"
#include "SettingObject.h"
#include "SettingObject_Enum.generated.h"

UCLASS(Abstract, EditInlineNew)
class USettingObject_Enum : public USettingObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueChangedDelegate, int32, NewValue);
    
protected:
    UPROPERTY(EditAnywhere)
    ESettingObject_Enum_WidgetType m_WidgetType;
    
    UPROPERTY(EditAnywhere)
    int32 m_DefaultValue;
    
    UPROPERTY(EditAnywhere)
    int32 m_LastConfirmedValue;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FText> m_ValueNames;
    
    UPROPERTY(EditAnywhere)
    bool m_ShouldValueWrapAround;
    
public:
    USettingObject_Enum();

    UFUNCTION(BlueprintPure)
    bool ShouldValueWrapAround() const;
    
    UFUNCTION(BlueprintCallable)
    void SetValue(int32 _NewValue);
    
    UFUNCTION(BlueprintPure)
    int32 SanitizeValue(int32 _Value) const;
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintPure)
    ESettingObject_Enum_WidgetType GetWidgetType() const;
    
    UFUNCTION(BlueprintPure)
    FText GetValueDisplayName(int32 _Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumValues() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefaultValue() const;
    
};

