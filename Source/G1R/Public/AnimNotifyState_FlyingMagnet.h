#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_MagnetBase.h"
#include "AnimNotifyState_FlyingMagnet.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_FlyingMagnet : public UAnimNotifyState_MagnetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MagnetRangeXY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MagnetRangeZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MagnetAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DistanceAfterAttack;
    
    UAnimNotifyState_FlyingMagnet();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMagnetExtraRangeZ(float MagnetRangeZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMagnetExtraRangeXY(float MagnetRangeXY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMagnetAngle(float MagnetAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDistanceAfterAttack(float DistanceAfterAttack) const;
    
};

