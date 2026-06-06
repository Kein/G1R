#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActiveGameplayEffectHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "ScriptGameplayAbility.h"
#include "SpellContext.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityMagicBase.generated.h"

class AActor;
class UAbilitySystemComponent;
class UDataModule_Animation;
class UDataModule_Locomotion;
class UGameplayEffect;
class UGothicMagicComponent;
class UGothicMovementComponent;
class USpellConfigLevelData;
class USpellConfigurationContainer;

UCLASS()
class G1R_API UGameplayAbilityMagicBase : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FSpellContext m_SpellContext;
    
private:
    UPROPERTY()
    bool m_AbilityHasBlockMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UDataModule_Animation> m_DataModule_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> m_Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UGothicMovementComponent> m_MoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UGothicMagicComponent> m_MagicComponent;
    
    UPROPERTY(Replicated)
    float m_IgnoreReleaseInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_GE_Mana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_EndAbilityTimeoutDelay;
    
private:
    UPROPERTY()
    FGameplayTag m_ActivateSpellCameraAbilityTag;
    
public:
    UGameplayAbilityMagicBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    bool WasTargetObtainedByTargetDatamodule();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldForceIgnoreInput_Scriptable();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseTarget();
    
private:
    UFUNCTION(BlueprintCallable)
    void RedirectToTarget_Internal(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RedirectToTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuickApplyGEToTarget_Scriptable(FGameplayEffectSpec& EffectSpec);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle QuickApplyGEToTarget(UAbilitySystemComponent* Target, TSubclassOf<UGameplayEffect> EffectClass, float Duration);
    
public:
    UFUNCTION(BlueprintPure)
    void PlayLaunchSpellMontage(const FName& SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale) const;
    
    UFUNCTION(BlueprintPure)
    void PlayCastMontage(const FName& SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask) const;
    
    UFUNCTION(BlueprintPure)
    void PlayCancelCastMontage(const FName& SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetValidated_Scriptable(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool OnShouldFinishSpellAfterActivation_Scriptable();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOutMana_Scriptable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbilityBeforeAssetPreload_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsTargetValid_Script(AActor* SourceActor, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetValid(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool IsSpellTargetTypeFocused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpellTargetTypeDynamic() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpellManaUsageTargetLevel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpellManaUsageRechargeable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpellManaUsageNormalContinuous() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpellManaUsageContinuous() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSpellAbilityActive();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOwnerActorAuthoritative();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOverridingGetStateLockMovementOnSpell_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOverridingGetStateLockMovementOnCast_Scriptable();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLastSpellLevel() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsInputPressed() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFinishCastAbilityByAnimNotifyOnLaunchSpell();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsCastAbilityActive();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementCurrentSpellLevel();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasMoreLaunches();
    
    UFUNCTION(BlueprintCallable)
    bool HasInfiniteLaunches();
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasEndLaunchAnimation();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetTraceRangeFromConfig_Scriptable() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetTraceRadiusFromConfig_Scriptable() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTargetOrOwner() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayEventData GetTargetEventData_Scriptable(AActor* Actor);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpellManaCostPerSecond() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpellLevels() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FSpellContext GetSpellContextRef();
    
public:
    UFUNCTION(BlueprintPure)
    USpellConfigurationContainer* GetSpellConfigurationContainer() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpellAreaRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpellAreaAngle() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetOverrideGetStateLockMovementOnSpell_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetOverrideGetStateLockMovementOnCast_Scriptable();
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<USpellConfigLevelData> GetLevelSpawnActorClassServer() const;
    
    UFUNCTION(BlueprintPure)
    float GetLevelCastingTime() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    AActor* GetFocusedTarget_Scriptable(AActor* AvatarActor) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TSubclassOf<AActor> GetFilterClassFromConfig_Scriptable() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<AActor*> GetCustomTarget_Scriptable(AActor* SourceActor, float TraceRange, float TraceRadius, TSubclassOf<AActor> FilterClass) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentSpellLevel() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    float GetCurrentMontageRemainingTime_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayEffect> GetConsumeManaGE_Scriptable();
    
public:
    UFUNCTION(BlueprintPure)
    float GetCastManaCost() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCancelSpellAfterFirstCharge();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FindTargetsInArea_Server(TArray<AActor*>& Targets, FVector AreaLocation, FVector AreaForward, float areaRange, float AreaAngle, AActor* SourceActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void DecrementCurrentSpellLevel();
    
private:
    UFUNCTION(BlueprintCallable)
    void DeactivateTarget_Internal();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateTarget();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientRedirectToTarget(AActor* Actor);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientOutOfMana();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientDeactivateTarget();
    
    UFUNCTION(Client, Reliable)
    void ClientActivateTarget(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckNumLaunches();
    
    UFUNCTION(BlueprintCallable)
    void ApplyManaEffect(float ManaValue, float Duration, TSubclassOf<UGameplayEffect> GameplayEffectClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void ActivateTarget_Interal(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateTarget(AActor* Actor);
    
};

