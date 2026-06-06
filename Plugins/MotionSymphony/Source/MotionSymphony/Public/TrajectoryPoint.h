#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrajectoryPoint.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FTrajectoryPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite)
    float RotationZ;
    
    FTrajectoryPoint();
};

