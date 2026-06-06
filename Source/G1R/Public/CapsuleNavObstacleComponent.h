#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "CapsuleNavObstacleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UCapsuleNavObstacleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UCapsuleNavObstacleComponent(const FObjectInitializer& ObjectInitializer);

};

