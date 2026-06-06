#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "SleepUIWidget.generated.h"

class UAbilitySystemComponent;
class UButtonWidget;

UCLASS(EditInlineNew)
class USleepUIWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_MaxHoursToSleep;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_SleepTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float m_SelectedHoursToSleep;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UButtonWidget* Button_Close;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UButtonWidget* Button_Confirm;
    
public:
    USleepUIWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void BP_ShowWaitingForPartner(bool Show);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnMaxHoursToSleepChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_InitializeSleepUI();
    
};

