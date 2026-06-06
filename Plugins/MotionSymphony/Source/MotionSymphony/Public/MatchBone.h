#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "MatchBone.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMatchBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference bone;
    
    UPROPERTY(EditAnywhere)
    float PositionWeight;
    
    UPROPERTY(EditAnywhere)
    float VelocityWeight;
    
    FMatchBone();
};

