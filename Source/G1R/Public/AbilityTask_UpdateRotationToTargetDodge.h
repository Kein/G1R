#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateRotationToTargetDodge.generated.h"

class UAbilityTask_UpdateRotationToTargetDodge;
class UGameplayAbility;
class UGothicMovementComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateRotationToTargetDodge : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_MoveComp;
    
public:
    UAbilityTask_UpdateRotationToTargetDodge();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateRotationToTargetDodge* CreateUpdateRotationToTargetDodge(UGameplayAbility* OwningAbility, FName TaskInstanceName, float RotationSpeed);
    
};

