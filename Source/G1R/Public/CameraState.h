#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraState.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FCameraState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float m_ArmLength;
    
    UPROPERTY(Transient)
    FVector m_SocketOffset;
    
    UPROPERTY(Transient)
    FVector m_SocketOffsetDesired;
    
    UPROPERTY(Transient)
    float m_Fov;
    
    UPROPERTY(Transient)
    float m_LagSpeed;
    
    UPROPERTY(Transient)
    float m_RotationLagSpeed;
    
    UPROPERTY(Transient)
    float m_RotationLagSpeedPitch;
    
    UPROPERTY(Transient)
    float m_LagMaxDistance;
    
    FCameraState();
};

