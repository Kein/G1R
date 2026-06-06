#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDBorderWarning.generated.h"

UINTERFACE(Blueprintable)
class UHUDBorderWarning : public UInterface {
    GENERATED_BODY()
};

class IHUDBorderWarning : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopCameraTravel(float cameraTravelInitialDelay, float cameraTravelDuration, float warningLevel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartCameraTravel(float cameraTravelInitialDelay, float cameraTravelDuration, float warningLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVisibility(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshOnlyShowingDistance(float Distance, float Range);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh(float warningLevel);
    
};

