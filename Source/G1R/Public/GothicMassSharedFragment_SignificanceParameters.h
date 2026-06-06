#pragma once
#include "CoreMinimal.h"
#include "MassCommonTypes.h"
#include "CharacterSignificanceSettings.h"
#include "GothicMassSharedFragment_SignificanceParameters.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGothicMassSharedFragment_SignificanceParameters : public FMassSharedFragment {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCharacterSignificanceSettings SignificanceSettings;
    
    FGothicMassSharedFragment_SignificanceParameters();
};

