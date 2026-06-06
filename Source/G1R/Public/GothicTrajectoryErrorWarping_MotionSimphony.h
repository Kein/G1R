#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrajectoryErrorWarping.h"
#include "GothicActorComponentInterface.h"
#include "GothicTrajectoryErrorWarping_MotionSimphony.generated.h"

class UDataModule_Locomotion;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicTrajectoryErrorWarping_MotionSimphony : public UTrajectoryErrorWarping, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WarpRateStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ErrorActivationRangeStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WarpRateLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ErrorActivationRangeLocomotion;
    
public:
    UGothicTrajectoryErrorWarping_MotionSimphony(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ApplyTrajectoryErrorWarpingLocal(const float DeltaTime, const float PlaybackSpeed);
    

    // Fix for true pure virtual functions not being implemented
};

