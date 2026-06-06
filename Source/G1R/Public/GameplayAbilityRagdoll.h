#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityRagdoll.generated.h"

class URagdollComponent;

UCLASS()
class G1R_API UGameplayAbilityRagdoll : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    URagdollComponent* m_RagdollComponent;
    
public:
    UGameplayAbilityRagdoll();

protected:
    UFUNCTION()
    void OnPressMove(const FInputActionInstance& Instance);
    
};

