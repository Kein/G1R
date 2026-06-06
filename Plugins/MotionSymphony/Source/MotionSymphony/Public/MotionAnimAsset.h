#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "EMotionAnimAssetType.h"
#include "ETrajectoryPreProcessMethod.h"
#include "MotionAnimAsset.generated.h"

class UAnimSequence;
class UAnimationAsset;
class UMotionDataAsset;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMotionAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 AnimId;
    
    UPROPERTY()
    EMotionAnimAssetType MotionAnimAssetType;
    
    UPROPERTY()
    bool bLoop;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    bool bEnableMirroring;
    
    UPROPERTY()
    bool bFlattenTrajectory;
    
    UPROPERTY()
    ETrajectoryPreProcessMethod PastTrajectory;
    
    UPROPERTY()
    ETrajectoryPreProcessMethod FutureTrajectory;
    
    UPROPERTY()
    UAnimationAsset* AnimAsset;
    
    UPROPERTY()
    UAnimSequence* PrecedingMotion;
    
    UPROPERTY()
    UAnimSequence* FollowingMotion;
    
    UPROPERTY()
    float CostMultiplier;
    
    UPROPERTY()
    TArray<FString> TraitNames;
    
    UPROPERTY()
    TArray<FAnimNotifyEvent> Tags;
    
    UPROPERTY(Transient)
    UMotionDataAsset* ParentMotionDataAsset;
    
    FMotionAnimAsset();
};

