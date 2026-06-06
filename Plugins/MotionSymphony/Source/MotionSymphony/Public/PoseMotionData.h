#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMotionAnimAssetType.h"
#include "JointData.h"
#include "MotionTraitField.h"
#include "TrajectoryPoint.h"
#include "PoseMotionData.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FPoseMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 PoseId;
    
    UPROPERTY(BlueprintReadOnly)
    EMotionAnimAssetType AnimType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 AnimId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CandidateSetId;
    
    UPROPERTY(BlueprintReadOnly)
    float Time;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D BlendSpacePosition;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NextPoseId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LastPoseId;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMirrored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoNotUse;
    
    UPROPERTY(BlueprintReadWrite)
    FVector LocalVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    float RotationalVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FTrajectoryPoint> Trajectory;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FJointData> JointData;
    
    UPROPERTY(BlueprintReadWrite)
    float Favour;
    
    UPROPERTY(BlueprintReadWrite)
    FMotionTraitField Traits;
    
    FPoseMotionData();
};

