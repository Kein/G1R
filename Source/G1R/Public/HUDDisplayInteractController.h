#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDDisplayInteractController.generated.h"

class UInteractSensor;
class UInteractiveComponent;
class UUserWidget;

UCLASS(BlueprintType)
class UHUDDisplayInteractController : public UHUDControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UUserWidget> m_WidgetClassBP;
    
    UPROPERTY(Instanced)
    UInteractSensor* m_InteractSensor;
    
public:
    UHUDDisplayInteractController();

private:
    UFUNCTION()
    void OnItemSensed(UInteractiveComponent* Item);
    
    UFUNCTION()
    void OnItemNoLongerSensed(UInteractiveComponent* Item);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

