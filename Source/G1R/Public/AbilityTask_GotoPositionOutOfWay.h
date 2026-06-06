#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_GotoPosition.h"
#include "AbilityTask_GotoPositionOutOfWay.generated.h"

class AGothicCharacter;
class UAbilityTask_GotoPositionOutOfWay;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_GotoPositionOutOfWay : public UAbilityTask_GotoPosition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* OtherCharacter;
    
public:
    UAbilityTask_GotoPositionOutOfWay();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GotoPositionOutOfWay* TaskGotoPositionAndStrafeTowards(UGameplayAbility* OwningAbility, const FVector& TargetPosition, AGothicCharacter* NewOtherCharacter, float ReachDistance, bool bCanStrafe);
    
};

