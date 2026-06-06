#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ETrajectoryErrorWarpMode.h"
#include "TrajectoryErrorWarping.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONSYMPHONY_API UTrajectoryErrorWarping : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETrajectoryErrorWarpMode WarpMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WarpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTrajectoryLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ErrorActivationRange;
    
    UTrajectoryErrorWarping(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float CalculateTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed);
    
};

