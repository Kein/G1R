#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityBase_Combat.generated.h"

class UAbilityTask_UpdateRotationToTarget;
class UCarryComponent;
class UCombatConfig;
class UDataModule_Animation;
class UDataModule_BaseStats;
class UDataModule_Combat;
class UDataModule_Container;
class UDataModule_Locomotion;
class UDataModule_Targeting;
class UGothicMovementComponent;

UCLASS()
class G1R_API UGameplayAbilityBase_Combat : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_Combat> m_DataModule_Combat;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_Targeting> m_DataModule_Targeting;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_Animation> m_DataModule_Anim;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_BaseStats> m_DataModule_BaseStats;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UDataModule_Container> m_DataModule_Container;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_MoveComp;
    
    UPROPERTY(Instanced)
    UCombatConfig* m_CombatConfig;
    
    UPROPERTY()
    UAbilityTask_UpdateRotationToTarget* m_UpdateRotationTask;
    
public:
    UGameplayAbilityBase_Combat();

};

