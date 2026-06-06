#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Combat.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityStanceBlock.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_UpdateAttackAxis;
class UAnimMontage;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityStanceBlock : public UGameplayAbilityBase_Combat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_BlockEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_UnBlockEffect;
    
    UPROPERTY()
    UAbilityTask_UpdateAttackAxis* m_AttackAxisTask;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
public:
    UGameplayAbilityStanceBlock();

protected:
    UFUNCTION()
    void StartEndTimer();
    
    UFUNCTION()
    void OnParryStart();
    
    UFUNCTION()
    void OnParryEnd();
    
    UFUNCTION()
    void OnMontageFinished();
    
    UFUNCTION()
    void OnMontageBlendIn();
    
    UFUNCTION()
    void OnHitMontageEnded(UAnimMontage* AnimMontage, bool Interrumped);
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
};

