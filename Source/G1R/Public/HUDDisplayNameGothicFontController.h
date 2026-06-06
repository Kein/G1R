#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDDisplayNameGothicFontController.generated.h"

class UInteractiveComponent;
class UUserWidget;

UCLASS(BlueprintType)
class UHUDDisplayNameGothicFontController : public UHUDControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UUserWidget> m_WidgetClassBP;
    
    UPROPERTY(Instanced)
    TMap<UInteractiveComponent*, UUserWidget*> m_Widgets;
    
public:
    UHUDDisplayNameGothicFontController();

private:
    UFUNCTION()
    void OnItemSensed(UInteractiveComponent* Item);
    
    UFUNCTION()
    void OnItemNoLongerSensed(UInteractiveComponent* Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

