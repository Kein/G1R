#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "MSFootLockLimbDefinition.generated.h"

USTRUCT(BlueprintType)
struct FMSFootLockLimbDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference FootBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ToeBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference IkTarget;
    
    UPROPERTY(EditAnywhere)
    int32 LimbBoneCount;
    
    MOTIONSYMPHONY_API FMSFootLockLimbDefinition();
};

