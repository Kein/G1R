#pragma once
#include "CoreMinimal.h"
#include "AttackLoopConfig.h"
#include "AttackConeLoopConfig.generated.h"

UCLASS(Abstract)
class G1R_API UAttackConeLoopConfig : public UAttackLoopConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeLengthMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ConeLengthSpeed;
    
    UPROPERTY()
    float m_ConeSphereRadius;
    
public:
    UAttackConeLoopConfig();

    UFUNCTION(BlueprintPure)
    float GetConeSphereRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetConeLengthSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetConeLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetConeAngle() const;
    
};

