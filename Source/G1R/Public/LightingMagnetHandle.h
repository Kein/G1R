#pragma once
#include "CoreMinimal.h"
#include "ESelectionType.h"
#include "LightingMagnetHandle.generated.h"

USTRUCT()
struct G1R_API FLightingMagnetHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Timer;
    
    UPROPERTY()
    float CallAfterTime;
    
    UPROPERTY()
    int32 LastIndex;
    
    UPROPERTY()
    ESelectionType NextSelection;
    
    FLightingMagnetHandle();
};

