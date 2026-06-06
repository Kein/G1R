#pragma once
#include "CoreMinimal.h"
#include "TrajectoryWeightSet.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FTrajectoryWeightSet {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float Weight_Pos;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float Weight_Facing;
    
    FTrajectoryWeightSet();
};

