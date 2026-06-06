#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskGeneric.h"
#include "EGenericTaskResult.h"
#include "AbilityTask_MoveIntoPositionForInteraction.generated.h"

class UAbilityTask_AlignCharacterAtLocation;
class UAbilityTask_MoveIntoPositionForInteraction;
class UAbilityTask_TurnTo;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_MoveIntoPositionForInteraction : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UAbilityTaskGeneric* MoveTask;
    
    UPROPERTY(Transient)
    UAbilityTask_TurnTo* TurnTask;
    
    UPROPERTY(Transient)
    UAbilityTask_AlignCharacterAtLocation* AlignTask;
    
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsReadyToStartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAlignDuringAnimationSecondsEstimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTotalAlignmentDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleDegreeDifferenceThatNeedsExplicitTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTryPutOntoFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartStrafingWhenWithinDistance;
    
    UAbilityTask_MoveIntoPositionForInteraction();

protected:
    UFUNCTION()
    void HandleAlignmentFinished(UAbilityTaskGeneric* Task, EGenericTaskResult GenericTaskResult);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MoveIntoPositionForInteraction* BP_TaskMoveIntoPositionForInteraction(UGameplayAbility* OwningAbility, const FVector& InCharacterDestinationLocation, const FRotator& InDestinationRotation);
    
};

