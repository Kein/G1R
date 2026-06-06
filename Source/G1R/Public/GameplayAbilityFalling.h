#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityMovement.h"
#include "GameplayAbilityFalling.generated.h"

UCLASS()
class G1R_API UGameplayAbilityFalling : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_EnableDamageLimiter;
    
private:
    UPROPERTY()
    bool m_DoOnce;
    
public:
    UGameplayAbilityFalling();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CheckApplyDamage(float FallingDistance);
    
public:
    UFUNCTION()
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& Info, bool WasCancelled);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintCallable)
    float GetStartFallingZPositionFromDatamodule();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMinFallDistance_Scriptable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFallingCancelAbilitiesDistance_Scriptable();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyDamageTo_Scriptable(float FallDistance);
    
};

