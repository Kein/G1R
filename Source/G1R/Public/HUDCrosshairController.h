#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDCrosshairController.generated.h"

UCLASS(BlueprintType)
class G1R_API UHUDCrosshairController : public UHUDControllerBase {
    GENERATED_BODY()
public:
    UHUDCrosshairController();

    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

