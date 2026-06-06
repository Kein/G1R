#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "AbilityTask_ParkourAction.h"
#include "AbilityTask_Parkour_DropDown.generated.h"

UCLASS()
class G1R_API UAbilityTask_Parkour_DropDown : public UAbilityTask_ParkourAction {
    GENERATED_BODY()
public:
    UAbilityTask_Parkour_DropDown();

protected:
    UFUNCTION()
    void HandleCharacterLanded(const FHitResult& Hit);
    
};

