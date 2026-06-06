#pragma once
#include "CoreMinimal.h"
#include "TrajectoryPoint.h"
#include "Trajectory.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FTrajectory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTrajectoryPoint> TrajectoryPoints;
    
    FTrajectory();
};

