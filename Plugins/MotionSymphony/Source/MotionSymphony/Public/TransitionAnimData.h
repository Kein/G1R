#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DistanceMatchingModule.h"
#include "ETransitionDirectionMethod.h"
#include "TransitionAnimData.generated.h"

class UAnimSequence;

USTRUCT()
struct MOTIONSYMPHONY_API FTransitionAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimSequence;
    
    UPROPERTY(EditAnywhere)
    FVector CurrentMove;
    
    UPROPERTY(EditAnywhere)
    FVector DesiredMove;
    
    UPROPERTY(EditAnywhere)
    ETransitionDirectionMethod TransitionDirectionMethod;
    
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bMirror;
    
    UPROPERTY()
    int32 StartPose;
    
    UPROPERTY()
    int32 EndPose;
    
    UPROPERTY(Transient)
    FDistanceMatchingModule DistanceMatchModule;
    
    FTransitionAnimData();
};

