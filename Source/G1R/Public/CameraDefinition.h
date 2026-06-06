#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/Scene.h"
#include "CameraBehaviour.h"
#include "CameraEase.h"
#include "ECamConditions.h"
#include "CameraDefinition.generated.h"

UCLASS(Abstract, BlueprintType, Config=Game)
class G1R_API UCameraDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_FileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmLength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float m_Fov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_SocketOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotationLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotationLagSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LagMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CombatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ECamConditions, FCameraBehaviour> m_CamBehaviours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ECamConditions, FCameraBehaviour> m_CamBehavioursDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FCameraBehaviour> m_CamCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TargetViewPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TargetViewPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseNavigationUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseNavigationDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseSpeedMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseSpeedNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseSpeedFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseSpeedMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseSpeedSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraEase m_EaseChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CameraFadeDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WaterTransitionPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AimPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AimWeaponPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BottomPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_UpPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings m_PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PostProcessingDuration;
    
    UCameraDefinition();

    UFUNCTION(BlueprintCallable)
    FCameraEase Ease(float Time, TEnumAsByte<EEasingFunc::Type> NewEase, float BlendExp);
    
};

