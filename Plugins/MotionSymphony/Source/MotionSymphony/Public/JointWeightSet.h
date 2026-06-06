#pragma once
#include "CoreMinimal.h"
#include "JointWeightSet.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FJointWeightSet {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float Weight_Pos;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float Weight_Vel;
    
    FJointWeightSet();
};

