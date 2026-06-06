#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "EInventoryTypes.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbility_EquipItem.generated.h"

class AActor;
class UAbilityTask_NetworkSyncPoint;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitPressAxis;
class UCarryComponent;
class UGothicAnimInstance;
class UItemDefinition;

UCLASS()
class G1R_API UGameplayAbility_EquipItem : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UItemDefinition* m_NextItemDef;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(Instanced)
    UItemDefinition* m_EquippedItem;
    
    UPROPERTY(Instanced)
    UItemDefinition* m_LastEquippedWeapon;
    
    UPROPERTY(Instanced)
    UItemDefinition* m_LastEquippedMeleeWeapon;
    
    UPROPERTY(Instanced)
    UItemDefinition* m_LastEquippedRangedWeapon;
    
    UPROPERTY(Instanced)
    UItemDefinition* m_ItemToDrop;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY()
    UAbilityTask_WaitPressAxis* m_WaitAxisTask;
    
    UPROPERTY()
    UGothicAnimInstance* m_AnimInstance;
    
    UPROPERTY()
    AActor* m_InteractiveActor;
    
    UPROPERTY()
    UAbilityTask_NetworkSyncPoint* m_NetSync;
    
public:
    UGameplayAbility_EquipItem();

protected:
    UFUNCTION(Reliable, Server)
    void Server_RequestEndAbility(EInventoryTypes invNext, int32 slotNext, bool shouldPlayAnim, bool forced);
    
    UFUNCTION(Reliable, Server)
    void Server_OnDropItemEvent(const FGameplayEventData TriggerEventData);
    
    UFUNCTION()
    void RequestEndAbilityFinish();
    
    UFUNCTION()
    void RequestEndAbility(bool PlayAnim, bool forced, bool Preload);
    
    UFUNCTION()
    void OnWaterLevelChanged(float WaterDepth);
    
    UFUNCTION()
    void OnUnequipFinish();
    
    UFUNCTION()
    void OnSyncFinishEquipEnd();
    
    UFUNCTION()
    void OnSyncEnd();
    
    UFUNCTION()
    void OnStartedRiding();
    
    UFUNCTION()
    void OnResetStates();
    
    UFUNCTION()
    void OnEquipEffectFullyRemoved(const FGameplayEffectRemovalInfo& removalInfo);
    
public:
    UFUNCTION()
    UItemDefinition* GetLastEquipedWeapon() const;
    
    UFUNCTION()
    UItemDefinition* GetLastEquipedRangedWeapon() const;
    
    UFUNCTION()
    UItemDefinition* GetLastEquipedMeleeWeapon() const;
    
protected:
    UFUNCTION()
    void FinishEquip();
    
};

