#pragma once
#include "CoreMinimal.h"
#include "PerceptionHearingSettings.h"
#include "PerceptionSightSettings.h"
#include "PerceptionSmellSettings.h"
#include "PerceptionSettings.generated.h"

USTRUCT(BlueprintType)
struct FPerceptionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPerceptionSightSettings Sight;
    
    UPROPERTY(EditDefaultsOnly)
    FPerceptionSmellSettings Smell;
    
    UPROPERTY(EditDefaultsOnly)
    FPerceptionHearingSettings Hearing;
    
    G1R_API FPerceptionSettings();
};

