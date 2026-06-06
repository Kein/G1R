#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDArmorCustomizationController.generated.h"

class UArmorCustomization_Main;
class UHUDArmorCustomizationController;
class UObject;

UCLASS(BlueprintType)
class G1R_API UHUDArmorCustomizationController : public UHUDControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UArmorCustomization_Main* m_MainWidget;
    
public:
    UHUDArmorCustomizationController();

    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static UHUDArmorCustomizationController* Get(const UObject* _WorldContextObject);
    
};

