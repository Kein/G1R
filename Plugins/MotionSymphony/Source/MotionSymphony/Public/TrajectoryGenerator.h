#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETrajectoryControlMode.h"
#include "ETrajectoryMoveMode.h"
#include "TrajectoryGenerator_Base.h"
#include "TrajectoryGenerator.generated.h"

class UCameraComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONSYMPHONY_API UTrajectoryGenerator : public UTrajectoryGenerator_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StrafeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetDirectionOnIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETrajectoryMoveMode TrajectoryBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETrajectoryControlMode TrajectoryControlMode;
    
    UTrajectoryGenerator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetStrafeDirectionFromCamera(UCameraComponent* Camera);
    
};

