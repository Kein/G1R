#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "ConversationCameraPresetBase.h"
#include "ConversationCameraPresetFoVAngle.generated.h"

class AActor;

UCLASS(EditInlineNew)
class G1R_API UConversationCameraPresetFoVAngle : public UConversationCameraPresetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve AngleInputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve PositionFoVOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve RotationFoVOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ViewAngleCurve;
    
    UConversationCameraPresetFoVAngle();

    UFUNCTION(BlueprintPure)
    void GetFocusPoint(const FTransform& InputTransform, AActor* Speaker, AActor* Listener, FVector& OutPoint, float& OutFoVAngle) const;
    
protected:
    UFUNCTION()
    FTransform CalculateOffsetFromAngles(const FVector& SpeakerPos, const FVector& ListenerPos, const float HorizontalOffsetAngle, const float VerticalOffsetAngle, float FoVAngleFactor) const;
    
};

