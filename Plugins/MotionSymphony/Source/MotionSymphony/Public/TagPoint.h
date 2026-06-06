#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "MotionAnimAsset.h"
#include "PoseMotionData.h"
#include "TagPoint.generated.h"

class UMotionDataAsset;

UCLASS(Abstract, CollapseCategories)
class MOTIONSYMPHONY_API UTagPoint : public UAnimNotify {
    GENERATED_BODY()
public:
    UTagPoint();

    UFUNCTION(BlueprintImplementableEvent)
    bool Received_PreProcessTag(const FPoseMotionData& PointPose, UPARAM(Ref) FMotionAnimAsset& OutMotionAnim, UMotionDataAsset* OutMotionData, const float Time) const;
    
};

