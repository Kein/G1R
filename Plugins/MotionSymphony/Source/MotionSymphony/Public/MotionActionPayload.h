#pragma once
#include "CoreMinimal.h"
#include "MotionActionPayload.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMotionActionPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeadLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TailLength;
    
    FMotionActionPayload();
};

