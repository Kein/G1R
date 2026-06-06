#pragma once
#include "CoreMinimal.h"
#include "NavModifierVolume.h"
#include "NavMeshExclusionZone.generated.h"

UCLASS()
class G1R_API ANavMeshExclusionZone : public ANavModifierVolume {
    GENERATED_BODY()
public:
    ANavMeshExclusionZone(const FObjectInitializer& ObjectInitializer);

};

