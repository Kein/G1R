#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedAction.h"
#include "EGenericTaskResult.h"
#include "InteractActionStartedDelegate.h"
#include "InteractDurationTimeLimitReachedDelegate.h"
#include "InteractionSpotHandle.h"
#include "AbilityTask_InteractWith.generated.h"

class AActor;
class UAbilityTaskGeneric;
class UAbilityTask_InteractWith;
class UAbilityTask_NavigationRequest;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_InteractWith : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float ActionDuration;
    
    UPROPERTY(BlueprintReadOnly)
    UAbilityTask_NavigationRequest* GotoSpotTask;
    
    UPROPERTY(BlueprintReadWrite)
    FInteractionSpotHandle InteractionSpot;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRequireSpot;
    
    UPROPERTY(BlueprintReadWrite)
    bool bVerifyActionStillPossibleInTick;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PossibleActions;
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FInteractDurationTimeLimitReached OnActionTimeLimitReached;
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FInteractActionStarted OnActionStarted;
    
    UAbilityTask_InteractWith();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_InteractWith* TaskInteractWithSpotRandomAction(UGameplayAbility* OwningAbility, FInteractionSpotHandle NewInteractionSpot, FGameplayTagContainer NewPossibleActions, float NewActionDuration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_InteractWith* TaskInteractWithSpot(UGameplayAbility* OwningAbility, FInteractionSpotHandle NewInteractionSpot, FGameplayTag NewAction, float NewActionDuration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_InteractWith* TaskInteractWithActorRandomAction(UGameplayAbility* OwningAbility, AActor* ActorToInteractWith, FGameplayTagContainer NewPossibleActions, float NewActionDuration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_InteractWith* TaskInteractWithActor(UGameplayAbility* OwningAbility, AActor* ActorToInteractWith, FGameplayTag NewAction, float NewActionDuration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_InteractWith* TaskInteractHereWithoutSpot(UGameplayAbility* OwningAbility, FGameplayTag NewAction, float NewActionDuration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_InteractWith* TaskFindAndInteractWithSpotRandomAction(UGameplayAbility* OwningAbility, const FVector& SearchAt, float SearchRadius, FGameplayTagContainer NewPossibleActions, float NewActionDuration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_InteractWith* TaskFindAndInteractWithSpot(UGameplayAbility* OwningAbility, const FVector& SearchAt, float SearchRadius, FGameplayTag ActionToDo, float NewActionDuration);
    
protected:
    UFUNCTION()
    void HandleGotoTaskFinished(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
};

