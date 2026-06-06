#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETrajectoryPreProcessMethod.h"
#include "MotionAnimMetaDataWrapper.generated.h"

class UAnimSequence;

UCLASS(DefaultToInstanced, EditInlineNew)
class MOTIONSYMPHONY_API UMotionAnimMetaDataWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bLoop;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    bool bEnableMirroring;
    
    UPROPERTY(EditAnywhere)
    bool bFlattenTrajectory;
    
    UPROPERTY(EditAnywhere)
    ETrajectoryPreProcessMethod PastTrajectory;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* PrecedingMotion;
    
    UPROPERTY(EditAnywhere)
    ETrajectoryPreProcessMethod FutureTrajectory;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* FollowingMotion;
    
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> TraitNames;
    
    UMotionAnimMetaDataWrapper();

};

