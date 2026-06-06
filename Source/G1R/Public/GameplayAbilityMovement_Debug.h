#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityMovement.h"
#include "GameplayAbilityMovement_Debug.generated.h"

class APawn;

UCLASS()
class G1R_API UGameplayAbilityMovement_Debug : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    APawn* m_Pawn;
    
public:
    UGameplayAbilityMovement_Debug();

protected:
    UFUNCTION()
    void OnWalkOrSprint_Released();
    
    UFUNCTION()
    void OnWalk_Pressed();
    
    UFUNCTION()
    void OnSprint_Pressed();
    
    UFUNCTION()
    void InputMoveDownUp(float AxisValue);
    
};

