#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_PoseMatchBase.h"
#include "DistanceMatchingNodeData.h"
#include "EDistanceMatchingUseCase.h"
#include "ETransitionMatchingOrder.h"
#include "TransitionAnimData.h"
#include "AnimNode_TransitionMatching.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_TransitionMatching : public FAnimNode_PoseMatchBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CurrentMoveVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DesiredMoveVector;
    
    UPROPERTY(EditAnywhere)
    ETransitionMatchingOrder TransitionMatchingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartDirectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndDirectionWeight;
    
    UPROPERTY(EditAnywhere)
    TArray<FTransitionAnimData> TransitionAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDistanceMatchingUseCase DistanceMatchingUseCase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDistanceMatchingNodeData DistanceMatchData;
    
protected:
    UPROPERTY()
    TArray<FTransitionAnimData> MirroredTransitionAnimData;
    
public:
    FAnimNode_TransitionMatching();
};

