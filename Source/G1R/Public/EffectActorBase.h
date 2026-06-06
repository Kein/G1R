#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GothicGASActor.h"
#include "Templates/SubclassOf.h"
#include "EffectActorBase.generated.h"

class AActor;
class UEffectComponentBase;
class UGameplayAbility;
class UGameplayEffect;
class UGothicAbilitySystemComponent;

UCLASS()
class G1R_API AEffectActorBase : public AGothicGASActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated, VisibleAnywhere)
    UEffectComponentBase* m_OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, Replicated, VisibleAnywhere)
    bool m_IsActive;
    
    UPROPERTY()
    FActiveGameplayEffectHandle m_VisualEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_VisualGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayAbility> m_DebuffEffectGameplayAbility;
    
    UPROPERTY()
    FGameplayAbilitySpecHandle m_DebuffEffectGameplayAbilitySpecHandle;
    
public:
    AEffectActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartEffect();
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisualEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReActivateEffect();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnPrematureRemoval();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreDestroyDebuffActor();
    
private:
    UFUNCTION()
    void OnDieMeBefore(const FGameplayEventData GameplayEventData);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDeactivateEffectEvent_Multicast(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateEffectCompleted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnActivateEffectEvent_Multicast();
    
    UFUNCTION(BlueprintCallable)
    bool HasDuration(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTarget();
    
    UFUNCTION(BlueprintCallable)
    UEffectComponentBase* GetOwnerComponent();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsActive();
    
    UFUNCTION(BlueprintCallable)
    UGothicAbilitySystemComponent* GetGothicAbilitySystemComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    
    UFUNCTION(BlueprintCallable)
    void ClearDelegates();
    
    UFUNCTION(BlueprintCallable)
    void BindDelegates();
    
    UFUNCTION(BlueprintCallable)
    void ApplyVisualEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateEffect();
    
};

