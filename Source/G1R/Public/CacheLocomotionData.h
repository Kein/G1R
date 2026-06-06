#pragma once
#include "CoreMinimal.h"
#include "CacheLocomotionData.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT()
struct FCacheLocomotionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* DiagonalScaleAmountCurve;
    
    UPROPERTY()
    UCurveFloat* StrideBlendNWalk;
    
    UPROPERTY()
    UCurveFloat* StrideBlendNRun;
    
    UPROPERTY()
    UCurveFloat* StrideBlendCWalk;
    
    UPROPERTY()
    UCurveFloat* StrideBlendSwimmingWalk;
    
    UPROPERTY()
    UCurveFloat* StrideBlendSwimmingRun;
    
    UPROPERTY()
    UCurveFloat* StrideBlendDiveWalk;
    
    UPROPERTY()
    UCurveFloat* LandPredictionCurve;
    
    UPROPERTY()
    UCurveFloat* LeanInAirCurve;
    
    UPROPERTY()
    UCurveVector* YawOffsetFBCurve;
    
    UPROPERTY()
    UCurveVector* YawOffsetLRCurve;
    
    G1R_API FCacheLocomotionData();
};

