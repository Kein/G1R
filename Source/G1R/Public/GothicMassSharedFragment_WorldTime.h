#pragma once
#include "CoreMinimal.h"
#include "MassLODFragments.h"
#include "GothicMassSharedFragment_WorldTime.generated.h"

USTRUCT()
struct G1R_API FGothicMassSharedFragment_WorldTime : public FMassSharedFragment {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TimeSeconds;
    
    UPROPERTY()
    float RealTimeSeconds;
    
    FGothicMassSharedFragment_WorldTime();
};

