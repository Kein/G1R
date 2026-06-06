#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "DataModule.h"
#include "EClimbType.h"
#include "EFallingSurfaceType.h"
#include "EMovementAction.h"
#include "EMovementState.h"
#include "ERotationMode.h"
#include "EStance.h"
#include "EWalkSpeed.h"
#include "LocomotionCurveSettings.h"
#include "DataModule_Locomotion.generated.h"

class ULocomotionConfig;
class USpeedConfig;

UCLASS(BlueprintType)
class G1R_API UDataModule_Locomotion : public UDataModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    EClimbType m_ClimbType;
    
    UPROPERTY(Replicated)
    EWalkSpeed m_RequestedWalkSpeed;
    
    UPROPERTY(Replicated)
    EWalkSpeed m_WalkSpeed;
    
    UPROPERTY(Replicated)
    ERotationMode m_RotationMode;
    
    UPROPERTY(Replicated)
    EStance m_RequestedStance;
    
    UPROPERTY(Replicated)
    EStance m_Stance;
    
    UPROPERTY(Replicated)
    EMovementState m_MovementState;
    
    UPROPERTY(Replicated)
    EMovementState m_PrevMovementState;
    
    UPROPERTY(Replicated)
    EMovementAction m_MovementAction;
    
    UPROPERTY(Replicated)
    EMovementAction m_RequestedMovementAction;
    
    UPROPERTY(Replicated)
    bool m_IsBuoyancyEnabled;
    
    UPROPERTY(Replicated)
    float m_MovementInputAmount;
    
    UPROPERTY(Replicated)
    TArray<float> m_MaxSpeeds;
    
    UPROPERTY(Replicated)
    FVector m_ClimbingInput;
    
    UPROPERTY(Replicated)
    bool m_RecoverDive;
    
    UPROPERTY(Replicated)
    EFallingSurfaceType m_JumpSurfaceType;
    
    UPROPERTY(Replicated)
    EFallingSurfaceType m_FallingSurfaceType;
    
    UPROPERTY(Replicated)
    float m_FallingSurfaceDistance;
    
    UPROPERTY(Replicated)
    float m_WaterDepthInJump;
    
    UPROPERTY(Replicated)
    float m_TimeToImpact;
    
    UPROPERTY(Replicated)
    float m_ImpactDelta;
    
    UPROPERTY(Replicated)
    float m_JumpPeakHeight;
    
    UPROPERTY(Replicated)
    FVector m_JumpPeakPosition;
    
    UPROPERTY(Replicated)
    float m_TotalFallDistance;
    
    UPROPERTY(Instanced)
    USpeedConfig* m_OverrideLocoSpeedSettings;
    
    UPROPERTY(Replicated)
    FRotator m_LastMovementInputRotation;
    
    UPROPERTY(Replicated)
    FVector m_LastMovementInput;
    
    UPROPERTY(Replicated)
    float m_StartFallingZPosition;
    
    UPROPERTY(Replicated)
    float m_StartFallingZDistance;
    
    UPROPERTY(Instanced, ReplicatedUsing=OnRep_Config)
    ULocomotionConfig* m_LocomotionConfig;
    
    UPROPERTY()
    FLocomotionCurveSettings m_LocomotionCurveSettings;
    
public:
    UDataModule_Locomotion();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRequestedMovementAction(EMovementAction RequestedMovementAction, bool replicate);
    
    UFUNCTION(Reliable, Server)
    void Server_SetTotalFallDistance(float TotalDistance);
    
    UFUNCTION(Reliable, Server)
    void Server_SetStartFallingZPosition(float StartFallingPosition);
    
    UFUNCTION(Reliable, Server)
    void Server_SetStartFallingZDistance(float StartFallingZDistance);
    
    UFUNCTION(Reliable, Server)
    void Server_SetRotationMode(ERotationMode RotationMode);
    
    UFUNCTION(Reliable, Server)
    void Server_SetRequestedWalkSpeed(EWalkSpeed requestedWalkSpeed);
    
    UFUNCTION(Reliable, Server)
    void Server_SetRequestedMovementAction(EMovementAction movementAction);
    
    UFUNCTION(Reliable, Server)
    void Server_SetRecoveringDive(bool IsRecovering);
    
    UFUNCTION(Reliable, Server)
    void Server_SetPreFallingSurface(EFallingSurfaceType surface, float Distance, float WaterDepth);
    
    UFUNCTION(Reliable, Server)
    void Server_SetMovementState(EMovementState MovementState);
    
    UFUNCTION(Reliable, Server)
    void Server_SetMovementInputAmount(float Input);
    
    UFUNCTION(Reliable, Server)
    void Server_SetLastMovementInputRotation(FRotator LastMovementInputRotation);
    
    UFUNCTION(Reliable, Server)
    void Server_SetLastMovementInput(FVector LastMovementInput);
    
    UFUNCTION(Reliable, Server)
    void Server_SetJumpPeakPosition(const FVector& PeakPos);
    
    UFUNCTION(Reliable, Server)
    void Server_SetJumpPeakHeight(float PeakHeight);
    
    UFUNCTION(Reliable, Server)
    void Server_SetIsBuoyancyEnabled(bool IsEnabled);
    
    UFUNCTION(Reliable, Server)
    void Server_SetImpactTime(float TimeToHit);
    
    UFUNCTION(Reliable, Server)
    void Server_SetImpactDelta(float ImpactDelta);
    
    UFUNCTION(Reliable, Server)
    void Server_SetFallingSurface(EFallingSurfaceType surface, float Distance, float WaterDepth);
    
    UFUNCTION(Reliable, Server)
    void Server_SetClimbType(EClimbType ClimbType);
    
    UFUNCTION(Reliable, Server)
    void Server_SetClimbingInput(FVector Input);
    
protected:
    UFUNCTION()
    void OnRep_Config();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeMovementAction(EMovementAction movementAction);
    
    UFUNCTION(BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintPure)
    EStance GetStance() const;
    
    UFUNCTION(BlueprintPure)
    ERotationMode GetRotationMode();
    
    UFUNCTION(BlueprintPure)
    EStance GetRequestedStance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetInWaterDepth();
    
    UFUNCTION(BlueprintPure)
    FHitResult GetHitFloor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasGroundPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGroundPosition() const;
    
};

