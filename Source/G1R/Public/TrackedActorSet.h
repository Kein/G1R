#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrackedActorSet.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FTrackedActorSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<TWeakObjectPtr<AActor>, FBox> TrackedActorBounds;
    
    UPROPERTY()
    TMap<TWeakObjectPtr<USceneComponent>, FBox> TrackedComponentBounds;
    
    G1R_API FTrackedActorSet();
};

