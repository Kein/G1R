#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttackConfig.h"
#include "TagMontage.h"
#include "AttackRiposteConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract)
class G1R_API UAttackRiposteConfig : public UAttackConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTagMontage> m_Ripostes;
    
public:
    UAttackRiposteConfig();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetAttackMontage(const FGameplayTagContainer& MetaData) const;
    
    UFUNCTION(BlueprintCallable)
    void AddRiposte(FGameplayTagContainer MetaData, FName Montage);
    
};

