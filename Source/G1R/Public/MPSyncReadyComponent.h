#pragma once
#include "CoreMinimal.h"
#include "MPSyncComponent.h"
#include "MPSyncReadyComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UMPSyncReadyComponent : public UMPSyncComponent {
    GENERATED_BODY()
public:
    UMPSyncReadyComponent(const FObjectInitializer& ObjectInitializer);

};

