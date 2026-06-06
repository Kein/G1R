#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_ParkourAction.h"
#include "AbilityTask_Parkour_Jump.generated.h"

UCLASS()
class G1R_API UAbilityTask_Parkour_Jump : public UAbilityTask_ParkourAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bIsJumpingTowardsClimbableWall;
    
    UPROPERTY()
    FVector LinkEndLocation;
    
public:
    UAbilityTask_Parkour_Jump();

};

