#pragma once
#include "CoreMinimal.h"
#include "CueVisualConfig.h"
#include "CueVisualConfig_Pyrokinesis.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UCueVisualConfig_Pyrokinesis : public UCueVisualConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_InMontage;
    
public:
    UCueVisualConfig_Pyrokinesis();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetInMontage() const;
    
};

