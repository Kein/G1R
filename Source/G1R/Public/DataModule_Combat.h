#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DataModule.h"
#include "EAttackHandle.h"
#include "EAttackState.h"
#include "ECombatStance.h"
#include "ERangedWeaponState.h"
#include "DataModule_Combat.generated.h"

class AGothicCharacter;
class UAttackMeleeConfig;
class UComboAttackConfig;
class UHurtBoxCollisionComponent;
class USceneComponent;
class UWeaponDefinition;
class UWeaponMeleeDefinition;

UCLASS(BlueprintType)
class G1R_API UDataModule_Combat : public UDataModule {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    ERangedWeaponState m_CurrentRangedState;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRepStanceChanged)
    ECombatStance m_Stance;
    
    UPROPERTY(Replicated)
    ECombatStance m_DesiredStance;
    
    UPROPERTY(ReplicatedUsing=OnRepAttackState)
    EAttackState m_AttackState;
    
    UPROPERTY(ReplicatedUsing=OnRepBlockState)
    FGameplayTag m_BlockState;
    
    UPROPERTY(ReplicatedUsing=OnRepAttackDirection)
    FGameplayTag m_CurrentAttackDirection;
    
    UPROPERTY(Replicated)
    FGameplayTag m_DefeatingAttackDirection;
    
    UPROPERTY(Replicated)
    FGameplayTag m_CurrentParryDirection;
    
    UPROPERTY(Replicated)
    FGameplayTag m_CurrentPose;
    
    UPROPERTY()
    AGothicCharacter* m_LastAttackerCharacter;
    
    UPROPERTY()
    UComboAttackConfig* m_CurrentCombo;
    
    UPROPERTY(Replicated)
    FGameplayTag m_LastWeaponDamaged;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_AttackCount;
    
public:
    UDataModule_Combat();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLastAttackerCharacter(AGothicCharacter* newCharacter);
    
    UFUNCTION(Reliable, Server)
    void Server_SetStance(ECombatStance stance);
    
    UFUNCTION(Reliable, Server)
    void Server_SetDesiredStance(ECombatStance DesiredStance);
    
    UFUNCTION(Reliable, Server)
    void Server_SetDefeatingAttackDirection(FGameplayTag DefeatingAttackDirection);
    
    UFUNCTION(Reliable, Server)
    void Server_SetCurrentParryDirection(FGameplayTag CurrentParryDirection);
    
    UFUNCTION(Reliable, Server)
    void Server_SetCurrentAttackDirection(FGameplayTag CurrentAttackDirection);
    
    UFUNCTION(Reliable, Server)
    void Server_SetBlockState(FGameplayTag BlockState);
    
    UFUNCTION(Reliable, Server)
    void Server_SetAttackState(EAttackState AttackState);
    
    UFUNCTION(BlueprintCallable)
    void SeLastTauntTags(FGameplayTagContainer& LastTauntTags);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackCount();
    
    UFUNCTION()
    void OnRepStanceChanged();
    
    UFUNCTION()
    void OnRepBlockState();
    
    UFUNCTION()
    void OnRepAttackState();
    
    UFUNCTION()
    void OnRepAttackDirection();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseAttackCount();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetClosestHurtCollisionPoint(AGothicCharacter* Target);
    
    UFUNCTION(BlueprintPure)
    ECombatStance GetStance() const;
    
    UFUNCTION(BlueprintPure)
    float GetNextAttacksRangeInPlace(FGameplayTag AttackDirection) const;
    
    UFUNCTION(BlueprintPure)
    float GetNextAttacksRange(FGameplayTag AttackDirection) const;
    
    UFUNCTION(BlueprintPure)
    UComboAttackConfig* GetNextAttackConfig(FGameplayTag AttackDirection) const;
    
    UFUNCTION(BlueprintPure)
    UHurtBoxCollisionComponent* GetMagnetTargetHurtComponent() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetMagnetTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMagnetDamagePoint() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMagnetDamagePivotPoint() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetLastTauntTags();
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetLastAttackerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    float GetHigherAttackRange(const UWeaponMeleeDefinition* WeaponMeleeDefinition) const;
    
    UFUNCTION(BlueprintPure)
    UWeaponDefinition* GetEquipedWeaponDefinition() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetDefeatingAttackDirection() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentParryDirection() const;
    
    UFUNCTION(BlueprintPure)
    UComboAttackConfig* GetCurrentCombo() const;
    
    UFUNCTION(BlueprintPure)
    EAttackHandle GetCurrentAttackHandle() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentAttackDirection() const;
    
    UFUNCTION(BlueprintPure)
    UAttackMeleeConfig* GetCurrentAttack() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetBlockState() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackRangeInPlace(const UComboAttackConfig* Combo) const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackRange(const UComboAttackConfig* Combo) const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackCount() const;
    
    UFUNCTION(BlueprintPure)
    bool CheckIfNextAttackConfig(FGameplayTag AttackDirection) const;
    
};

