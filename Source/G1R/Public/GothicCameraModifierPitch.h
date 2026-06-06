#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "Engine/TimerHandle.h"
#include "GothicCameraModifierPitch.generated.h"

class UCurveFloat;

UCLASS()
class G1R_API UGothicCameraModifierPitch : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> PitchToDistanceCurve;
    
protected:
    UPROPERTY()
    FTimerHandle m_timerHandle;
    
public:
    UGothicCameraModifierPitch();

};

