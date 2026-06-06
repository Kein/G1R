#pragma once
#include "CoreMinimal.h"
#include "LookAtBoneConfig.h"
#include "LookAtEyeConfig.h"
#include "LookAtConfig.generated.h"

USTRUCT(BlueprintType)
struct PROCEDURALANIMATIONTKRUNTIME_API FLookAtConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLookAtBoneConfig> Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLookAtEyeConfig> Eyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLookAtAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtTargetSmoothSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConfigBlendSpeed;
    
    FLookAtConfig();
};

