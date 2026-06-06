#pragma once
#include "CoreMinimal.h"
#include "InteractiveObjectAnchorComponent.h"
#include "InteractiveObjectCenterAnchorComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInteractiveObjectCenterAnchorComponent : public UInteractiveObjectAnchorComponent {
    GENERATED_BODY()
public:
    UInteractiveObjectCenterAnchorComponent(const FObjectInitializer& ObjectInitializer);

};

