#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EWeaponSkill.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityExecution.generated.h"

class UAbilityTask_AlignCharacterAtLocation;
class UAbilityTask_PlayMontage_Extended;

UCLASS()
class G1R_API UGameplayAbilityExecution : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY()
    UAbilityTask_AlignCharacterAtLocation* m_AlignTask;
    
    UPROPERTY()
    FGameplayTag m_ItemTag;
    
    UPROPERTY()
    EWeaponSkill m_ItemSkill;
    
public:
    UGameplayAbilityExecution();

protected:
    UFUNCTION()
    void ReachingPositionTimeOut();
    
    UFUNCTION(BlueprintCallable)
    void EventAnimHit(FGameplayEventData Payload);
    
};

