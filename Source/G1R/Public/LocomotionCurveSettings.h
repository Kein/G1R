#pragma once
#include "CoreMinimal.h"
#include "LocomotionCurveSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FLocomotionCurveSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* m_BuoyancyCurve;
    
    UPROPERTY()
    UCurveFloat* m_GroundFrictionCurve;
    
    UPROPERTY()
    UCurveFloat* m_AirFrictionCurve;
    
    UPROPERTY()
    UCurveFloat* m_DecelerationCurve;
    
    UPROPERTY()
    UCurveFloat* m_AccelerationCurve;
    
    UPROPERTY()
    UCurveFloat* m_RotationRateCurve;
    
    G1R_API FLocomotionCurveSettings();
};

