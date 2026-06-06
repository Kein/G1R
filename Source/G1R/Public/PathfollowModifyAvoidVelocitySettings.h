#pragma once
#include "CoreMinimal.h"
#include "PathfollowModifyAvoidVelocitySettings.generated.h"

USTRUCT(BlueprintType)
struct FPathfollowModifyAvoidVelocitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBasicSpeedModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MediumRangeVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShortRangeVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFastSpeedModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FastSpeedVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSlowdownNearCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlowDownNearCurvesSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlowDownNearCurvesForecastTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SteerSpeedAgentRadiusRangeMultiplier;
    
    G1R_API FPathfollowModifyAvoidVelocitySettings();
};

