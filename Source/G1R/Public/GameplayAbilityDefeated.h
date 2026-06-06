#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "ScriptGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityDefeated.generated.h"

class ADynamicNavObstacle;
class AGothicCharacter;
class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_StandUp;
class UGameplayEffect;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityDefeated : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_StandUpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TimeToStandUp;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAbilityTask_StandUp* m_StandUpTask;
    
    UPROPERTY()
    UAbilityTask_PlayMontageAndWait* m_PlayMontageTaskHit;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTaskLoop;
    
    UPROPERTY()
    UAbilityTask_PlayMontageAndWait* m_PlayMontageTaskStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> m_DefeatedGE;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FActiveGameplayEffectHandle m_DefeatedGEHandle;
    
    UPROPERTY()
    ADynamicNavObstacle* DynamicNavObstacle;
    
public:
    UGameplayAbilityDefeated();

protected:
    UFUNCTION(Reliable, Server)
    void Server_ApplyGameplayEffect();
    
    UFUNCTION()
    void OnStandUpTaskFinished();
    
    UFUNCTION()
    void OnStandUpCompleted();
    
    UFUNCTION()
    void OnHitCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndAbilityServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAbilityServer_Scriptable();
    
    UFUNCTION()
    void CreateStandupTask();
    
};

