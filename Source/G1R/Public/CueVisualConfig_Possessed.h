#pragma once
#include "CoreMinimal.h"
#include "CueVisualConfig.h"
#include "CueVisualConfig_Possessed.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UCueVisualConfig_Possessed : public UCueVisualConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_InMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_OutMontage;
    
public:
    UCueVisualConfig_Possessed();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetOutMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetInMontage() const;
    
};

