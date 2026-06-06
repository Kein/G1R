#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_MagnetBase.h"
#include "AnimNotifyState_MeleeMagnet.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_MeleeMagnet : public UAnimNotifyState_MagnetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MagnetRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MagnetRangeAI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MagnetAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_UseNewRelocationSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PivotDistanceTip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PivotDistanceHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DistanceAfterAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_AllowNegativeRMScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_OverrideRootMotionScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CustomRootMotionScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_OverrideRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CustomRotationSpeed;
    
    UAnimNotifyState_MeleeMagnet();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPivotTipDistance(float PivotDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPivotHandleDistance(float PivotDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMagnetExtraRangePlayer(float MagnetRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMagnetExtraRangeAI(float MagnetRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMagnetAngle(float MagnetAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDistanceAfterAttack(float DistanceAfterAttack) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAllowNegativeRMScale(bool Allow) const;
    
};

