#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Combat.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityDodge.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_UpdateRotationToTargetDodge;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityDodge : public UGameplayAbilityBase_Combat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_UpdateRotationToTargetDodge* m_RotateTask;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_SuperArmorEffect;
    
public:
    UGameplayAbilityDodge();

private:
    UFUNCTION()
    void OnValidData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION()
    void OnResetStates();
    
    UFUNCTION()
    void OnInterrupted();
    
    UFUNCTION()
    void OnCancelled();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
};

