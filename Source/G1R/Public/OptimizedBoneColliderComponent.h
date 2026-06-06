#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OptimizedBoneColliderComponent.generated.h"

USTRUCT()
struct FOptimizedBoneColliderComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    G1R_API FOptimizedBoneColliderComponent();
};

