#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_NavigationRequest.h"
#include "InteractionSpot.h"
#include "InteractionSpotHandle.h"
#include "AbilityTask_GotoInteractionSpot.generated.h"

class AActor;
class AGothicCharacter;
class UAbilityTask_GotoInteractionSpot;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_GotoInteractionSpot : public UAbilityTask_NavigationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FInteractionSpotHandle TargetSpot;
    
    UPROPERTY(BlueprintReadWrite)
    bool bFailIfClaimed;
    
    UAbilityTask_GotoInteractionSpot();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GotoInteractionSpot* TaskGotoInteractionSpot(UGameplayAbility* OwningAbility, FInteractionSpotHandle NewTargetSpot, bool NewBFailIfClaimed, float ReachDistance);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GotoInteractionSpot* TaskFindAndGotoSpot(UGameplayAbility* OwningAbility, FVector SearchAt, float SearchRadius, FGameplayTag ActionToDo, bool NewBFailIfClaimed, float ReachDistance);
    
    UFUNCTION()
    void OnSpotOccupierChanged(const FInteractionSpot& Spot, AActor* New, AActor* Old, FGameplayTag Action);
    
    UFUNCTION(BlueprintCallable)
    static bool CanGotoInteractionSpot(const AGothicCharacter* Character, FInteractionSpotHandle NewTargetSpot, float ReachDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool CanFindAndGotoSpot(const AGothicCharacter* Character, FVector SearchAt, float SearchRadius, FGameplayTag ActionToDo, float ReachDistance);
    
};

