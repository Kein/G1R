#pragma once
#include "CoreMinimal.h"
#include "MotionTraitField.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMotionTraitField {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 A;
    
    UPROPERTY()
    int32 B;
    
    FMotionTraitField();
};
FORCEINLINE uint32 GetTypeHash(const FMotionTraitField) { return 0; }

