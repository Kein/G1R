#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "DetailArrowComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UDetailArrowComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UDetailArrowComponent(const FObjectInitializer& ObjectInitializer);

};

