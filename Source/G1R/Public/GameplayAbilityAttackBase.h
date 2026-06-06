#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EMovementAction.h"
#include "GameplayAbilityBase_Combat.h"
#include "GameplayEffectContext_HitResponse.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityAttackBase.generated.h"

class AActor;
class AGothicCharacter;
class UAbilityTask_UpdateAttackAxis;
class UAbilityTask_UpdateAttackMagnet;
class UAbilityTask_UpdateFlyingAttackMagnet;
class UAbilityTask_UpdateHits;
class UAbilityTask_UpdateRotationToTargetMeleeMagnet;
class UAbilityTask_WaitPressAxis;
class UAbilityTask_WaitPressInput;
class UAnimNotifyState;
class UAnimNotifyState_Deflectable;
class UComboAttackConfig;
class UPrimitiveComponent;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityAttackBase : public UGameplayAbilityBase_Combat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AActor*> m_ActorsHit;
    
    UPROPERTY()
    FGameplayEffectContext_HitResponse m_ContextData;
    
    UPROPERTY()
    UAbilityTask_UpdateAttackMagnet* m_UpdateAttackMagnetTask;
    
    UPROPERTY()
    UAbilityTask_UpdateFlyingAttackMagnet* m_UpdateFlyingMagnetTask;
    
    UPROPERTY()
    UAbilityTask_UpdateRotationToTargetMeleeMagnet* m_UpdateRotationTaskMeleeMagnet;
    
    UPROPERTY()
    UComboAttackConfig* m_CurrentTempCombo;
    
    UPROPERTY()
    UComboAttackConfig* m_CurrentCombo;
    
    UPROPERTY()
    UAbilityTask_UpdateHits* m_UpdateHitsTask_Damage;
    
    UPROPERTY()
    UAbilityTask_UpdateAttackAxis* m_AttackAxisTask;
    
    UPROPERTY()
    UAbilityTask_WaitPressAxis* m_PressAttackTask;
    
    UPROPERTY()
    UAbilityTask_WaitPressInput* m_TaskBlock;
    
    UPROPERTY()
    TSet<AGothicCharacter*> m_HitCharactersInAttack;
    
    UPROPERTY()
    TMap<AGothicCharacter*, FGameplayEventData> m_DamagedCharactersInAttack;
    
    UPROPERTY()
    TMap<AGothicCharacter*, FGameplayEventData> m_DefeatedCharactersInAttack;
    
    UPROPERTY()
    TMap<AGothicCharacter*, FGameplayEventData> m_KilledCharactersInAttack;
    
    UPROPERTY()
    TMap<UAnimNotifyState*, UAbilityTask_UpdateHits*> m_NotifiesHitTasksMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_SuperArmorEffect;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY()
    TArray<FString> m_HitComponentNames;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EMovementAction m_MovementAction;
    
private:
    UPROPERTY(Transient)
    UAnimNotifyState_Deflectable* m_NotifyDeflect;
    
public:
    UGameplayAbilityAttackBase();

protected:
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldUpdateTaskUseComponentRotation_Scriptable();
    
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldCheckMovementMode_Scriptable() const;
    
    UFUNCTION()
    void OnValidData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION()
    void OnResetStates();
    
    UFUNCTION()
    void OnPressRoll();
    
    UFUNCTION()
    void OnPressDodge();
    
    UFUNCTION()
    void OnOverlapExit(const AActor* Actor);
    
    UFUNCTION()
    void OnOverlapEnterDeflect(UPrimitiveComponent* HitComp, const FHitResult Hit);
    
    UFUNCTION()
    void OnOverlapEnterDamage(UPrimitiveComponent* HitComp, const FHitResult Hit);
    
    UFUNCTION()
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMovementMode);
    
    UFUNCTION()
    void OnMoveAfterResetState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, bool WasCancelled);
    
    UFUNCTION()
    void OnBlockPressed();
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
    UFUNCTION()
    void OnAskedForMagnetTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
};

