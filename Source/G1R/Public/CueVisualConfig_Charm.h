#pragma once
#include "CoreMinimal.h"
#include "CueVisualConfig.h"
#include "CueVisualConfig_Charm.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UCueVisualConfig_Charm : public UCueVisualConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_CharmInMontage;
    
    UCueVisualConfig_Charm();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCharmInMontage() const;
    
};

