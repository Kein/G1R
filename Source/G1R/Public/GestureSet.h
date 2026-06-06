#pragma once
#include "CoreMinimal.h"
#include "ExpressionMontageContainer.h"
#include "GothicBaseConfig.h"
#include "GestureSet.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UGestureSet : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FExpressionMontageContainer> Gestures;
    
    UPROPERTY(EditAnywhere)
    TArray<FExpressionMontageContainer> Idles;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> PoseMatchBones;
    
    UPROPERTY(EditAnywhere)
    float PoseMatchingRandomness;
    
    UPROPERTY(EditAnywhere)
    float MaxPoseDifference;
    
    UPROPERTY(EditAnywhere)
    float WorstAcceptedPoseDifferenceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AllowedDurationMinMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AllowedDurationMaxMultiplier;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AdditionalAnimationStartTimeSecondsForPoseSearch;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlotIdleAnimations;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlotGestureAnimations;
    
    UGestureSet();

};

