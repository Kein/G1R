#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InGameTime.h"
#include "DailyRoutineSimulatedCharacter.generated.h"

USTRUCT()
struct FDailyRoutineSimulatedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform LastKnownTransform;
    
    UPROPERTY()
    FTransform LastTransformSetBySimulation;
    
    UPROPERTY()
    FBox MovementBoundsEstimate;
    
    UPROPERTY()
    float DistanceUntilUpdate;
    
    UPROPERTY()
    float WalkingSpeedUnitsPerSecond;
    
    UPROPERTY()
    FInGameTime IdleUntil;
    
    G1R_API FDailyRoutineSimulatedCharacter();
};

