#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GothicGASActor.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;
class UGothicAbilitySystemComponent;
class UGothicFXComponent;

UCLASS(Abstract)
class G1R_API AGothicGASActor : public AActor, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGothicAbilitySystemComponent* AbilitySystem;
    
private:
    UPROPERTY(Instanced)
    UGothicFXComponent* m_FXComponent;
    
public:
    AGothicGASActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    void StopEffect(const FGameplayTag& EffectTag) const;
    
    UFUNCTION(BlueprintPure)
    void PlayEffect(const FGameplayTag& EffectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyEnvironmentDebuffToInteractableGasObjectActor_Scriptable(UAbilitySystemComponent* InteractiveActorAbilitySystemComponent);
    
    UFUNCTION(BlueprintPure)
    UGothicFXComponent* GetFXComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TArray<TSubclassOf<UGameplayEffect>> GetDebuffGameplayEffectsToApplyWhenOverlap_Scriptable() const;
    
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; };
};

