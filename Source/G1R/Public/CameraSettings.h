#pragma once
#include "CoreMinimal.h"
#include "CameraCombatSettings.h"
#include "CameraSettings_Stance.h"
#include "CameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraSettings_Stance VelocityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraSettings_Stance LookingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraSettings_Stance Aiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraCombatSettings Combat;
    
    G1R_API FCameraSettings();
};

