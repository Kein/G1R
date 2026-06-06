#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JointWeightSet.h"
#include "TrajectoryWeightSet.h"
#include "MotionCalibration.generated.h"

class UMotionMatchConfig;

UCLASS(Blueprintable)
class MOTIONSYMPHONY_API UMotionCalibration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMotionMatchConfig* MotionMatchConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideDefaults;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float QualityVsResponsivenessRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight_Momentum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight_AngularMomentum;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FJointWeightSet> PoseJointWeights;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FTrajectoryWeightSet> TrajectoryWeights;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JointPosition_DefaultWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JointVelocity_DefaultWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TrajectoryPosition_DefaultWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TrajectoryFacing_DefaultWeight;
    
public:
    UMotionCalibration();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryWeightSet(int32 Index, float Weight_Pos, float Weight_Facing);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneWeightSet(FName BoneName, float Weight_Pos, float Weight_Vel);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnGenerateTrajectoryWeightings();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGeneratePoseWeightings();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGenerateJointWeightings();
    
};

