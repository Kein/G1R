#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityEndRiding.generated.h"

class UDataModule_Locomotion;

UCLASS()
class G1R_API UGameplayAbilityEndRiding : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UDataModule_Locomotion* m_DataModule_Locomotion;
    
public:
    UGameplayAbilityEndRiding();

protected:
    UFUNCTION()
    void TryDelayedActivation();
    
    UFUNCTION()
    void DelayActivation();
    
};

