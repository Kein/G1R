#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraMovementSettings_Speed.generated.h"

USTRUCT(BlueprintType)
struct FCameraMovementSettings_Speed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PivotLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOV;
    
    G1R_API FCameraMovementSettings_Speed();
};

