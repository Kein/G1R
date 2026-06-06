#pragma once
#include "CoreMinimal.h"
#include "PoseBin.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FPoseBin {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> SerializedPoseIds;
    
    FPoseBin();
};

