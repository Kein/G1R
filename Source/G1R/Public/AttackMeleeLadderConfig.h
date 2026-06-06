#pragma once
#include "CoreMinimal.h"
#include "AttackConfig.h"
#include "AttackMeleeLadderConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract, Const)
class G1R_API UAttackMeleeLadderConfig : public UAttackConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_MontageUpLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_MontageUpRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_MontageDownLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_MontageDownRight;
    
public:
    UAttackMeleeLadderConfig();

};

