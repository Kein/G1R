#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "OnSleepUIControllerActionDelegateDelegate.h"
#include "HUDSleepUIController.generated.h"

class USleepUIWidget;

UCLASS(BlueprintType)
class UHUDSleepUIController : public UHUDControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSleepUIControllerActionDelegate m_OnCloseButtonClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnSleepUIControllerActionDelegate m_OnConfirmButtonClicked;
    
protected:
    UPROPERTY(Instanced, Transient)
    USleepUIWidget* m_SleepUIWidget;
    
public:
    UHUDSleepUIController();

protected:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

