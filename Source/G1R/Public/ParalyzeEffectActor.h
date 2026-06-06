#pragma once
#include "CoreMinimal.h"
#include "DebuffEffectActorByTag.h"
#include "ParalyzeEffectActor.generated.h"

UCLASS()
class G1R_API AParalyzeEffectActor : public ADebuffEffectActorByTag {
    GENERATED_BODY()
public:
    AParalyzeEffectActor(const FObjectInitializer& ObjectInitializer);

};

