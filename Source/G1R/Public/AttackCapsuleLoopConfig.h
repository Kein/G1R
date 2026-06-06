#pragma once
#include "CoreMinimal.h"
#include "AttackLoopConfig.h"
#include "AttackCapsuleLoopConfig.generated.h"

UCLASS(Abstract)
class G1R_API UAttackCapsuleLoopConfig : public UAttackLoopConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CapsuleLengthSpeed;
    
public:
    UAttackCapsuleLoopConfig();

    UFUNCTION(BlueprintPure)
    float GetCapsuleRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleLengthSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleHalfHeight() const;
    
};

