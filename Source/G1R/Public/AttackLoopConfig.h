#pragma once
#include "CoreMinimal.h"
#include "AttackConfig.h"
#include "AttackLoopConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract)
class G1R_API UAttackLoopConfig : public UAttackConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AIMaxSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PlayerSeconds;
    
public:
    UAttackLoopConfig();

    UFUNCTION(BlueprintPure)
    float GetPlayerTime() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetAttackMontage() const;
    
    UFUNCTION(BlueprintPure)
    float GetAIMaxTime() const;
    
};

