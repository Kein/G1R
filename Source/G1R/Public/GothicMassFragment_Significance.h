#pragma once
#include "CoreMinimal.h"
#include "MassCommonTypes.h"
#include "GothicMassFragment_Significance.generated.h"

USTRUCT()
struct G1R_API FGothicMassFragment_Significance : public FMassFragment {
    GENERATED_BODY()
public:
    UPROPERTY()
    float BaseSignificance;
    
    UPROPERTY()
    float FinalSignificance;
    
    UPROPERTY()
    float ForcedSignificance;
    
    UPROPERTY()
    bool bAllowedToBeVisible;
    
    UPROPERTY()
    float LastTimeOverSpawningSignificanceThreshold;
    
    FGothicMassFragment_Significance();
};

