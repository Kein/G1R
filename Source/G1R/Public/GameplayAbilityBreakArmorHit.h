#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBaseHit.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityBreakArmorHit.generated.h"

class UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities;
class UAnimMontage;
class UKnockbackData;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityBreakArmorHit : public UGameplayAbilityBaseHit {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAnimMontage* m_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_ResetEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_ImmunityEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities> m_MontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UKnockbackData> m_KnockbackDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UKnockbackData> m_KnockbackData;
    
    UPROPERTY()
    FTimerHandle m_timerHandle;
    
    UPROPERTY()
    FGameplayTag m_HitType;
    
    UPROPERTY()
    bool m_FiredTimer;
    
    UPROPERTY()
    float m_StunnedRandomTime;
    
    UPROPERTY()
    float m_OriginalRooMotionTranslationScale;
    
    UPROPERTY()
    bool m_WasRestoredOriginalRooMotionTranslationScale;
    
private:
    UPROPERTY()
    TSubclassOf<UScriptGameplayEffect> m_KnockbackEffect;
    
public:
    UGameplayAbilityBreakArmorHit();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMontageInterrupted_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMontageCompleted_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMontageCancelled_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMontageBlendOut_Scriptable();
    
    UFUNCTION()
    void OnInterrupted();
    
    UFUNCTION()
    void OnCompleted();
    
    UFUNCTION()
    void OnCancelled();
    
    UFUNCTION()
    void OnBlendOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(NetMulticast, Reliable)
    void JumpToEndSection();
    
};

