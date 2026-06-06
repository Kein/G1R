#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_NavigationRequest.h"
#include "AbilityTask_GotoPreferredLocation.generated.h"

class AGothicCharacter;
class UAbilityTask_GotoPreferredLocation;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_GotoPreferredLocation : public UAbilityTask_NavigationRequest {
    GENERATED_BODY()
public:
    UAbilityTask_GotoPreferredLocation();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GotoPreferredLocation* TaskGotoPreferredLocation(UGameplayAbility* OwningAbility);
    
    UFUNCTION()
    void HandlePreferredLocationChanged();
    
    UFUNCTION(BlueprintCallable)
    static bool CanGotoPreferredLocation(const AGothicCharacter* Character);
    
};

