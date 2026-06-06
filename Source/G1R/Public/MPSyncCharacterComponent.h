#pragma once
#include "CoreMinimal.h"
#include "MPSyncComponent.h"
#include "MPSyncCharacterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UMPSyncCharacterComponent : public UMPSyncComponent {
    GENERATED_BODY()
public:
    UMPSyncCharacterComponent(const FObjectInitializer& ObjectInitializer);

};

