#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraCombatSettings_Mode.generated.h"

USTRUCT(BlueprintType)
struct FCameraCombatSettings_Mode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PivotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator CameraRotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PivotLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOV;
    
    G1R_API FCameraCombatSettings_Mode();
};

