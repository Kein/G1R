#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveVector.h"
#include "ConversationCameraPresetBase.h"
#include "ConversationCameraPresetCenterOffset.generated.h"

UCLASS(EditInlineNew)
class G1R_API UConversationCameraPresetCenterOffset : public UConversationCameraPresetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve CenterPositionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve CenterRotationCurve;
    
public:
    UConversationCameraPresetCenterOffset();

};

