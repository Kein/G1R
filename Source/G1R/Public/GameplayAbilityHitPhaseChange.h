#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityHit.h"
#include "GameplayEffectContext_HitResponse.h"
#include "GameplayAbilityHitPhaseChange.generated.h"

class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityHitPhaseChange : public UGameplayAbilityHit {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_Montage;
    
public:
    UGameplayAbilityHitPhaseChange();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHitData(FGameplayEventData& Payload, FGameplayEffectContext_HitResponse& HitContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoPhaseChange_Scriptable();
    
};

