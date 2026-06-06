#pragma once
#include "CoreMinimal.h"
#include "AttackConfig.h"
#include "EAttackHandle.h"
#include "AttackMeleeConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract)
class G1R_API UAttackMeleeConfig : public UAttackConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_ParriedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_DeflectedMontage;
    
    UPROPERTY()
    float m_AttackDistanceFromMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackHandle m_AttackHandle;
    
public:
    UAttackMeleeConfig();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetParriedMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDeflectedMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetAttackMontage() const;
    
    UFUNCTION(BlueprintPure)
    EAttackHandle GetAttackHandle() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAttackDistanceFromMontage();
    
};

