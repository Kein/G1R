#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityActivateStation.generated.h"

class AGothicCharacter;
class AInteractiveObjectActor;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityActivateStation : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAnimMontage* m_CharMontage;
    
    UPROPERTY()
    UAnimMontage* m_InteractiveObjectMontage;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    FName m_UniqueName;
    
    UPROPERTY()
    FName m_RequiredUniqueName;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
public:
    UGameplayAbilityActivateStation();

protected:
    UFUNCTION(BlueprintCallable)
    void DamageReceived(FGameplayEventData Payload);
    
};

