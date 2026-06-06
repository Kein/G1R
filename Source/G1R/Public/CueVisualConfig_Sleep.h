#pragma once
#include "CoreMinimal.h"
#include "CueVisualConfig.h"
#include "CueVisualConfig_Sleep.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UCueVisualConfig_Sleep : public UCueVisualConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_SleepInMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_SleepOutMontage;
    
public:
    UCueVisualConfig_Sleep();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetSleepOutMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetSleepInMontage() const;
    
};

