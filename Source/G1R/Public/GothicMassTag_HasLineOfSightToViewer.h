#pragma once
#include "CoreMinimal.h"
#include "MassEntityTypes.h"
#include "GothicMassTag_HasLineOfSightToViewer.generated.h"

USTRUCT()
struct FGothicMassTag_HasLineOfSightToViewer : public FMassTag {
    GENERATED_BODY()
public:
    G1R_API FGothicMassTag_HasLineOfSightToViewer();
};

