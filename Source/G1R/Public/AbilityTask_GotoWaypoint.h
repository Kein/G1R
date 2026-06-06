#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_NavigationRequest.h"
#include "AbilityTask_GotoWaypoint.generated.h"

class UAbilityTask_GotoWaypoint;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_GotoWaypoint : public UAbilityTask_NavigationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName TargetWaypoint;
    
    UAbilityTask_GotoWaypoint();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GotoWaypoint* TaskGotoWaypoint(UGameplayAbility* OwningAbility, FName WaypointName, float ReachDistance, bool bCanStrafe);
    
};

