#pragma once
#include "CoreMinimal.h"
#include "EWalkSpeed.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityMovementOverride.generated.h"

UCLASS()
class G1R_API UGameplayAbilityMovementOverride : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    EWalkSpeed m_AllowedWalkSpeed;
    
public:
    UGameplayAbilityMovementOverride();

};

