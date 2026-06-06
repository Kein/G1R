#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "MatchBone.h"
#include "PoseMatchData.h"
#include "AnimNode_PoseMatchBase.generated.h"

class UMirroringProfile;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_PoseMatchBase : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PoseInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PosesEndTime;
    
    UPROPERTY(EditAnywhere)
    float BodyVelocityWeight;
    
    UPROPERTY(EditAnywhere)
    TArray<FMatchBone> PoseConfig;
    
    UPROPERTY(EditAnywhere)
    bool bEnableMirroring;
    
    UPROPERTY(EditAnywhere)
    UMirroringProfile* MirroringProfile;
    
protected:
    UPROPERTY()
    TArray<FPoseMatchData> Poses;
    
public:
    FAnimNode_PoseMatchBase();
};

