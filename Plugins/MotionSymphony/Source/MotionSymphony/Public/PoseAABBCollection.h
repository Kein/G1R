#pragma once
#include "CoreMinimal.h"
#include "PoseAABB.h"
#include "PoseMotionData.h"
#include "PoseAABBCollection.generated.h"

USTRUCT()
struct MOTIONSYMPHONY_API FPoseAABBCollection {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPoseAABB> ChildAABBs;
    
    UPROPERTY()
    FPoseMotionData Center;
    
    UPROPERTY()
    FPoseMotionData Extents;
    
    FPoseAABBCollection();
};

