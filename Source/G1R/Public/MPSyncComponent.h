#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MPSyncComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UMPSyncComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMPSyncComponent(const FObjectInitializer& ObjectInitializer);

};

