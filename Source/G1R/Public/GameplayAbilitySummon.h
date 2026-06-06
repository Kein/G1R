#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilitySummon.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilitySummon : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UAnimMontage>> m_SummonAnimations;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_SummonAnimationTask;
    
    UPROPERTY()
    bool m_ShouldRestoreTickOptimizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_MontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableRandomDelayOnSummonAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinRandomDelayOnSummonAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxRandomDelayOnSummonAnim;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PlayRate;
    
    UGameplayAbilitySummon();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayMontage();
    
    UFUNCTION()
    void OnInterruptedMontage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled);
    
protected:
    UFUNCTION()
    void OnCompletedMontage();
    
    UFUNCTION()
    void OnCancelledMontage();
    
    UFUNCTION()
    void OnBlendOutMontage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetMontageDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoSummon_Scriptable();
    
};

