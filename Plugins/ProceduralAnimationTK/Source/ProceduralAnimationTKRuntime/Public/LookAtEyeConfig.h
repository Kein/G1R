#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "LookAtEyeConfig.generated.h"

USTRUCT(BlueprintType)
struct PROCEDURALANIMATIONTKRUNTIME_API FLookAtEyeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference EyeBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EyeForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EyeUpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatInterval PitchConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatInterval YawConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularSpeedDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendDampingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ControlCurve;
    
    FLookAtEyeConfig();
};

