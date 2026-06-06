#pragma once
#include "CoreMinimal.h"
#include "GExpression.generated.h"

USTRUCT(BlueprintType)
struct GATESHADOW_API FGExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ExpressionName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumJoints;
    
    UPROPERTY()
    int32 FlatJointStartIndex;
    
    UPROPERTY()
    int32 FlatJointEqualToNeutralStartIndex;
    
    FGExpression();
};

