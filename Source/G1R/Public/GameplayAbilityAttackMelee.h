#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityAttackBase.h"
#include "GameplayAbilityAttackMelee.generated.h"

class UAbilityTask_PlayMontage_Extended;

UCLASS()
class G1R_API UGameplayAbilityAttackMelee : public UGameplayAbilityAttackBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
public:
    UGameplayAbilityAttackMelee();

protected:
    UFUNCTION()
    void OnInterrupted();
    
    UFUNCTION()
    void OnCompleted();
    
    UFUNCTION()
    void OnCancelled();
    
    UFUNCTION()
    void OnBlendOut();
    
};

