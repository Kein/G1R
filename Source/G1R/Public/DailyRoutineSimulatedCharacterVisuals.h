#pragma once
#include "CoreMinimal.h"
#include "DailyRoutineSimulatedCharacterVisuals.generated.h"

class USkeletalMesh;

USTRUCT()
struct FDailyRoutineSimulatedCharacterVisuals {
    GENERATED_BODY()
public:
    UPROPERTY()
    TOptional<USkeletalMesh*> PendingMesh;
    
    G1R_API FDailyRoutineSimulatedCharacterVisuals();
};

