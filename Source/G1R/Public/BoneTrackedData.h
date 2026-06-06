#pragma once
#include "CoreMinimal.h"
#include "BoneTrackedData.generated.h"

USTRUCT(BlueprintType)
struct FBoneTrackedData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool InvertX;
    
    G1R_API FBoneTrackedData();
};

