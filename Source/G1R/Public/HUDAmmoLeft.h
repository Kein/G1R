#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDAmmoLeft.generated.h"

UINTERFACE(Blueprintable)
class UHUDAmmoLeft : public UInterface {
    GENERATED_BODY()
};

class IHUDAmmoLeft : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow(int32 numArrows);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshNumArrowsAvailable(int32 numArrows);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshCrossbowHasArrowNotched(bool HasArrowNotched);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
};

