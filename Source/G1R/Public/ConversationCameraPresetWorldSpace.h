#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveVector.h"
#include "ConversationCameraPresetBase.h"
#include "ConversationCameraPresetWorldSpace.generated.h"

UCLASS(EditInlineNew)
class G1R_API UConversationCameraPresetWorldSpace : public UConversationCameraPresetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve PositionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve RotationCurve;
    
public:
    UConversationCameraPresetWorldSpace();

};

