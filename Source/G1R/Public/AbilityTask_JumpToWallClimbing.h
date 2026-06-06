#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "EGenericTaskResult.h"
#include "AbilityTask_JumpToWallClimbing.generated.h"

class AClimbableWall;
class UAbilityTask_Parkour_Jump;
class UAbilityTask_TriggerWallClimb;

UCLASS()
class G1R_API UAbilityTask_JumpToWallClimbing : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AClimbableWall* ClimbableWall;
    
    UPROPERTY()
    UAbilityTask_Parkour_Jump* JumpTask;
    
    UPROPERTY()
    UAbilityTask_TriggerWallClimb* TriggerWallClimbTask;
    
public:
    UAbilityTask_JumpToWallClimbing();

protected:
    UFUNCTION()
    void OnWallClimbTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void OnJumpTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
};

