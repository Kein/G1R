#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JointExpressionRotations.generated.h"

USTRUCT(BlueprintType)
struct GATESHADOW_API FJointExpressionRotations {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FQuat> ExpressionRotations;
    
    FJointExpressionRotations();
};

