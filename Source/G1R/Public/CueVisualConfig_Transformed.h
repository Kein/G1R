#pragma once
#include "CoreMinimal.h"
#include "CueVisualConfig.h"
#include "CueVisualConfig_Transformed.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UCueVisualConfig_Transformed : public UCueVisualConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_InMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CameraTravellingInitialDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CameraTravellingDuration;
    
    UCueVisualConfig_Transformed();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetInMontage() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraTravellingInitialDelay() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraTravellingDuration() const;
    
};

