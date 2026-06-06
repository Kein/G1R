#pragma once
#include "CoreMinimal.h"
#include "CueVisualConfig.h"
#include "CueVisualConfig_Electrified.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UCueVisualConfig_Electrified : public UCueVisualConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_ElectrifiedInMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_ElectrifiedOutMontage;
    
    UCueVisualConfig_Electrified();

private:
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetElectrifiedOutMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetElectrifiedInMontage() const;
    
};

