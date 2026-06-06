#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "LookAtBoneConfig.generated.h"

USTRUCT(BlueprintType)
struct PROCEDURALANIMATIONTKRUNTIME_API FLookAtBoneConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoneUpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator ForwardAxisOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConeAlongBoneUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Swing1LimitDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Swing2LimitDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TwistLimitDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator ConstraintFrameRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularSpeedDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendDampingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EyeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ControlCurve;
    
    FLookAtBoneConfig();
};

