#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_NavigationRequest.h"
#include "AbilityTask_GotoPosition.generated.h"

class AGothicCharacter;
class UAbilityTask_GotoPosition;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_GotoPosition : public UAbilityTask_NavigationRequest {
    GENERATED_BODY()
public:
    UAbilityTask_GotoPosition();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GotoPosition* TaskGotoPosition(UGameplayAbility* OwningAbility, const FVector& TargetPosition, float ReachDistance, bool bCanStrafe);
    
    UFUNCTION(BlueprintCallable)
    static bool CanGotoPosition(const AGothicCharacter* Character, FVector TargetPosition, float ReachDistance, bool bCanStrafe);
    
};

