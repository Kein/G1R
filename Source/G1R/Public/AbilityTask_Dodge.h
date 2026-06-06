#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_Dodge.generated.h"

class UAbilityTask_Dodge;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Dodge : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DesiredDirection;
    
    UAbilityTask_Dodge();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Dodge* TaskDodgeRight(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Dodge* TaskDodgeLeft(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Dodge* TaskDodgeFront(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Dodge* TaskDodgeBack(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Dodge* TaskDodgeAwayFrom(UGameplayAbility* OwningAbility, FVector DodgeAwayFromLocation);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Dodge* TaskDodge(UGameplayAbility* OwningAbility, FVector NewDesiredDirection);
    
};

