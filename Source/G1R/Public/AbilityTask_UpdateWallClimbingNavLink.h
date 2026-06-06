#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_UpdateWallClimbing.h"
#include "AbilityTask_UpdateWallClimbingNavLink.generated.h"

class USplineComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateWallClimbingNavLink : public UAbilityTask_UpdateWallClimbing {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USplineComponent* m_Spline;
    
public:
    UAbilityTask_UpdateWallClimbingNavLink();

};

