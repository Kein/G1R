#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDBorderWarningController.generated.h"

UCLASS(BlueprintType)
class G1R_API UHUDBorderWarningController : public UHUDControllerBase {
    GENERATED_BODY()
public:
    UHUDBorderWarningController();

    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

