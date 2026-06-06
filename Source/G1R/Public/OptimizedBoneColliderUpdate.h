#pragma once
#include "CoreMinimal.h"
#include "OptimizedBoneColliderComponent.h"
#include "OptimizedBoneColliderUpdate.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FOptimizedBoneColliderUpdate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<USceneComponent*, FOptimizedBoneColliderComponent> ComponentsToUpdateToRelativeTransforms;
    
public:
    G1R_API FOptimizedBoneColliderUpdate();
};

