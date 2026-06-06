#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_CheckClimb.generated.h"

class ACharacter;
class UAbilityTask_CheckClimb;
class UClimbingConfig;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_CheckClimb : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UClimbingConfig* m_ClimbingConfig;
    
    UPROPERTY()
    ACharacter* m_Character;
    
public:
    UAbilityTask_CheckClimb();

    UFUNCTION()
    void OnPressJump();
    
    UFUNCTION()
    void OnJumpDown();
    
    UFUNCTION()
    void OnAutoClimb();
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_CheckClimb* CreateUpdateClimb(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

