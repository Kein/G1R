#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_NavLinkJump.generated.h"

class UAbilityTask_NavLinkJump;
class UCharacterMovementComponent;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_NavLinkJump : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCharacterMovementComponent* MovementComponent;
    
    UPROPERTY()
    UGameplayAbility* OwningAbility;
    
public:
    UAbilityTask_NavLinkJump();

private:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_NavLinkJump* TaskNavLinkJump(UGameplayAbility* NewOwningAbility, const FVector& NavLinkStart, const FVector& NavLinkEnd);
    
};

