#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "InputAction.h"
#include "GameplayAbilityMovement.h"
#include "GameplayAbilityFly.generated.h"

class UFlyConfig;

UCLASS()
class G1R_API UGameplayAbilityFly : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UFlyConfig* m_flyConfig;
    
    UPROPERTY(EditAnywhere)
    bool m_CanLand;
    
public:
    UGameplayAbilityFly();

protected:
    UFUNCTION(Reliable, Server)
    void Server_Fall();
    
    UFUNCTION()
    void OnLandedCallback(const FHitResult& Hit);
    
    UFUNCTION()
    void InputMoveDownUp(float AxisValue);
    
    UFUNCTION()
    void InputFlyUp(const FInputActionInstance& Instance);
    
    UFUNCTION()
    void InputFlyDown(const FInputActionInstance& Instance);
    
};

