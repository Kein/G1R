#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDLootBaseController.generated.h"

UCLASS()
class G1R_API UHUDLootBaseController : public UHUDControllerBase {
    GENERATED_BODY()
public:
    UHUDLootBaseController();

protected:
    UFUNCTION()
    void OnContainerClosed();
    
};

