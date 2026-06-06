#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoxNavObstacleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UBoxNavObstacleComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBoxNavObstacleComponent(const FObjectInitializer& ObjectInitializer);

};

