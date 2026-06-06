#pragma once
#include "CoreMinimal.h"
#include "MassEntityTypes.h"
#include "GothicMassTag_HasNavMeshAvailable.generated.h"

USTRUCT()
struct FGothicMassTag_HasNavMeshAvailable : public FMassTag {
    GENERATED_BODY()
public:
    G1R_API FGothicMassTag_HasNavMeshAvailable();
};

