#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "ConversationCameraPresetBase.h"
#include "ConversationCameraPresetFocusActor.generated.h"

UCLASS(EditInlineNew)
class G1R_API UConversationCameraPresetFocusActor : public UConversationCameraPresetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FocusActorPresetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve LerpAlphaCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve PositionOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve RotationOffsetCurve;
    
public:
    UConversationCameraPresetFocusActor();

};

