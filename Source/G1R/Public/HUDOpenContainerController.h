#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "HUDLootBaseController.h"
#include "HUDOpenContainerController.generated.h"

UCLASS(BlueprintType)
class G1R_API UHUDOpenContainerController : public UHUDLootBaseController {
    GENERATED_BODY()
public:
    UHUDOpenContainerController();

private:
    UFUNCTION()
    void RefreshOtherContainer();
    
    UFUNCTION()
    void OnInventoryItemClickedDelegate(int32 ItemId, EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

