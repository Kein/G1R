#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SettingsRowWidget.generated.h"

class USettingObject;
class USettingObjectWidget;
class USettingsRowWidget;

UCLASS(EditInlineNew)
class G1R_API USettingsRowWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueChangedDelegateBP, USettingsRowWidget*, _SettingsRowWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSelectionChangedDelegateBP, USettingsRowWidget*, _SettingsRowWidget, bool, _IsSelected);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedDelegateBP m_OnValueChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FSelectionChangedDelegateBP m_OnSelectionChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USettingObject* m_Setting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_AutoApplyChanges;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient)
    USettingObjectWidget* m_SettingWidget;
    
public:
    USettingsRowWidget();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Reinitialize();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectionChanged(bool _IsSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAvailabilityChanged(bool _IsAvailable);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSupported() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool HideUnavailable() const;
    
    UFUNCTION(BlueprintPure)
    bool HasChanges() const;
    
    UFUNCTION(BlueprintCallable)
    void DiscardChanges();
    
protected:
    UFUNCTION(BlueprintCallable)
    USettingObjectWidget* CreateSettingsWidgetInternal(TSubclassOf<USettingObjectWidget> _WidgetClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

