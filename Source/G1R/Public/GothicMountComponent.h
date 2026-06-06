#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "GothicMountComponentData.h"
#include "Templates/SubclassOf.h"
#include "GothicMountComponent.generated.h"

class AAIController;
class AGothicCharacter;
class AGothicPlayerControllerBase;
class APlayerState;
class UAbilitySystemComponent;
class UGameplayEffect;
class UScriptGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GothicCharacter, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicMountComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SaddleSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FActiveGameplayEffectHandle, FGothicMountComponentData> m_ActiveGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FActiveGameplayEffectHandle, FGameplayEffectSpec> m_PreviousGameplayEffectsWithoutRider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FActiveGameplayEffectHandle, FGameplayEffectSpec> m_EffectsToRemoveOnUnmount;
    
    UPROPERTY()
    TWeakObjectPtr<AAIController> m_AIMountController;
    
    UPROPERTY()
    TWeakObjectPtr<APlayerState> m_MountPlayerState;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<AGothicPlayerControllerBase> m_PlayerController;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<AGothicCharacter> m_mountCharacter;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<AGothicCharacter> m_riderCharacter;
    
    UPROPERTY()
    TMap<AGothicCharacter*, FGameplayEffectSpec> m_LastGameplayEffectSpecApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_AlcoholEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_SwampWeedEffect;
    
    UPROPERTY()
    bool m_IsUnmounting;
    
public:
    UGothicMountComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ValidGEClassToTarget(AGothicCharacter* TargetCharacter, const UGameplayEffect* GameplayEffect);
    
    UFUNCTION()
    void OnGameplayEffectAppliedToSelfRider(UAbilitySystemComponent* TargetAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle);
    
    UFUNCTION()
    void OnGameplayEffectAppliedToSelfMount(UAbilitySystemComponent* Source, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle);
    
public:
    UFUNCTION(BlueprintPure)
    FName GetSaddleSocketName() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetRiderCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetMountCharacter() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeTransferedToRiderWhenMount(const UGameplayEffect* GameplayEffect);
    
};

