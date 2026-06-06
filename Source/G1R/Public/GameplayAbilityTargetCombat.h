#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityTargetBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityTargetCombat.generated.h"

class UAbilityTask_UpdateTarget;
class UGameplayEffect;
class UTargetConfigBase;

UCLASS()
class G1R_API UGameplayAbilityTargetCombat : public UGameplayAbilityTargetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_EffectToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTargetConfigBase* m_TargetConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAbilityTask_UpdateTarget* m_UpdateTargetTask;
    
public:
    UGameplayAbilityTargetCombat();

protected:
    UFUNCTION(BlueprintCallable)
    void SetNetExecutionPolicy(TEnumAsByte<EGameplayAbilityNetExecutionPolicy::Type> NetExPolicy);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTargetVisualLost_Scriptable();
    
    UFUNCTION()
    void OnTargetDie();
    
    UFUNCTION()
    void OnTargetDefeated();
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION()
    void GameplayTagCallback(FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanInputTargetRelease_Scriptable();
    
};

