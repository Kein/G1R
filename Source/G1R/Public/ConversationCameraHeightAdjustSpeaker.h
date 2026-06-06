#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveVector.h"
#include "ConversationCameraPresetBase.h"
#include "ConversationCameraHeightAdjustSpeaker.generated.h"

UCLASS(EditInlineNew)
class UConversationCameraHeightAdjustSpeaker : public UConversationCameraPresetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve AdjustedPositionOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve AdjustedRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPitchToListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitchToListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchToListenerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PitchFocusPoint;
    
public:
    UConversationCameraHeightAdjustSpeaker();

};

