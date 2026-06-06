#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "ESettingsMessagePriority.h"
#include "SettingsMessageHandle.h"
#include "SettingsMessageWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API USettingsMessageWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    USettingsMessageWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveMessage(const FSettingsMessageHandle& _Handle);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowMessage(const FText& _Message);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideMessage();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasMessage(const FSettingsMessageHandle& _Handle) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmShow();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmHide();
    
public:
    UFUNCTION(BlueprintCallable)
    FSettingsMessageHandle AddMessage(const FText& _Message, float _Duration, ESettingsMessagePriority _Priority);
    
};

