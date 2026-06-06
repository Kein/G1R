#pragma once
#include "CoreMinimal.h"
#include "CameraCombatSettings_Mode.h"
#include "CameraCombatSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraCombatSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraCombatSettings_Mode FreeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraCombatSettings_Mode VsOneOrTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraCombatSettings_Mode VsThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraCombatSettings_Mode VsFly;
    
    G1R_API FCameraCombatSettings();
};

