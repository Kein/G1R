#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESwimType.h"
#include "GameplayAbilityMovement.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySwim.generated.h"

class UAbilityTask_Swim;
class UNiagaraComponent;
class UNiagaraSystem;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilitySwim : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UAbilityTask_Swim* m_SwimTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OxygenDepletionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OxygenRecoveryEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OxygenRanOutEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OxygenRestoreEffect;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> m_SwimParticlesToSpawnOnHands;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> m_SwimParticlesToSpawnOnHead;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> m_SwimParticlesToSpawnOnBody;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> m_DiveParticlesToSpawnOnHands;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> m_DiveParticlesToSpawnOnHead;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> m_DiveParticlesToSpawnOnBody;
    
    UPROPERTY(Instanced)
    TArray<UNiagaraComponent*> SpawnedSwimParticleComponents;
    
    UPROPERTY(Instanced)
    TArray<UNiagaraComponent*> SpawnedDiveParticleComponents;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_ParticlePausingTags;
    
public:
    UGameplayAbilitySwim();

protected:
    UFUNCTION(Reliable, Server)
    void Server_ApplyEffects_StopDiving();
    
    UFUNCTION(Reliable, Server)
    void Server_ApplyEffects_StartDiving();
    
    UFUNCTION(Reliable, Server)
    void Server_ApplyEffects_OxygenRestored();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Server_ApplyEffects_OxygenRanOut_Scriptable();
    
    UFUNCTION(Reliable, Server)
    void Server_ApplyEffects_OxygenRanOut();
    
    UFUNCTION()
    void OnSwimTypeChanged(ESwimType NewSwimType);
    
    UFUNCTION()
    void OnClimb(const FGameplayTag CallbackTag, int32 NewCount);
    
    UFUNCTION()
    void InputSwimUp(const FInputActionInstance& Instance);
    
    UFUNCTION()
    void InputSwimDown(const FInputActionInstance& Instance);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle ApplyGameplayEffect(TSubclassOf<UScriptGameplayEffect> EffectClass);
    
};

