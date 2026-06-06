#pragma once
#include "CoreMinimal.h"
#include "JointWeightSet.h"
#include "TrajectoryWeightSet.h"
#include "CalibrationData.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FCalibrationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Weight_Momentum;
    
    UPROPERTY()
    float Weight_AngularMomentum;
    
    UPROPERTY()
    TArray<FJointWeightSet> PoseJointWeights;
    
    UPROPERTY()
    TArray<FTrajectoryWeightSet> TrajectoryWeights;
    
    FCalibrationData();
};

