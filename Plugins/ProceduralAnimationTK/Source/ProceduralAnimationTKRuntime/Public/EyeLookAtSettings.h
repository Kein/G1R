#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "EyeLookAtSettings.generated.h"

USTRUCT(BlueprintType)
struct FEyeLookAtSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference EyeBone;
    
    UPROPERTY(EditAnywhere)
    FVector EyeForwardAxis;
    
    UPROPERTY(EditAnywhere)
    FVector EyeUpAxis;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval PitchConstraints;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval YawConstraints;
    
    UPROPERTY(EditAnywhere)
    float MaxAngularSpeedDeg;
    
    UPROPERTY(EditAnywhere)
    float LookAtBlendWeight;
    
    UPROPERTY(EditAnywhere)
    float BlendDampingSpeed;
    
    PROCEDURALANIMATIONTKRUNTIME_API FEyeLookAtSettings();
};

