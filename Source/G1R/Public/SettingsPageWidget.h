#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "SettingsPageWidget.generated.h"

class USettingsDetailsWidget;
class USettingsRowWidget;

UCLASS(EditInlineNew)
class G1R_API USettingsPageWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSelectionChangedDelegateBP, USettingsRowWidget*, _SettingsRowWidget, bool, _IsSelected);
    
    UPROPERTY(BlueprintAssignable)
    FSelectionChangedDelegateBP m_OnRowSelectionChangedBP;
    
protected:
    UPROPERTY(EditAnywhere)
    FText m_DisplayName;
    
    UPROPERTY(Instanced, Transient)
    TArray<USettingsRowWidget*> m_SettingsRowWidgets;
    
    UPROPERTY(Instanced, Transient)
    USettingsDetailsWidget* m_SettingsDetailWidget;
    
public:
    USettingsPageWidget();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Reinitialize();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRowValueChanged(USettingsRowWidget* _SettingsRowWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRowSelectionChanged(USettingsRowWidget* _SettingsRowWidget, bool _IsSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGamepadNameChanged(FName _GamepadName);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasChanges() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable)
    void FocusFirstSettingsRow();
    
    UFUNCTION(BlueprintCallable)
    void DiscardChanges();
    
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

