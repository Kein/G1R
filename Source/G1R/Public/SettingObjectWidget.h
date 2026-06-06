#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "SettingObjectWidget.generated.h"

class USettingObject;
class USettingObjectWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingObjectWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAvailabilityChangedDelegateBP, USettingObjectWidget*, _SettingWidget, bool, _IsAvailable);
    
    UPROPERTY(BlueprintAssignable)
    FAvailabilityChangedDelegateBP m_OnAvailabilityChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_AutoApplyChanges;
    
    UPROPERTY(Transient)
    USettingObject* m_GenericSetting;
    
public:
    USettingObjectWidget();

    UFUNCTION(BlueprintCallable)
    void SetSettingObject(USettingObject* _Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoApplyChanges(bool _Value);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Reinitialize();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnContentChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAvailabilityChanged(bool _IsAvailable);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSupported() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseValue();
    
    UFUNCTION(BlueprintPure)
    bool HideUnavailable() const;
    
    UFUNCTION(BlueprintPure)
    bool HasChanges() const;
    
    UFUNCTION(BlueprintCallable)
    void DiscardChanges();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseValue();
    
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

