#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/BoneReference.h"
#include "Animation/AnimNodeBase.h"
#include "EBodyVelocityMethod.h"
#include "AnimNode_MotionRecorder.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_MotionRecorder : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(EditAnywhere)
    FVector BodyVelocity;
    
    UPROPERTY(EditAnywhere)
    EBodyVelocityMethod BodyVelocityRecordMethod;
    
    UPROPERTY(EditAnywhere)
    bool bRetargetPose;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> BonesToRecord;
    
    FAnimNode_MotionRecorder();
};

