#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "InputProfile.h"
#include "Trajectory.h"
#include "TrajectoryGenerator_Base.generated.h"

class UMotionMatchConfig;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONSYMPHONY_API UTrajectoryGenerator_Base : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMotionMatchConfig* MotionMatchConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecordingFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlattenTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActorToModelRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugRandomInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D DebugTimeIntervalRange;
    
    UPROPERTY()
    FTrajectory Trajectory;
    
    UPROPERTY()
    FVector InputVector;
    
    UTrajectoryGenerator_Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTrajectoryInputZ(float ZAxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryInputY(float YAxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryInputX(float XAxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryInputVector(FVector TrajectoryInput);
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryInput(float XAxisValue, float YAxisValue, float ZAxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInputProfile(UPARAM(Ref) FInputProfile& InInputProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSkeletalMeshComponent(USkeletalMeshComponent* InSkelMesh);
    
    UFUNCTION(BlueprintCallable)
    bool IsIdle();
    
    UFUNCTION(BlueprintCallable)
    bool HasMoveInput();
    
    UFUNCTION(BlueprintCallable)
    FTrajectory GetCurrentTrajectory();
    
    UFUNCTION(BlueprintCallable)
    void DrawTrajectoryDebug(FVector DrawOffset);
    
    UFUNCTION(BlueprintCallable)
    void ClearPastTrajectoryMotion();
    
    UFUNCTION(BlueprintCallable)
    void ClearInputProfile();
    
    UFUNCTION(BlueprintCallable)
    void ClearFutureTrajectoryMotion();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllTrajectoryMotion();
    
};

