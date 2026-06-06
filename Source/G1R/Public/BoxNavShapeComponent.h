#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoxNavShapeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UBoxNavShapeComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBoxNavShapeComponent(const FObjectInitializer& ObjectInitializer);

};

