#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDMapController.generated.h"

class UCommonActivatableWidget;
class UMapMain;

UCLASS(BlueprintType)
class G1R_API UHUDMapController : public UHUDControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMapMain* m_MapWidget;
    
    UPROPERTY(Transient)
    TSubclassOf<UCommonActivatableWidget> m_WidgetClass;
    
public:
    UHUDMapController();

    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

