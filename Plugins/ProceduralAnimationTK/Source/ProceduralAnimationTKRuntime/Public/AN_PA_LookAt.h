#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneLookAtSettings.h"
#include "EyeLookAtSettings.h"
#include "LookAtConfig.h"
#include "AN_PA_LookAt.generated.h"

USTRUCT(BlueprintType)
struct PROCEDURALANIMATIONTKRUNTIME_API FAN_PA_LookAt : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnableLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig LookAtConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetStateOnNextUpdate;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneLookAtSettings> Bones;
    
    UPROPERTY(EditAnywhere)
    TArray<FEyeLookAtSettings> Eyes;
    
    UPROPERTY(EditAnywhere)
    float MaxLookAtAngleDegrees;
    
    UPROPERTY(EditAnywhere)
    float FadeAngleDegrees;
    
    UPROPERTY(EditAnywhere)
    float LookAtTargetSmoothSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bUseChainRootAngleBlend;
    
    UPROPERTY(EditAnywhere)
    bool bUseDeviationInfluence;
    
    UPROPERTY(EditAnywhere)
    float DeviationInfluenceExponent;
    
    UPROPERTY(EditAnywhere)
    bool bSmoothInComponentSpace;
    
    UPROPERTY(EditAnywhere)
    bool bUseSphericalInterpolation;
    
    UPROPERTY(EditAnywhere)
    bool bUseEyeOffset;
    
    FAN_PA_LookAt();
};

