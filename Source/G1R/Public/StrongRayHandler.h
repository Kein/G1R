#pragma once
#include "CoreMinimal.h"
#include "BarrierEffectHandler.h"
#include "StrongRayHandler.generated.h"

UCLASS()
class UStrongRayHandler : public UBarrierEffectHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float MinRayDistance;
    
public:
    UStrongRayHandler();

};

