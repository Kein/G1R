#pragma once
#include "CoreMinimal.h"
#include "PerceptionComponent.h"
#include "AmbientPerceptionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UAmbientPerceptionComponent : public UPerceptionComponent {
    GENERATED_BODY()
public:
    UAmbientPerceptionComponent(const FObjectInitializer& ObjectInitializer);

};

