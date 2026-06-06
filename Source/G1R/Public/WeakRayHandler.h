#pragma once
#include "CoreMinimal.h"
#include "BarrierEffectHandler.h"
#include "WeakRayHandler.generated.h"

UCLASS()
class UWeakRayHandler : public UBarrierEffectHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float MaxHeight;
    
public:
    UWeakRayHandler();

};

