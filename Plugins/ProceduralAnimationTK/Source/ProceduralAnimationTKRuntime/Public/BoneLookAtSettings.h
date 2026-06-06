#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/BoneReference.h"
#include "BoneLookAtSettings.generated.h"

USTRUCT(BlueprintType)
struct FBoneLookAtSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference bone;
    
    UPROPERTY(EditAnywhere)
    FVector BoneForwardAxis;
    
    UPROPERTY(EditAnywhere)
    FVector BoneUpAxis;
    
    UPROPERTY(EditAnywhere)
    FRotator ForwardAxisOffsetRotation;
    
    UPROPERTY(EditAnywhere)
    bool bConeAlongBoneUp;
    
    UPROPERTY(EditAnywhere)
    float Swing1LimitDegrees;
    
    UPROPERTY(EditAnywhere)
    float Swing2LimitDegrees;
    
    UPROPERTY(EditAnywhere)
    float TwistLimitDegrees;
    
    UPROPERTY(EditAnywhere)
    FRotator ConstraintFrameRotation;
    
    UPROPERTY(EditAnywhere)
    float MaxAngularSpeedDeg;
    
    UPROPERTY(EditAnywhere)
    float LookAtBlendWeight;
    
    UPROPERTY(EditAnywhere)
    float BlendDampingSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector EyeOffset;
    
    PROCEDURALANIMATIONTKRUNTIME_API FBoneLookAtSettings();
};

