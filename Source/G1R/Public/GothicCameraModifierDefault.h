#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "CameraEase.h"
#include "CameraState.h"
#include "ECamConditions.h"
#include "GothicCameraModifier.h"
#include "GothicCameraModifierDefault.generated.h"

UCLASS()
class G1R_API UGothicCameraModifierDefault : public UGothicCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FCameraState m_CameraOrigin;
    
    UPROPERTY(Transient)
    FCameraState m_CameraFinal;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ECamConditions m_CurrentBehaviour;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECamConditions m_OriginBehaviour;
    
    UPROPERTY(Transient)
    FCameraBehaviour m_Behaviour;
    
    UPROPERTY(Transient)
    FCameraEase m_EaseSelected;
    
public:
    UGothicCameraModifierDefault();

};

