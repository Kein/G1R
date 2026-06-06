#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityBase_Locomotion.generated.h"

class AGothicCharacter;
class UAbilityTask_WaitMovementModeChange;
class UCharacterMovementComponent;
class UDataModule_Animation;
class UDataModule_Locomotion;
class ULocomotionConfig;

UCLASS()
class G1R_API UGameplayAbilityBase_Locomotion : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_Animation> m_DataModule_Anim;
    
    UPROPERTY(Instanced)
    ULocomotionConfig* m_LocomotionConfig;
    
    UPROPERTY(Instanced)
    UCharacterMovementComponent* m_CharacterMovementComponent;
    
    UPROPERTY()
    UAbilityTask_WaitMovementModeChange* movementModeChangeTask;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
public:
    UGameplayAbilityBase_Locomotion();

protected:
    UFUNCTION()
    void MovementModeChanged(TEnumAsByte<EMovementMode> NewMovementMode);
    
};

