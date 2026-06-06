#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "EffectActorBase.h"
#include "DebuffEffectActorByTag.generated.h"

class UAbilitySystemComponent;

UCLASS()
class G1R_API ADebuffEffectActorByTag : public AEffectActorBase {
    GENERATED_BODY()
public:
    ADebuffEffectActorByTag(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnGameplayEffectAppliedToTargetDynamicDelegate(UAbilitySystemComponent* TargetAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle);
    
    UFUNCTION()
    void OnGameplayEffectAppliedToSelfDynamicDelegate(UAbilitySystemComponent* TargetAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecreasedStack();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnAllowPlayOutMontageOnPrematureRemoval();
    
private:
    UFUNCTION()
    void OnActiveGameplayEffectAddedToSelfDynamicDelegate(UAbilitySystemComponent* TargetAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle);
    
};

