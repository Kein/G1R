#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveVector.h"
#include "ConversationCameraPresetBase.h"
#include "ConversationCameraPresetListenerOffset.generated.h"

UCLASS(EditInlineNew)
class G1R_API UConversationCameraPresetListenerOffset : public UConversationCameraPresetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve ListenerPositionOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve ListenerRotationOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateToSpeaker;
    
    UConversationCameraPresetListenerOffset();

};

