#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_AssetPlayerBase.h"
#include "CalibrationData.h"
#include "DistanceMatchPayload.h"
#include "EPastTrajectoryMode.h"
#include "EPoseMatchMethod.h"
#include "ETransitionMethod.h"
#include "MotionTraitField.h"
#include "Trajectory.h"
#include "AnimNode_MSMotionMatching.generated.h"

class ACharacter;
class UCharacterMovementComponent;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_MSMotionMatching : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ACharacter* ThisCharacter;
    
    UPROPERTY(Instanced)
    UCharacterMovementComponent* MovementComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTrajectory DesiredTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlaybackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideQualityVsResponsivenessRatio;
    
    UPROPERTY()
    TMap<FMotionTraitField, FCalibrationData> FinalCalibrationSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlendOutEarly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPoseMatchMethod PoseMatchMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETransitionMethod TransitionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPastTrajectoryMode PastTrajectoryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlendTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TrajectoryBlendMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFavourCurrentPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentPoseFavour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableToleranceTest;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval PlayRateScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PositionTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhaseMatchWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMotionTraitField RequiredTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDistanceMatchPayload DistanceMatchPayload;
    
    FAnimNode_MSMotionMatching();
};

