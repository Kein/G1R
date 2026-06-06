#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JointData.h"
#include "PoseMatchData.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FPoseMatchData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PoseId;
    
    UPROPERTY()
    int32 AnimId;
    
    UPROPERTY()
    bool bMirror;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    FVector LocalVelocity;
    
    UPROPERTY()
    TArray<FJointData> BoneData;
    
    FPoseMatchData();
};

