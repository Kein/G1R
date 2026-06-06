#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDSimpleTextMessageController.generated.h"

UCLASS(BlueprintType)
class UHUDSimpleTextMessageController : public UHUDControllerBase {
    GENERATED_BODY()
public:
    UHUDSimpleTextMessageController();

protected:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

