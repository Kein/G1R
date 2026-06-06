#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JointData.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FJointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Velocity;
    
    FJointData();
};

