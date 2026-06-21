#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityMining.generated.h"

class UAbilityTask_PlayMontage_Extended;

UCLASS()
class G1R_API UGameplayAbilityMining : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
public:
    UGameplayAbilityMining();

protected:
    UFUNCTION(Reliable, Server)
    void Server_OnCloseRequested();
    
};

