#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "LocomotionConfig.generated.h"

class UAirConfig;
class UClimbingConfig;
class UFlyConfig;
class UGroundConfig;
class UJumpConfig;
class ULandingConfig;
class ULocomotionCurveConfig;
class ULookConfig;
class UMMConfig;
class URagdollConfig;
class USpeedConfig;
class USwimConfig;
class UTransitionConfig;
class UWallWalkingConfig;
class UWaterConfig;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class G1R_API ULocomotionConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UClimbingConfig> m_ClimbingConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USpeedConfig> m_SpeedConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGroundConfig> m_GroundConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UWallWalkingConfig> m_WallWalkingConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ULandingConfig> m_LandingConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UAirConfig> m_AirConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ULookConfig> m_LookConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTransitionConfig> m_TransitionConfig;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CollisionProfileName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_GroundDetectionProfileName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USwimConfig> m_SwimConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UJumpConfig> m_JumpConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UWaterConfig> m_WaterConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<URagdollConfig> m_RagdollConfig;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ULocomotionCurveConfig> m_CurveConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UFlyConfig> m_flyConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMMConfig> m_MMConfig;
    
public:
    ULocomotionConfig();

};

