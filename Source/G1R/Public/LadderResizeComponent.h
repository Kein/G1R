#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "LadderResizeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULadderResizeComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    ULadderResizeComponent(const FObjectInitializer& ObjectInitializer);

};

