#pragma once
#include "CoreMinimal.h"
#include "PoseMotionData.h"
#include "PoseAABB.generated.h"

USTRUCT()
struct MOTIONSYMPHONY_API FPoseAABB {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPoseMotionData> Poses;
    
    UPROPERTY()
    FPoseMotionData Center;
    
    UPROPERTY()
    FPoseMotionData Extents;
    
    FPoseAABB();
};

