#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_Parkour.generated.h"

class UAbilityTask_Parkour;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Parkour : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector GoalLocation;
    
    UPROPERTY()
    bool bIsUsingNavLink;
    
    UAbilityTask_Parkour();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Parkour* TaskJumpThenFall(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Parkour* TaskJumpHorizontal(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Parkour* TaskDropDown(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Parkour* TaskClimbUp(UGameplayAbility* OwningAbility, const FVector& NewGoalLocation, bool bUseNavLink);
    
    UFUNCTION()
    void OnFinishedParkour(const FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION()
    void HandleCharacterLanded(const FHitResult& Hit);
    
};

