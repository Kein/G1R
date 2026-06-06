#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateRotation.generated.h"

class UAbilityTask_UpdateRotation;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_UpdateRotation : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UAbilityTask_UpdateRotation();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateRotation* CreateUpdateRotation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator TargetRotation, float RotationSpeed, float maxDuration);
    
};

