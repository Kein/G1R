#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "EStateBasedActionStage.h"
#include "AbilityTask_StateBasedAction.generated.h"

UCLASS()
class G1R_API UAbilityTask_StateBasedAction : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag StateTag;
    
    UPROPERTY(BlueprintReadOnly)
    EStateBasedActionStage Stage;
    
    UPROPERTY(BlueprintReadWrite)
    bool bEndWhenEnteredState;
    
    UPROPERTY(BlueprintReadWrite)
    bool bOnlyEndOnShouldEndNow;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCanEndEarly;
    
    UPROPERTY(BlueprintReadWrite)
    bool bBlockStateMachineWhileBlocked;
    
    UAbilityTask_StateBasedAction();

    UFUNCTION()
    void OnStateTagCountChanged(const FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION()
    void OnActionCompletedCallback();
    
};

