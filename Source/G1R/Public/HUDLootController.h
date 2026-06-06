#pragma once
#include "CoreMinimal.h"
#include "HUDLootBaseController.h"
#include "HUDLootController.generated.h"

UCLASS(BlueprintType)
class G1R_API UHUDLootController : public UHUDLootBaseController {
    GENERATED_BODY()
public:
    UHUDLootController();

private:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

