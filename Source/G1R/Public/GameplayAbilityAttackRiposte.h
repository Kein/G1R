#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityAttackRiposte.generated.h"

class UAbilityTask_UpdateRiposteMagnet;
class UAbilityTask_UpdateRotationToTarget;

UCLASS()
class G1R_API UGameplayAbilityAttackRiposte : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_UpdateRiposteMagnet* m_UpdateMagnetTask;
    
    UPROPERTY()
    UAbilityTask_UpdateRotationToTarget* m_UpdateRotationTask;
    
public:
    UGameplayAbilityAttackRiposte();

};

