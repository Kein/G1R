#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateRiposteMagnet.generated.h"

class AGothicCharacter;
class UAbilityTask_UpdateRiposteMagnet;
class UAnimMontage;
class UAnimNotifyState_RiposteMagnet;
class UCombatConfig;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_UpdateRiposteMagnet : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UCombatConfig* m_CombatConfig;
    
public:
    UAbilityTask_UpdateRiposteMagnet();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateRiposteMagnet* UpdateRiposteMagnet(UGameplayAbility* OwningAbility, FName TaskInstanceName, const UAnimNotifyState_RiposteMagnet* magnetNotify, AGothicCharacter* Target, UAnimMontage* Montage);
    
};

