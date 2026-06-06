#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_Roll.generated.h"

class UAbilityTask_Roll;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Roll : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DesiredDirection;
    
    UAbilityTask_Roll();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Roll* TaskRollToEvade(UGameplayAbility* OwningAbility, FVector DirectionOfIncommingAttack, bool bFlipSide);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Roll* TaskRollRight(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Roll* TaskRollLeft(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Roll* TaskRollFront(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Roll* TaskRollBack(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Roll* TaskRollAwayFrom(UGameplayAbility* OwningAbility, FVector RollAwayFromLocation);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Roll* TaskRoll(UGameplayAbility* OwningAbility, FVector Direction);
    
};

