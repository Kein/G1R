#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbilityEffectBase.generated.h"

class UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityEffectBase : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities* m_MontageTask;
    
    UPROPERTY()
    UAnimMontage* m_Montage;
    
public:
    UGameplayAbilityEffectBase();

    UFUNCTION(BlueprintCallable)
    void PlayMontage(UAnimMontage* MontageToPlay, const FName& SectionName, float Rate, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& Info, bool WasCancelled);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbilityBeforeAssetPreload_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintCallable)
    void JumpToSection(const FName& SectionName);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSectionMontage(UAnimMontage* Montage, const FName& SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoEndDebuffMontage_Scriptable();
    
};

