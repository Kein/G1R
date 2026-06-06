#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_WarpTransform.generated.h"

class UAbilityTask_WarpTransform;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_WarpTransform : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UAbilityTask_WarpTransform();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WarpTransform* CreateWarpTransform(UGameplayAbility* OwningAbility, FRotator RotationOffset, float Duration, bool Interpolate, float InterpolationSpeed);
    
};

