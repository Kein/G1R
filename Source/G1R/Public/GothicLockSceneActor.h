#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "GothicLockPieceData.h"
#include "GothicLockSceneActor.generated.h"

class AGothicLockPickActor;
class UCurveFloat;
class UGothicLockCameraHelperComponent;

UCLASS(Abstract)
class AGothicLockSceneActor : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_LockPieceInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_UseConstantInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_LockBarDownOffset;
    
    UPROPERTY(EditAnywhere)
    float m_LockBarUpOffset;
    
    UPROPERTY(EditAnywhere)
    float m_BarDistanceThresholdForInterpolation;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, float> m_RotationToBarOffset;
    
    UPROPERTY(EditAnywhere)
    float m_LockPieceTranslationStep;
    
    UPROPERTY(Transient)
    TArray<FGothicLockPieceData> m_LockPieceData;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_LatchCurve;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_HighlightColor;
    
    UPROPERTY(Instanced, Transient)
    UGothicLockCameraHelperComponent* m_CameraHelper;
    
    UPROPERTY(Transient)
    AGothicLockPickActor* m_LockPickActor;
    
    UPROPERTY(EditAnywhere)
    float m_ShakeSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_ShakeDuration;
    
    UPROPERTY(EditAnywhere)
    float m_ShakeAmplitude;
    
public:
    AGothicLockSceneActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMPC();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSceneVisible(bool IsVisible);
    
};

