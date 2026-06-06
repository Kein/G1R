#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "WallWalkingConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UWallWalkingConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_JumpMontageAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CustomGravityAttraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DistanceFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WallContactLostRotInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SensorRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MinimumNormalDistToImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotInWallsDegreesPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotImpulseHelper;
    
public:
    UWallWalkingConfig();

};

