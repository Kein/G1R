#pragma once
#include "CoreMinimal.h"
#include "CameraViewParameters.generated.h"

class AGothicCharacter;
class UConversationCameraPresetBase;

USTRUCT(BlueprintType)
struct FCameraViewParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UConversationCameraPresetBase* Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacter* Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacter* Listener;
    
    G1R_API FCameraViewParameters();
};

