#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskAttackPushComboDelegateDelegate.h"
#include "AbilityTask_StateBasedInputAction.h"
#include "AbilityTask_Attack.generated.h"

class UAbilityTask_Attack;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Attack : public UAbilityTask_StateBasedInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> ComboChain;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLastMoveHasHit;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumHits;
    
    UPROPERTY(BlueprintReadWrite)
    bool bEndComboOnMiss;
    
    UPROPERTY(BlueprintAssignable)
    FAbilityTaskAttackPushComboDelegate OnContinueCombo;
    
    UAbilityTask_Attack();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Attack* TaskAttackTop(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Attack* TaskAttackRight(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Attack* TaskAttackLeft(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Attack* TaskAttackCombo(UGameplayAbility* OwningAbility, const TArray<FGameplayTag>& NewComboChain, bool NewBEndComboOnMiss);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Attack* TaskAttackBottom(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Attack* TaskAttack(UGameplayAbility* OwningAbility, FGameplayTag Direction);
    
    UFUNCTION(BlueprintPure)
    bool IsComboMovePossible(const FGameplayTag& Move) const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetPossibleComboMoves();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag DirectionTop();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag DirectionRight();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag DirectionLeft();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag DirectionBottom();
    
};

