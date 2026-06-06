#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveVector.h"
#include "ConversationCameraPresetBase.h"
#include "ConversationCameraPresetSpeakerOffset.generated.h"

UCLASS(EditInlineNew)
class G1R_API UConversationCameraPresetSpeakerOffset : public UConversationCameraPresetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve SpeakerPositionOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve SpeakerRotationOffsetCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateToListener;
    
public:
    UConversationCameraPresetSpeakerOffset();

};

