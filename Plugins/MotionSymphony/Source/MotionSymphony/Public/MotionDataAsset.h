#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "Animation/BlendSpace.h"
#include "CalibrationData.h"
#include "DistanceMatchGroup.h"
#include "DistanceMatchIdentifier.h"
#include "EJointVelocityCalculationMethod.h"
#include "KMeansClusteringSet.h"
#include "MotionAction.h"
#include "MotionAnimSequence.h"
#include "MotionBlendSpace.h"
#include "MotionComposite.h"
#include "MotionTraitField.h"
#include "PoseMotionData.h"
#include "MotionDataAsset.generated.h"

class UMMOptimisationModule;
class UMirroringProfile;
class UMotionAnimMetaDataWrapper;
class UMotionCalibration;
class UMotionMatchConfig;

UCLASS()
class MOTIONSYMPHONY_API UMotionDataAsset : public UAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PoseInterval;
    
    UPROPERTY(EditAnywhere)
    UMotionMatchConfig* MotionMatchConfig;
    
    UPROPERTY(EditAnywhere)
    EJointVelocityCalculationMethod JointVelocityCalculationMethod;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENotifyTriggerMode::Type> NotifyTriggerMode;
    
    UPROPERTY(EditAnywhere)
    bool bOptimize;
    
    UPROPERTY(EditAnywhere)
    UMMOptimisationModule* OptimisationModule;
    
    UPROPERTY(EditAnywhere)
    UMotionCalibration* PreprocessCalibration;
    
    UPROPERTY(EditAnywhere)
    UMirroringProfile* MirroringProfile;
    
    UPROPERTY()
    bool bIsProcessed;
    
    UPROPERTY()
    bool bIsOptimised;
    
    UPROPERTY()
    TArray<FMotionAnimSequence> SourceMotionAnims;
    
    UPROPERTY()
    TArray<FMotionBlendSpace> SourceBlendSpaces;
    
    UPROPERTY()
    TArray<FMotionComposite> SourceComposites;
    
    UPROPERTY()
    TArray<FPoseMotionData> Poses;
    
    UPROPERTY()
    TMap<FMotionTraitField, FCalibrationData> FeatureStandardDeviations;
    
    UPROPERTY()
    TMap<FDistanceMatchIdentifier, FDistanceMatchGroup> DistanceMatchSections;
    
    UPROPERTY()
    TArray<FMotionAction> Actions;
    
    UPROPERTY()
    FKMeansClusteringSet ChosenTrajClusterSet;
    
    UPROPERTY(Instanced)
    UMotionAnimMetaDataWrapper* MotionMetaWrapper;
    
    UMotionDataAsset();

};

