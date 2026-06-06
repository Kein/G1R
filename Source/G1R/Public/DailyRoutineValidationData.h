#pragma once
#include "CoreMinimal.h"
#include "DailyRoutineValidationData.generated.h"

class AGothicCharacterState;

USTRUCT()
struct G1R_API FDailyRoutineValidationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AGothicCharacterState* CharacterState;
    
    FDailyRoutineValidationData();
};

