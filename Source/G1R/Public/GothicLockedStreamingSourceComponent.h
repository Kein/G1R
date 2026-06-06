#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GothicLockedStreamingSourceComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicLockedStreamingSourceComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UGothicLockedStreamingSourceComponent(const FObjectInitializer& ObjectInitializer);

};

