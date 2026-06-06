#pragma once
#include "CoreMinimal.h"
#include "EStance.h"
#include "WeaponItemAnimConfig.h"
#include "BowItemAnimConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract, Const, EditInlineNew)
class G1R_API UBowItemAnimConfig : public UWeaponItemAnimConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_NotchMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_ReleaseAndNotchMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_ReleaseAndNotchFailureMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_QuickReleaseAndNotchMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_QuickReleaseAndNotchFailureMontage;
    
public:
    UBowItemAnimConfig();

};

