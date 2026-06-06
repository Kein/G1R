#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IFlyingCharacter.generated.h"

UINTERFACE(Blueprintable)
class UIFlyingCharacter : public UInterface {
    GENERATED_BODY()
};

class IIFlyingCharacter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartingOverWater(float Height);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshOverWaterHeight(float Height);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLeavingOverWater();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndFlying();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginFlying();
    
};

