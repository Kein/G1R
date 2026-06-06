#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EStance.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityCrouch.generated.h"

UCLASS()
class G1R_API UGameplayAbilityCrouch : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
    UGameplayAbilityCrouch();

protected:
    UFUNCTION()
    void OnStanceChanged(EStance NewStance);
    
    UFUNCTION()
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMovementMode);
    
};

