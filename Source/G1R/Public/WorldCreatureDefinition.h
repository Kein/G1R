#pragma once
#include "CoreMinimal.h"
#include "WorldCreatureDefinition.generated.h"

class UAIState_DailyRoutine;

USTRUCT(BlueprintType)
struct FWorldCreatureDefinition {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAIState_DailyRoutine* m_DailyRoutineTemplate;
    
    G1R_API FWorldCreatureDefinition();
};

