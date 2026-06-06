#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECamConditions.h"
#include "CameraBehaviour.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FCameraBehaviour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_SocketOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_SocketMinCombatOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Fov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotationLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotationLagSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LagMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECamConditions m_Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpellPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpellYawLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_CameraPitchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_YawLimit;
    
    FCameraBehaviour();
};

