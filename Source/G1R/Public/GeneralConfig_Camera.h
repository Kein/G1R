#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CameraSettings.h"
#include "GothicBaseConfig.h"
#include "GeneralConfig_Camera.generated.h"

UCLASS(Const, EditInlineNew)
class UGeneralConfig_Camera : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_TPCameraTraceRName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TPCameraTraceLName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_RightShoulder;
    
    UPROPERTY(EditAnywhere)
    float m_MinDistToPlayer;
    
    UPROPERTY(EditAnywhere)
    float m_MaxDistToPlayer;
    
    UPROPERTY(EditAnywhere)
    float m_DistanceIncreaseInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_UserInputDistanceChangeStep;
    
    UPROPERTY(EditAnywhere)
    float m_UserInputDistanceChangeSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MinDistBeforePlayerFade;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FCameraSettings m_DefaultCameraSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FCameraSettings> m_CameraSettings;
    
public:
    UGeneralConfig_Camera();

};

