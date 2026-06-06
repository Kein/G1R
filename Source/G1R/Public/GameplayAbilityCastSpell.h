#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityMagicBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityCastSpell.generated.h"

class UAnimMontage;
class UGothicAbilitySystemComponent;
class USpellConfigurationContainer;
class USpellExecutionValidator;
class USpellExecutionValidatorData;

UCLASS()
class G1R_API UGameplayAbilityCastSpell : public UGameplayAbilityMagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    bool m_HasCreatedSpellAbilityServer;
    
    UPROPERTY()
    FName m_PreviousMontageName;
    
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_TriggerBeginOnSpellTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpellConfigurationContainer> m_SpellConfigurationContainerClass;
    
    UPROPERTY()
    USpellConfigurationContainer* m_SpellConfigurationContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpellExecutionValidator> m_ExecutionValidator;
    
public:
    UGameplayAbilityCastSpell();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server)
    void ServerClearMontageTaskDelegates(bool WasCancelled);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayNextCastLevel_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayLaunchSpell_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayFailCastMontage_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayCancelCastMontage_Scriptable(const UAnimMontage* cancelMontage);
    
    UFUNCTION()
    void OnManaConsumedOnServer(const FGameplayEffectRemovalInfo& Info);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputReleased_Scriptable();
    
    UFUNCTION()
    void OnFailCastSpellMontageInterrupted();
    
    UFUNCTION()
    void OnFailCastSpellMontageCompleted();
    
    UFUNCTION()
    void OnFailCastSpellMontageCancelled();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndCastSpellServer_Scriptable(bool WasCancelled);
    
private:
    UFUNCTION()
    void OnDisableCancel();
    
public:
    UFUNCTION()
    void OnCastSpellMontageInterrupted();
    
    UFUNCTION()
    void OnCastSpellMontageCompleted();
    
    UFUNCTION()
    void OnCastSpellMontageCancelled();
    
    UFUNCTION()
    void OnCastEndSpellMontageInterrupted();
    
    UFUNCTION()
    void OnCastEndSpellMontageCancelled();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool OnCanActivateAbilityServer_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateCastSpellServer_Scriptable(const UAnimMontage* castMontage);
    
    UFUNCTION(BlueprintNativeEvent)
    bool NeedUseManaToCast_Scriptable() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool NeedItemInHand_Scriptable() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void LaunchSpellAbilityServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCastingToCancelPreviousSpell_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    bool HasCreatedSpellAbilityServer();
    
    UFUNCTION(BlueprintPure)
    float GetCastSectionDuration(const FName& SectionName) const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    float GetCastDuration_Scriptable() const;
    
protected:
    UFUNCTION()
    void FinishCastAfterLaunchSpell();
    
    UFUNCTION(BlueprintPure)
    bool ExecuteValidator(USpellExecutionValidatorData* ExecutionValidatorData) const;
    
    UFUNCTION()
    void DoActivateAbility();
    
public:
    UFUNCTION(BlueprintCallable)
    void ConsumeManaServer();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientSpellLaunched();
    
    UFUNCTION(Client, Reliable)
    void ClientPlayLaunch();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientPlayFailCastMontage();
    
    UFUNCTION(Client, Reliable)
    void ClientPlayCancelCastMontage();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientClearMontageTaskDelegates(bool WasCancelled);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CanLaunchSpellAbilityServer_Scriptable();
    
};

