#pragma once
#include "CoreMinimal.h"
#include "JointExpressionRotations_Packed.generated.h"

USTRUCT(BlueprintType)
struct GATESHADOW_API FJointExpressionRotations_Packed {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_IndexStart;
    
    UPROPERTY()
    int32 m_IndexCount;
    
    FJointExpressionRotations_Packed();
};

