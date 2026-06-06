#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RayPoints.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FRayPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector position;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraComponent* Ray;
    
    G1R_API FRayPoints();
};

