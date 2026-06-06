#pragma once
#include "CoreMinimal.h"
#include "ButtonWidget.h"
#include "SettingsPageButtonWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingsPageButtonWidget : public UButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_IsActive;
    
public:
    USettingsPageButtonWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisplayName(const FText& DisplayName);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivated();
    
};

