#pragma once
#include "CoreMinimal.h"
#include "CueVisualConfig.h"
#include "CueVisualConfig_Summoned.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UCueVisualConfig_Summoned : public UCueVisualConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_InMontage;
    
    UCueVisualConfig_Summoned();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetInMontage() const;
    
};

