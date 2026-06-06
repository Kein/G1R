#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_TriggerWallClimb.generated.h"

class AClimbableWall;
class UAbilityTask_TriggerWallClimb;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_TriggerWallClimb : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AClimbableWall* ClimbableWall;
    
public:
    UAbilityTask_TriggerWallClimb();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TriggerWallClimb* TaskWallClimb(UGameplayAbility* OwningAbility, AClimbableWall* NewClimbableWall, FGameplayTag Tag);
    
protected:
    UFUNCTION()
    void OnWallClimbTagChanged(const FGameplayTag InTag, int32 NewCount);
    
};

