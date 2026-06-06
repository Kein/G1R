#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "GothicAIMoveRequest.h"
#include "AbilityTask_NavigationRequest.generated.h"

class AGothicCharacterState;
class UAbilityTask_DirectMove;
class UAbilityTask_NavigationRequest;
class UGameplayAbility;

UCLASS(Abstract)
class G1R_API UAbilityTask_NavigationRequest : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGothicAIMoveRequest MoveRequest;
    
protected:
    UPROPERTY()
    UAbilityTask_DirectMove* BackToNavMeshTask;
    
public:
    UAbilityTask_NavigationRequest();

    UFUNCTION()
    static UAbilityTask_NavigationRequest* TaskNavigationRequest(UGameplayAbility* OwningAbility, const FGothicAIMoveRequest& NewMoveRequest);
    
protected:
    UFUNCTION()
    void OnNavLinkTagChanged(const FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION()
    void OnLockMovementTagChanged(const FGameplayTag InTag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool BP_IsAlreadyAtGoal(const AGothicCharacterState* CharacterState, const FVector& Location, float ReachDistance);
    
};

