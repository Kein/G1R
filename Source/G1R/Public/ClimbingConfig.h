#pragma once
#include "CoreMinimal.h"
#include "Climbing_SearchEdgeSettings.h"
#include "EClimbType.h"
#include "GothicBaseConfig.h"
#include "JumpDown_SearchEdgeSettings.h"
#include "Templates/SubclassOf.h"
#include "ClimbingConfig.generated.h"

class UClimbingAnimConfig;
class UCurveFloat;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UClimbingConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EClimbType, TSubclassOf<UClimbingAnimConfig>> m_AnimConfigs;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UCurveFloat> m_PositionCorrectionBlendCurve;
    
    UPROPERTY(EditAnywhere)
    FClimbing_SearchEdgeSettings m_GroundSearchEdgeSettings;
    
    UPROPERTY(EditAnywhere)
    FJumpDown_SearchEdgeSettings m_GroundJumpDownSearchSettings;
    
    UPROPERTY(EditAnywhere)
    FClimbing_SearchEdgeSettings m_AirSearchEdgeSettings;
    
    UPROPERTY(EditAnywhere)
    FClimbing_SearchEdgeSettings m_WallSearchEdgeSettings;
    
    UPROPERTY(EditAnywhere)
    FClimbing_SearchEdgeSettings m_SwimmingSearchEdgeSettings;
    
    UPROPERTY(EditAnywhere)
    float m_CheckCapsuleStartTraceOffset;
    
    UPROPERTY(EditAnywhere)
    float m_CheckSphereEndTraceOffset;
    
    UPROPERTY(EditAnywhere)
    float m_limitClimbingAngle;
    
    UPROPERTY(EditAnywhere)
    float m_MaxClimbableUnderWaterDepth;
    
    UPROPERTY(EditAnywhere)
    float m_UnderWaterMidClimbHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MaxFallSpeedForFallingLow;
    
public:
    UClimbingConfig();

    UFUNCTION()
    FClimbing_SearchEdgeSettings GetWallSearchEdgeSettings() const;
    
    UFUNCTION()
    float GetUnderWaterMidClimbHeight() const;
    
    UFUNCTION()
    FClimbing_SearchEdgeSettings GetSwimmingSearchEdgeSettings() const;
    
    UFUNCTION()
    float GetMaxClimbableUnderWaterDepth() const;
    
    UFUNCTION()
    FClimbing_SearchEdgeSettings GetGroundSearchEdgeSettings() const;
    
    UFUNCTION()
    FJumpDown_SearchEdgeSettings GetGroundJumpDownSearchSettings() const;
    
    UFUNCTION()
    float GetClimbingLimitAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetCheckSphereEndTraceOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetCheckCapsuleStartTraceOffset() const;
    
    UFUNCTION()
    FClimbing_SearchEdgeSettings GetAirSearchEdgeSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddClimbingAction(EClimbType Type, TSubclassOf<UClimbingAnimConfig> Action) const;
    
};

