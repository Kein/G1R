#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraMovementSettings_Speed.h"
#include "CameraMovementSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraMovementSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraMovementSettings_Speed Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraMovementSettings_Speed Run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraMovementSettings_Speed Sprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PivotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationLagSpeed;
    
    G1R_API FCameraMovementSettings();
};

