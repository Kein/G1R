#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimCurveTypes.h"
#include "EDistanceMatchBasis.h"
#include "EDistanceMatchType.h"
#include "EMotionAnimAssetType.h"
#include "DistanceMatchSection.generated.h"

USTRUCT()
struct MOTIONSYMPHONY_API FDistanceMatchSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TargetTime;
    
    UPROPERTY()
    float StartTime;
    
    UPROPERTY()
    float EndTime;
    
    UPROPERTY()
    EDistanceMatchType MatchType;
    
    UPROPERTY()
    EDistanceMatchBasis MatchBasis;
    
    UPROPERTY()
    int32 AnimId;
    
    UPROPERTY()
    EMotionAnimAssetType AnimType;
    
    UPROPERTY()
    int32 StartPoseId;
    
    UPROPERTY()
    int32 EndPoseId;
    
    UPROPERTY()
    float MaxDistance;
    
    UPROPERTY()
    FFloatCurve DistanceCurve;
    
    FDistanceMatchSection();
};

