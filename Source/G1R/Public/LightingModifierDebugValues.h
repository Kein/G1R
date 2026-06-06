#pragma once
#include "CoreMinimal.h"
#include "LightingModifierDebugValues.generated.h"

class ULightingModifier;

USTRUCT()
struct FLightingModifierDebugValues {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ULightingModifier*> CurrentModifiers;
    
    G1R_API FLightingModifierDebugValues();
};

