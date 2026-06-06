#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDAmmoLeftController.generated.h"

UCLASS(BlueprintType)
class G1R_API UHUDAmmoLeftController : public UHUDControllerBase {
    GENERATED_BODY()
public:
    UHUDAmmoLeftController();

    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

