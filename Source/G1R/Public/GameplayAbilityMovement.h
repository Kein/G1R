#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityMovement.generated.h"

class UPathFollowingComponent;

UCLASS()
class G1R_API UGameplayAbilityMovement : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UPathFollowingComponent* m_PathFollowing;
    
public:
    UGameplayAbilityMovement();

protected:
    UFUNCTION()
    void InputMoveLeftRight(const FInputActionInstance& Instance);
    
    UFUNCTION()
    void InputMoveForwardBackwards(const FInputActionInstance& Instance);
    
};

