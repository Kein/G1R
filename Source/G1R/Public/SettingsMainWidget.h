#pragma once
#include "CoreMinimal.h"
#include "ESettingsMainWidget_Context.h"
#include "GothicCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "SettingsMainWidget.generated.h"

class UPanelWidget;
class USettingsMessageWidget;
class USettingsPageButtonWidget;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class G1R_API USettingsMainWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    USettingsMessageWidget* SettingsMessageWidget;
    
    UPROPERTY(BlueprintReadOnly)
    ESettingsMainWidget_Context m_Context;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<USettingsPageButtonWidget*> m_PageButtons;
    
public:
    USettingsMainWidget();

    UFUNCTION(BlueprintCallable)
    void SetSettingsContext(ESettingsMainWidget_Context _Context);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnClickedBP();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCLVersion();
    
    UFUNCTION(BlueprintCallable)
    void FocusActiveButton();
    
    UFUNCTION(BlueprintCallable)
    void CreatePageButtons(UWidgetSwitcher* _PagesSwitcher, TSubclassOf<USettingsPageButtonWidget> _ButtonClass, UPanelWidget* _ButtonPanel);
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveButton();
    
};

