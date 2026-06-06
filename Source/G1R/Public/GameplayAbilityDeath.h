#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EWeaponSkill.h"
#include "ScriptGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityDeath.generated.h"

class AGothicCharacter;
class AGothicMutilatedSkeletalMeshActor;
class UGameplayEffect;
class UScriptGameplayEffect;
class UWeaponDefinition;

UCLASS()
class G1R_API UGameplayAbilityDeath : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_ReviveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_RestoreOxygenEffect;
    
    UPROPERTY()
    AGothicMutilatedSkeletalMeshActor* m_MutilatedSkeletalMeshActor;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWeaponDefinition* m_WeaponUsed;
    
    UPROPERTY()
    FGameplayTag m_ItemTag;
    
    UPROPERTY()
    EWeaponSkill m_ItemSkill;
    
    UPROPERTY()
    bool m_IsExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> m_DeathGE;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FActiveGameplayEffectHandle m_DeathGEHandle;
    
public:
    UGameplayAbilityDeath();

protected:
    UFUNCTION()
    void UpdateDeathEffectValue();
    
    UFUNCTION()
    void StartRagdoll();
    
    UFUNCTION()
    void StartDeathEffect();
    
    UFUNCTION()
    void PlayDeathVoiceLine() const;
    
    UFUNCTION()
    void OnRevive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndAbilityServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAbilityServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& ActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoDeathEffect_Scriptable();
    
    UFUNCTION()
    void DoDeathEffect();
    
};

