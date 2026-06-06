#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DailyRoutineSimulatedLightSource.generated.h"

USTRUCT()
struct FDailyRoutineSimulatedLightSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LightIntensity;
    
    UPROPERTY(EditAnywhere)
    float LightRadius;
    
    UPROPERTY(EditAnywhere)
    FColor LightColor;
    
    UPROPERTY(EditAnywhere)
    FVector PositionOffset;
    
    G1R_API FDailyRoutineSimulatedLightSource();
};

