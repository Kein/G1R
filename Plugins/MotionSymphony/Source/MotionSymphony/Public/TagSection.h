#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "MotionAnimAsset.h"
#include "PoseMotionData.h"
#include "TagSection.generated.h"

class UMotionDataAsset;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class MOTIONSYMPHONY_API UTagSection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UTagSection();

    UFUNCTION(BlueprintImplementableEvent)
    bool Received_PreProcessTag(UPARAM(Ref) FMotionAnimAsset& OutMotionAnim, UMotionDataAsset* OutMotionData, const float StartTime, const float EndTime) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Received_PreProcessPose(UPARAM(Ref) FPoseMotionData& OutPose, UPARAM(Ref) FMotionAnimAsset& OutMotionAnim, UMotionDataAsset* OutMotionData, const float StartTime, const float EndTime) const;
    
};

