#pragma once
#include "CoreMinimal.h"
#include "PoseMotionData.h"
#include "PoseCandidateSet.generated.h"

USTRUCT()
struct MOTIONSYMPHONY_API FPoseCandidateSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPoseMotionData AveragePose;
    
    UPROPERTY()
    int32 SetId;
    
    UPROPERTY()
    TArray<int32> PoseCandidateIds;
    
    FPoseCandidateSet();
};

