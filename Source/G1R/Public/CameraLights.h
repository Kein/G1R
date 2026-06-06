#pragma once
#include "CoreMinimal.h"
#include "CameraLights.generated.h"

class ARectLight;

USTRUCT()
struct FCameraLights {
    GENERATED_BODY()
public:
    UPROPERTY()
    ARectLight* KeyLight;
    
    UPROPERTY()
    ARectLight* RimLight;
    
    UPROPERTY()
    ARectLight* KeyReverseLight;
    
    UPROPERTY()
    ARectLight* RimReverseLight;
    
    UPROPERTY()
    TArray<ARectLight*> AdditionalLights;
    
    G1R_API FCameraLights();
};

