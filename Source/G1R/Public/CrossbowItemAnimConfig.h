#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStance.h"
#include "StanceMapMontage.h"
#include "WeaponItemAnimConfig.h"
#include "CrossbowItemAnimConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract, Const, EditInlineNew)
class G1R_API UCrossbowItemAnimConfig : public UWeaponItemAnimConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_ReleaseMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_QuickReleaseMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FStanceMapMontage> m_RelaxNotchMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_RelaxNotchFailureMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FStanceMapMontage> m_QuickNotchMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_QuickNotchFailureMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FStanceMapMontage> m_AimingNotchMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_AimingNotchFailureMontage;
    
public:
    UCrossbowItemAnimConfig();

};

