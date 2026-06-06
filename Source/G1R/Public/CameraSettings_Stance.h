#pragma once
#include "CoreMinimal.h"
#include "CameraMovementSettings.h"
#include "CameraSettings_Stance.generated.h"

USTRUCT(BlueprintType)
struct FCameraSettings_Stance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraMovementSettings Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraMovementSettings Crouching;
    
    G1R_API FCameraSettings_Stance();
};

